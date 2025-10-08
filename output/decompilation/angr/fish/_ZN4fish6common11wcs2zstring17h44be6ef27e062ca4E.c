long long fish::common::wcs2zstring(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    void* v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    unsigned long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    char v10;  // [bp-0x20]
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r15
    char v16;  // al
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx

    if (!a1)
    {
        return <alloc::ffi::c_str::CString as core::default::Default>::default();
    }
    else if (!((char)_ccall(4, 24, a1 + 1, 0, _ccall(20, a1, 0, v12))))
    {
        v3 = a1 + 1.with_capacity_in(1, 1, &g_14c0e28);
        v4 = v13;
        v5 = 0;
        fish::wcstringutil::wcs2string_callback(a0, a1, &v3);
        v3.push(0, &g_14c0e40);
        v2 = 0;
        memcpy(&v0, &v3, 16);
        v6.from_vec_with_nul(&v0);
        if (*((int *)&v6) == 2)
            return v7;
        v14 = v9;
        v15 = *((long long *)&v10);
        v0 = v14;
        v1 = v14 + v15;
        v16 = v0.position();
        if (!(v16 & 1))
            core::option::unwrap_failed(&g_14c0e58); /* do not return */
        v17 = v13 + 1;
        if ((char)_ccall(4, 24, v13 + 1, 0, _ccall(17, (unsigned long long)(v16 & 1), 0, _ccall(20, a1, 0, v12))))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c0e70); /* do not return */
        if (v17 < v15)
            v18 = v17;
        else
            v18 = v15;
        v0 = v8;
        v1 = v14;
        v2 = v18;
        return v0.from_vec_with_nul_unchecked();
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14c0e10); /* do not return */
    }
}
