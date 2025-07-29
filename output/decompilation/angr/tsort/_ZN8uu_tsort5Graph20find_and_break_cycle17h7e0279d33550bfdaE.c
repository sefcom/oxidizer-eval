void uu_tsort::Graph::find_and_break_cycle(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xd0]
    char *v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8]
    char *v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    char *v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    char *v13;  // [bp-0x70], Other Possible Types: unsigned long long
    char v14;  // [bp-0x58]
    unsigned long long v15[4];  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v20;  // rdx
    unsigned long long v21[2];  // rax
    unsigned long long v22[4];  // rax
    unsigned long long v23;  // r15
    unsigned long long v24;  // r12
    unsigned long long v25;  // rdx

    v14.detect_cycle(a0);
    v2.clone(a0);
    v13 = v4;
    memcpy(&v12, &v2, 16);
    v11 = 2;
    uucore::mods::error::set_exit_code(1);
    v0 = uucore::util_name();
    v1 = v20;
    v7 = &v0;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &v11;
    v10 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
    v2 = &g_5762b0;
    v3 = 3;
    v6 = 0;
    v4 = &v7;
    v5 = 2;
    std::io::stdio::_eprint(&v2);
    core::ptr::drop_in_place<uu_tsort::TsortError>(&v11);
    v17 = v14.into_iter();
    v18 = v20;
    if (v17.next())
    {
        do
        {
            v2.to_vec(v21[0], v21[1]);
            v13 = v4;
            memcpy(&v12, &v2, 16);
            v11 = 3;
            uucore::mods::error::set_exit_code(1);
            v0 = uucore::util_name();
            v1 = v20;
            v7 = &v0;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v11;
            v10 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
            v2 = &g_5762b0;
            v3 = 3;
            v6 = 0;
            v4 = &v7;
            v5 = 2;
            std::io::stdio::_eprint(&v2);
            core::ptr::drop_in_place<uu_tsort::TsortError>(&v11);
            v21 = v17.next();
        } while (v21);
    }
    if (v16)
    {
        if (v16 != 1)
        {
            v22 = v15;
            v23 = v22[2];
            v24 = v22[3];
            a0.remove_edge(v22[0], v22[1], v23, v24);
            if (!a0.indegree(v23, v24))
                core::option::unwrap_failed(&g_576310); /* do not return */
            if (!v20)
                a1.push_back(v23, v24, &g_576328);
            ::0x49bde0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v14);
            return;
        }
        v25 = &g_5762f8;
    }
    else
    {
        v25 = &g_5762e0;
    }
    core::panicking::panic_bounds_check(v16, v16, v25); /* do not return */
}
