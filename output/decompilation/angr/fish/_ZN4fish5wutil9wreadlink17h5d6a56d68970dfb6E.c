long long fish::wutil::wreadlink(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    char *v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xe0], Other Possible Types: char
    char v4;  // [bp-0xd0]
    char v5;  // [bp-0x90]
    unsigned long v7;  // r13
    unsigned long v8;  // cc_ndep
    char *v9;  // r15
    char *v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v14;  // rdx

    fish::wutil::lwstat(&v3, a1, a2);
    if (*((int *)&v3) == 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    0.unwrap(&g_14c1500);
    v7 = *((long long *)&v5) + 1;
    if ((char)_ccall(4, 24, *((long long *)&v5) + 1, 0, _ccall(19, 0, 0, v8)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c1518); /* do not return */
    v0.from_elem(v7, &g_14c1530);
    v9 = fish::common::wcs2zstring(a1, a2);
    if (!v2)
        core::panicking::panic_bounds_check(0, 0, &g_14c1548); /* do not return */
    v10 = v1;
    v11 = readlink(v9, v10, v7);
    if (v11 != -1)
    {
        v12 = v11;
        v11 >> 63.unwrap(&g_14c1560);
        if (v12 == v7)
            goto LABEL_12eda19;
        fish::common::str2wcstring(&v3, 0.index(v12, v10, v2, &g_14c1578), a2);
        *((long long *)&a0[16]) = *((long long *)&v4);
        *(a0) = v3;
    }
    else
    {
        fish::wutil::perror("readlinko", 8);
LABEL_12eda19:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v9, v14);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v10);
    return a0;
}
