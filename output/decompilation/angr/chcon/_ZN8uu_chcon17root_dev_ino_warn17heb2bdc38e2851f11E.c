long long uu_chcon::root_dev_ino_warn(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx

    if (!(char)a0.equal(a1, "/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (same as '/'). Use --Circular directory structure.\nThis almost certainly means that you have a ", 1))
    {
        v5 = uucore::util_name();
        v6 = v15;
        v9 = &v5;
        v10 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4f04a0;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v5 = 1;
        v6 = a0;
        v7 = a1;
        v8 = 1;
        v9 = &v5;
        v10 = <os_display::Quoted as core::fmt::Display>::fmt;
        v11 = &_ZN8uu_chcon7options13preserve_root16NO_PRESERVE_ROOT17hbcb70d7a28ebeb93E;
        v12 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4f04e0;
        v1 = 3;
        v4 = 0;
        v2 = &v9;
        v3 = 2;
        return std::io::stdio::_eprint(&v0);
    }
    v5 = uucore::util_name();
    v6 = v14;
    v9 = &v5;
    v10 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4f04a0;
    v1 = 2;
    v4 = 0;
    v2 = &v9;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v5 = &_ZN8uu_chcon7options13preserve_root16NO_PRESERVE_ROOT17hbcb70d7a28ebeb93E;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4f04c0;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    return std::io::stdio::_eprint(&v0);
}
