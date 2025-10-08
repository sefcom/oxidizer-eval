long long uu_tr::operation::Sequence::single_char(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    int v1;  // [bp-0x38]
    char *v2;  // [bp-0x28], Other Possible Types: char
    char v3;  // [bp-0x20]
    unsigned long v6;  // rax

    v0.process(nom::bytes::take(), a1, a2);
    if (*((int *)&v0) == 1)
    {
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v1;
        return &(char)v1;
    }
    else if (*((long long *)&v3))
    {
        v6 = *(v2);
        a0[8] = v1;
        *((char *)&a0[24]) = v6;
        *((unsigned long long *)a0) = 3;
        return v6;
    }
    else
    {
        core::panicking::panic_bounds_check(0, 0, &g_4fe320); /* do not return */
    }
}
