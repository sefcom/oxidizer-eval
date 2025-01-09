long long uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax

    if (a2 != 0x110000 && a2 == a0)
    {
        if (*(a1))
            return v2 | -0x100 | 1;
        *(a1) = 1;
        return 0;
    }
    return v1 | -0x100 | a0 - 58 < -10;
}
