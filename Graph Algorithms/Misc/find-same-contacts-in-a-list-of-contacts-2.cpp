// CPP14 program to find common contacts.
#include <bits/stdc++.h>
using namespace std;

// The class DSU will implement the Union Find
class DSU
{

    vector<int> parent, size;

public:
    // In the constructor, we assign the each index as its
    // own parent and size as the number of contacts
    // available for that index

    DSU(vector<vector<string>> &contacts)
    {
        for (int i = 0; i < contacts.size(); i++)
        {

            parent.push_back(i);

            size.push_back(contacts[i].size());
        }
    }

    // Finds the set in which the element belongs. Path
    // compression is used to optimise time complexity
    int findSet(int v)
    {

        if (v == parent[v])
            return v;

        return parent[v] = findSet(parent[v]);
    }

    // Unifies the sets a and b where, the element belonging
    // to the smaller set is merged to the one belonging to
    // the smaller set
    void unionSet(int a, int b, vector<string> &person1,
                  vector<string> &person2)
    {

        if (size[a] > size[b])
        {
            parent[b] = a;
            size[a] += size[b];
            for (auto contact : person2)
                person1.push_back(contact);
        }
        else
        {

            parent[a] = b;
            size[b] += size[a];
            for (auto contact : person1)
                person2.push_back(contact);
        }
    }
};

// Driver Code
int main()
{
    vector<vector<string>> contacts = {
        {"Gaurav", "gaurav@gmail.com",
         "gaurav@gfgQA.com"},
        {"Lucky", "lucky@gmail.com", "+1234567"},
        {"gaurav123", "+5412312", "gaurav123@skype.com"},
        {"gaurav1993", "+5412312", "gaurav@gfgQA.com"},
        {"raja", "+2231210", "raja@gfg.com"},
        {"bahubali", "+878312", "raja"}};

    // Initializing the object of DSU class
    DSU dsu(contacts);

    // Will contain the mapping of a contact to all the
    // indices it is present within
    unordered_map<string, vector<int>> contactToIndex;

    for (int index = 0; index < contacts.size(); index++)
    {

        for (auto contact : contacts[index])
            contactToIndex[contact].push_back(index);
    }

    // Unifies the sets of each contact if they are not
    // present in the same set
    for (auto contact : contactToIndex)
    {

        vector<int> indices = contact.second;

        for (int i = 0; i < indices.size() - 1; i++)
        {

            int set1 = dsu.findSet(indices[i]),
                set2 = dsu.findSet(indices[i + 1]);

            if (set1 != set2)
                dsu.unionSet(set1, set2, contacts[set1],
                             contacts[set2]);
        }
    }

    // Contains a map of all the distinct sets available
    // after union find has been completed
    unordered_map<int, vector<int>> unifiedSet;

    // All parents are mapped to the elemets in the set
    for (int i = 0; i < contacts.size(); i++)
    {

        unifiedSet[dsu.findSet(i)].push_back(i);
    }

    // Printing out elements from distict sets
    for (auto eachSet : unifiedSet)
    {

        for (auto element : eachSet.second)
            cout << element << " ";

        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}
