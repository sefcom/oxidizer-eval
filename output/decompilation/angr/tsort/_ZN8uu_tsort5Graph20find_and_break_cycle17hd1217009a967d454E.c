void uu_tsort::Graph::find_and_break_cycle(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    char v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc8]
    char *v6;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    char *v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    char *v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    char *v15;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v16[4];  // [bp-0x58]
    char v17;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v18[4];  // [bp-0x40]
    char v19;  // [bp-0x38]
    unsigned long long v21;  // rdx
    unsigned long long v22[4];  // r13
    unsigned long long v23[4];  // r13
    unsigned long long v24[4];  // r13
    unsigned long long v26[4];  // r15
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r12
    unsigned long long v29;  // rsi

    v17.detect_cycle(a0);
    v4.clone(a0);
    v15 = v6;
    memcpy(&v14, &v4, 16);
    v13 = 2;
    uucore::mods::error::set_exit_code(1);
    v2 = uucore::util_name();
    v3 = v21;
    v9 = &v2;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = &v13;
    v12 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
    v4 = &g_4eb378;
    v5 = 3;
    v8 = 0;
    v6 = &v9;
    v7 = 2;
    std::io::stdio::_eprint(&v4);
    core::ptr::drop_in_place<uu_tsort::TsortError>(&v13);
    v1 = &g_4eb3a8;
    if (*((long long *)&v19))
    {
        v22 = v18;
        v0 = *((long long *)&v19);
        v16[0] = v22;
        v23 = v22;
        do
        {
            v24 = v23;
            v4.to_vec(v24[0], v24[1]);
            v15 = v6;
            memcpy(&v14, &v4, 16);
            v13 = 3;
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v3 = v21;
            v9 = &v2;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = &v13;
            v12 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
            v4 = &g_4eb378;
            v5 = 3;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
            std::io::stdio::_eprint(&v4);
            core::ptr::drop_in_place<uu_tsort::TsortError>(&v13);
            v23 = &v24[2];
        } while (v23 != &v22[2 * v0]);
        if (v0)
        {
            v26 = v16;
            if (v0 != 1)
            {
                v27 = v26[2];
                v28 = v26[3];
                a0.remove_edge(v26[0], v26[1], v27, v28);
                if (!((char)a0.indegree(v27, v28) & 1))
                    core::option::unwrap_failed(&g_4eb3d8); /* do not return */
                if (!v21)
                    v29.push_back(v27, v28, &g_4eb3f0);
                core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v17, v26);
                return;
            }
            v1 = &g_4eb3c0;
        }
    }
    else
    {
        v0 = 0;
    }
    core::panicking::panic_bounds_check(v0, v0, v1); /* do not return */
}
