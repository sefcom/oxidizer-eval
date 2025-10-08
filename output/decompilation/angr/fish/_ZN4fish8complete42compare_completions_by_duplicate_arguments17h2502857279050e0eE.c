long long fish::complete::compare_completions_by_duplicate_arguments(unsigned int a0, unsigned int a1)
{
    return a1 * 2 & 0xffffff00 | (char)((a1 * 2 & 255) >> 7) + ((char)_ccall(0, (unsigned long long)a0 >> 6 & 1, 0, 0) & 1);
}
