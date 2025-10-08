long long uu_groups::infallible_gid2grp(void* a0, unsigned int *a1)
{
    unsigned long long v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x78]
    char *v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    void* v7;  // [bp-0x60]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    char *v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    unsigned long long v15;  // rdx

    v2.locate(*(a1));
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        *((unsigned long long *)a0) = v2;
        *((unsigned long long *)&a0[8]) = v4;
        *((char **)&a0[16]) = v5;
        return a0;
    }
    v0 = 9223372036854775809;
    uucore::mods::error::set_exit_code(1);
    v12 = uucore::util_name();
    v13 = v15;
    v8 = &v12;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v0;
    v11 = <uu_groups::GroupsError as core::fmt::Display>::fmt;
    v2 = &g_4e2138;
    v3 = 3;
    v7 = 0;
    v5 = &v8;
    v6 = 2;
    std::io::stdio::_eprint(&v2);
    core::ptr::drop_in_place<uu_groups::GroupsError>(v0, *((long long *)&v1));
    v2.to_vec(core::fmt::num::imp::<impl u32>::_fmt(*(a1), &v8, 10), v15);
    *((char **)&a0[16]) = v5;
    *((int128_t *)a0) = *((int128_t *)&v2);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(0x8000000000000000, v4);
    return a0;
}
