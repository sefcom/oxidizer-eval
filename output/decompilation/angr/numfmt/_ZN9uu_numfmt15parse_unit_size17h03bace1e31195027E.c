void uu_numfmt::parse_unit_size(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    char *v2;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    void* v5;  // [bp-0xa8]
    int v6;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    char *v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    int v15;  // [bp-0x48], Other Possible Types: char
    char v16;  // [bp-0x38]
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    char v20;  // al
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx

    v0 = a1;
    v1 = a1 + a2;
    v2 = 0;
    v10.collect(&v0);
    v18 = v12;
    v19 = v18.get(a1, a2);
    if (!v19)
        core::str::slice_error_fail(a1, a2, v18, a2, &g_502810); /* do not return */
    if (v18)
    {
        alloc::slice::<impl [T]>::repeat(&v0, v18);
        v8 = v3;
        *((int128_t *)&v6) = *((int128_t *)&v0);
        v20 = v7.eq(v3, v11, v18);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
        if (!v20)
            goto LABEL_46c5d7;
LABEL_46c60c:
        v6 = 0;
        v7 = a1;
        v8 = a2;
        v9 = 1;
        v13 = &v6;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_502800;
        v1 = 1;
        v5 = 0;
        v2 = &v13;
        v4 = 1;
        v15.map_or_else(&v0);
        *((long long *)&a0[16]) = *((long long *)&v16);
        *(a0) = v15;
    }
    else
    {
LABEL_46c5d7:
        if (!((char)uu_numfmt::parse_unit_size_suffix(v19, v22) & 1))
            goto LABEL_46c60c;
        if (!v18)
        {
            *((unsigned long long *)&a0[8]) = v21;
            goto LABEL_46c6a4;
        }
        ::0x4655f0::core::num::<impl usize>::from_ascii_radix(&v0, v11, v18);
        if ((char)v0 == 1)
            goto LABEL_46c60c;
        *((unsigned long long *)&a0[8]) = v1 * v21;
LABEL_46c6a4:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    return;
}
