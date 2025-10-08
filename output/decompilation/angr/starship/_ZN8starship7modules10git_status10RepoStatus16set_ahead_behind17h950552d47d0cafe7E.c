long long starship::modules::git_status::RepoStatus::set_ahead_behind(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8], Other Possible Types: char
    int v4;  // [bp-0xd8]
    int v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    int v9;  // [bp-0x98], Other Possible Types: char
    int v10;  // [bp-0x88]
    int v11;  // [bp-0x78]
    int v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v16;  // r15
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v3.new("branch\\.ab \\+([0-9]+) \\-([0-9]+)", 32);
    v14.unwrap(&v3, &g_11f4ba0);
    v9.captures_at(&v14, a1, a2);
    if (*((int *)&v9) == 2)
    {
        core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(&v9);
    }
    else
    {
        v8 = v13;
        v6 = v12;
        v5 = v11;
        v4 = v10;
        v3 = v9;
        v0.get_group(&v4, 1);
        if (*((int *)&v0) != 1)
            core::option::unwrap_failed(&g_11f4bb8); /* do not return */
        v16 = v7;
        v17 = v8;
        v18 = v1;
        v19 = v2;
        v20 = v18.get(v19, v16, v17);
        if (!v20)
            core::str::slice_error_fail(v16, v17, v18, v19, &g_11f4770); /* do not return */
        ::0xa6d750::core::num::<impl usize>::from_ascii_radix(&v0, v20, a2);
        a0[0] = v0 ^ 1;
        a0[1] = v1;
        v0.get_group(&v4, 2);
        if (*((int *)&v0) != 1)
            core::option::unwrap_failed(&g_11f4bd0); /* do not return */
        v16 = v7;
        v17 = v8;
        v18 = v1;
        v19 = v2;
        v21 = v18.get(v19, v16, v17);
        if (!v21)
            core::str::slice_error_fail(v16, v17, v18, v19, &g_11f4770); /* do not return */
        ::0xa6d750::core::num::<impl usize>::from_ascii_radix(&v0, v21, a2);
        a0[2] = v0 ^ 1;
        a0[3] = v1;
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v3);
    }
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v14);
}
