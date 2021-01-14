cmake_minimum_required(VERSION 3.17)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithms
        "Searching and Sorting/activity-selection-problem-greedy-algo-1.cpp"
        "Searching and Sorting/binary_search-iterative.cpp"
        "Searching and Sorting/binary_search-recursive.cpp"
        "Searching and Sorting/bubble_sort.cpp"
        "Searching and Sorting/bucket_sort.cpp"
        "Searching and Sorting/comb_sort.cpp"
        "Searching and Sorting/counting_sort-num.cpp"
        "Searching and Sorting/counting_sort.cpp"
        "Searching and Sorting/cycle_sort.cpp"
        "Searching and Sorting/exponential_search.cpp"
        "Searching and Sorting/heap_sort.cpp"
        "Searching and Sorting/insertion_sort.cpp"
        "Searching and Sorting/interpolation_search.cpp"
        "Searching and Sorting/jump_search.cpp"
        "Searching and Sorting/linear_search.cpp"
        "Searching and Sorting/merge_sort.cpp"
        "Searching and Sorting/pigeonhole_sort.cpp"
        "Searching and Sorting/quick_sort.cpp"
        "Searching and Sorting/radix_sort.cpp"
        "Searching and Sorting/selection_sort.cpp"
        "Searching and Sorting/shell_sort.cpp"
        "Searching and Sorting/ternary_search.cpp"
        maximum_sum_rectangle_in_a_2D_matrix.cpp)
