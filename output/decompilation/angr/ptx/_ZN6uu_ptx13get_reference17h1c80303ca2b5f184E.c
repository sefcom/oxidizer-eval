long long uu_ptx::get_reference(void* a0, char a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    char *v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    void* v11;  // [bp-0x48]
    int v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r15
    unsigned long long v16;  // r15
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long v19;  // rax

    if ((a1 & 1))
    {
        v11 = 0;
        *((uint128_t *)&v12) = a3->field_20;
        v13 = 0;
        v6 = a3->field_38 + 1;
        v7 = &v11;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v9 = &v6;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v0 = &g_6518c0;
        v1 = 2;
        v5 = 0;
        v2 = &v7;
        v4 = 2;
        return a0.map_or_else(&v0);
    }
    else if ((a2 & 1))
    {
        (char)v0.find_at(a6, a7, a4, a5);
        v14 = v0;
        v15 = v14;
        v16 = v14;
        if (v15)
        {
            v3 = v2;
            v15 = v2;
            v16 = v4;
        }
        v17 = v15;
        v2 = v3;
        v18 = v17.get(v16, a4, a5);
        if (!v18)
            core::str::slice_error_fail(a4, a5, v17, v16, &g_6518e0); /* do not return */
        (char)v0.to_vec(v18, a2);
        *((unsigned long long *)&a0[16]) = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
        return v2;
    }
    else
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = 0;
        return v19;
    }
}
