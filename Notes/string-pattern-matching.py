def findmatch(stringt, stringp):
    """Problem: Substring Pattern Matching
       Input: A text string t and a pattern string p.
       Output: Does t contain the pattern p as a substring, and if so where?"""

    m = len(stringp)
    n = len(stringt)

    for i in range(n-m):
        j = 0 
        while j < m and stringt[i+j] == stringp[j]:
            j += 1

        if j == m:
            return i

    return -1

print findmatch("anderson", "and")