// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to count minimum
// squares that sum to n
int numSquares(int n)
{

    // Creating visited vector
    // of size n + 1
    vector<int> visited(n + 1, 0);

    // Queue of pair to store node
    // and number of steps
    queue<pair<int, int>> q;

    // Initially ans variable is
    // initialized with inf
    int ans = INT_MAX;

    // Push starting node with 0
    // 0 indicate current number
    // of step to reach n
    q.push({n, 0});

    // Mark starting node visited
    visited[n] = 1;
    while (!q.empty())
    {
        pair<int, int> p;
        p = q.front();
        q.pop();

        // If node reaches its destination
        // 0 update it with answer
        if (p.first == 0)
            ans = min(ans, p.second);

        // Loop for all possible path from
        // 1 to i*i <= current node(p.first)
        for (int i = 1; i * i <= p.first; i++)
        {

            // If we are standing at some node
            // then next node it can jump to will
            // be current node-
            // (some square less than or equal n)
            int path = (p.first - (i * i));

            // Check if it is valid and
            // not visited yet
            if (path >= 0 && (!visited[path] || path == 0))
            {

                // Mark visited
                visited[path] = 1;

                // Push it it Queue
                q.push({path, p.second + 1});
            }
        }
    }

    // Return ans to calling function
    return ans;
}

// Driver program
int main()
{
    cout << numSquares(12);

    cout << endl;
    system("pause");
    return 0;
}
