long long uu_sort::tokenize_with_separator::h26fd6235628b4dc9(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x48]
    void* v3;  // [sp-0x40]
    unsigned long v4;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v8;  // rax
    void* v9;  // r12
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbp

    v0 = a2;
    v1 = a0;
    v2 = a0 + a1;
    v3 = 0;
    v4 = &v0;
    v8 = core::iter::traits::iterator::Iterator::try_fold::h52b9c9e5c6b241de(&v1, &v4, a2);
    if (!v8)
    {
        v9 = 0;
        if (0 >= a1)
            return v8;
    }
    else
    {
        v9 = 0;
        do
        {
            v10 = v12;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2cea6af96bed3d53(a3, v9, v10);
            v9 = v10 + 1;
            v8 = core::iter::traits::iterator::Iterator::try_fold::h52b9c9e5c6b241de(&v1, &v4, v11);
        } while (v8);
        if (v9 >= a1)
            return v8;
    }
    v8 = alloc::vec::Vec$LT$T$C$A$GT$::push::h2cea6af96bed3d53(a3, v9, a1);
    return v8;
}
