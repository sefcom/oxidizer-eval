long long fish::wcstringutil::trim(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    char *v2;  // [bp-0x70]
    int v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58]
    void* v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    struct_0 *v10;  // r14
    unsigned long long v11;  // cc_ndep
    unsigned long long v12;  // 4096
    unsigned long long v14;  // r12
    unsigned long v15;  // r13
    unsigned long long v16;  // rbp
    char v17;  // al
    unsigned long v18;  // rdx
    unsigned long v19;  // rdx

    v10 = a1;
    if (!a2)
        a3 = 5;
    if (a2)
        v12 = a2;
    else
        v12 = "\t";
    v14 = v12;
    v15 = a1->field_10;
    v5 = v15;
    *((char [16])&v3) = a1->field_0;
    v16 = v4;
    v1 = v16 + v15 * 4;
    v17 = v0.rposition(v14, a3);
    if ((v17 & 1))
    {
        v19 = v18 + 1;
        if ((char)_ccall(4, 24, v18 + 1, 0, _ccall(17, (unsigned long long)(v17 & 1), 0, v11)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4980); /* do not return */
        if (v19 <= v15)
        {
            v5 = v19;
            v15 = v19;
        }
        v7 = v16;
        v8 = v15 * 4 + v16;
        v6 = 0;
        v0 = v14;
        v1 = a3;
        v2 = &v6;
        if (!((char)v7.try_fold(&v0) & 1))
            core::option::expect_failed("Should have one non-trimmed character", 37, &g_14e4998); /* do not return */
        v10 = &(char)v3;
        v0.split_off(&(char)v3, a2);
        *((char **)&a0[16]) = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v10);
    return a0;
}
