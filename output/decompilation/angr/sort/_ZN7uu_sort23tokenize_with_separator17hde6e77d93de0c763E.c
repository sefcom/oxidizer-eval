long long uu_sort::tokenize_with_separator::hde6e77d93de0c763(unsigned long a0, unsigned long long a1, unsigned int a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50]
    unsigned long long v2;  // [sp-0x48]
    void* v3;  // [sp-0x40]
    char *v4;  // [sp-0x38]
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx
    unsigned long long v8;  // rbp
    void* v9;  // r12

    v0 = a2;
    v1 = a0;
    v2 = a0 + a1;
    v3 = 0;
    v4 = &v0;
    v6 = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&v1, &v4);
    if (!v6)
    {
        v9 = 0;
        if (0 >= a1)
            return v6;
    }
    else
    {
        v8 = v7;
        v9 = 0;
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(a3, v9, v8);
            v9 = v8 + 1;
            v6 = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&v1, &v4);
            v8 = v7;
        } while (v6);
        if (v9 >= a1)
            return v6;
    }
    v6 = alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(a3, v9, a1);
    return v6;
}
