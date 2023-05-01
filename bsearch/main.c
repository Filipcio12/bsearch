#include <stdio.h>

void* bsearch( const void *key, const void *ptr, size_t count, size_t size,
               int (*comp)(const void*, const void*) );

int int_cmp(const void* a, const void* b);

int main()
{
    int arr[] = {1, 4, 11, 19, 33, 42, 48, 55};
    return 0;
}

void* bsearch( const void *key, const void *ptr, size_t count, size_t size,
               int (*comp)(const void*, const void*) )
{
    int left = 0;
    int right = count - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (comp(key, ptr + mid) == 0) {
            return ptr + mid;
        }
        else if (comp(key, ptr + mid) > 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return NULL;
}

int int_cmp(const void* a, const void* b)
{
    
}