void starship::bug_report::create()
{
    char *v0;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x268]
    char *v2;  // [bp-0x260], Other Possible Types: char, unsigned long long
    int v3;  // [bp-0x258], Other Possible Types: unsigned long long
    int v4;  // [bp-0x258]
    void* v5;  // [bp-0x250], Other Possible Types: char
    char v6;  // [bp-0x240]
    void* v7;  // [bp-0x23f]
    unsigned long long v8;  // [bp-0x237]
    unsigned long long v9;  // [bp-0x230]
    void* v10;  // [bp-0x228], Other Possible Types: char *, char, unsigned long long
    unsigned long long v11;  // [bp-0x220]
    void* v12;  // [bp-0x218], Other Possible Types: char *, char
    unsigned long long v13;  // [bp-0x210]
    void* v14;  // [bp-0x208]
    unsigned long long v15;  // [bp-0x1f8]
    char v16;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x1e8]
    char *v18;  // [bp-0x1e0], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [bp-0x1d8]
    int v20;  // [bp-0x1d0], Other Possible Types: void*
    char v21;  // [bp-0x1c0]
    void* v22;  // [bp-0x1bf]
    unsigned long long v23;  // [bp-0x1b7]
    char *v24;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v25;  // [bp-0x1a0]
    char *v26;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x190]
    unsigned long long v28;  // [bp-0x188]
    char v29;  // [bp-0x180]
    unsigned long long v30;  // [bp-0x178]
    unsigned long long v31;  // [bp-0x170]
    int v32;  // [bp-0x168]
    int v33;  // [bp-0x158]
    unsigned long long v35;  // [bp-0x150]
    int v36;  // [bp-0x148], Other Possible Types: char *
    unsigned long long v37;  // [bp-0x140]
    void* v38;  // [bp-0x138]
    char v39;  // [bp-0x128]
    char v40;  // [bp-0x118]
    char v41;  // [bp-0x108]
    unsigned long long v42;  // [bp-0xf8]
    char v43;  // [bp-0xf0]
    char v44;  // [bp-0xe0]
    int v45;  // [bp-0xd0]
    char v46;  // [bp-0xc0]
    unsigned long long v47;  // [bp-0xb0]
    char v48;  // [bp-0xa8]
    unsigned long long v49;  // [bp-0xa0]
    unsigned long long v50;  // [bp-0x98]
    char v51;  // [bp-0x37]
    unsigned long long v53;  // rdx
    int v54;  // xmm1
    char v56;  // al

    v49 = core::str::<impl str>::trim_matches("\npkg_version:1.23.0\nbranch:\ncommit_hash:f7d58382\nbuild_time:2025-10-02 04:15:51 +00:00\nbuild_env:rustc 1.89.0-nightly (bf64d66bd 2025-05-21),nightly-2025-05-22-x86_64-unknown-linux-gnu\n\nGenerated bug report:\n\n\nForward the pre-filled report above to GitHub ", 184);
    v50 = v53;
    v0 = &v49;
    v1 = <&T as core::fmt::Display>::fmt;
    *((unsigned long long **)&v33) = &g_11f2238;
    v35 = 2;
    v38 = 0;
    v36 = &v0;
    v37 = 1;
    std::io::stdio::_print(&(unsigned long long)v33);
    os_info::get(&v49);
    v10.clone(&v49);
    starship::bug_report::get_shell_info(&v0);
    starship::bug_report::get_terminal_info(&v16);
    starship::bug_report::get_starship_config(&v24);
    v48 = v51;
    v54 = *((int128_t *)&v12);
    *((int128_t *)&v33) = *((int128_t *)&v10);
    v36 = v54;
    memcpy(&v38, &v0, 16);
    memcpy(&v39, &v2, 16);
    memcpy(&v40, &v5, 16);
    memcpy(&v41, &v6, 16);
    v42 = v9;
    memcpy(&v43, &v16, 16);
    memcpy(&v44, &v18, 16);
    v45 = v20;
    v47 = v26;
    memcpy(&v46, &v24, 16);
    starship::bug_report::get_github_issue_body(&v29, &(unsigned long long)v33);
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v1 = "Generated bug report:\n\n\nForward the pre-filled report above to GitHub in your browser?\n To avoid any sensitive data from being exposed, please review the included information before proceeding. Data forwarded to GitHub is subject to GitHub's privacy policy.\n";
    v2 = 21;
    v3 = 9223372036854775810;
    v10 = &v0;
    v11 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v12 = &v29;
    v13 = <alloc::string::String as core::fmt::Display>::fmt;
    v16 = &g_11f2258;
    v17 = 3;
    v20 = 0;
    v18 = &v10;
    v19 = 2;
    std::io::stdio::_print(&v16);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v0);
    v0 = &g_11f2288;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v4) = 0;
    std::io::stdio::_print(&v0);
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v1 = "Warning:-Commandcontextsjsr.jsonPROTOCOLprofile.";
    v2 = 8;
    v3 = 9223372036854775810;
    v10 = &v0;
    v11 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v16 = &g_11f2298;
    v17 = 2;
    v20 = 0;
    v18 = &v10;
    v19 = 1;
    std::io::stdio::_print(&v16);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v0);
    v21 = 1;
    v22 = 0;
    v23 = 90194313237;
    v16 = 0x8000000000000000;
    v17 = "yEnter keyEnter `` to accept, or anything else to decline, and `` to confirm your choice:\n\nFailed to open issue report in your browser: Please copy the above report and open an issue manually, or try opening the following link:\nWill not open an issue in yo";
    v18 = 1;
    v19 = 9223372036854775810;
    v20 = v32;
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v1 = "Enter keyEnter `` to accept, or anything else to decline, and `` to confirm your choice:\n\nFailed to open issue report in your browser: Please copy the above report and open an issue manually, or try opening the following link:\nWill not open an issue in your browser! Please copy the above report and open an issue manually.\nThanks for using the Starship bug report tool!\n";
    v2 = 9;
    v3 = 9223372036854775810;
    memcpy(&(char)v4, &v32, 16);
    v24 = &v16;
    v25 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v26 = &v0;
    v27 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v10 = &g_11f22b8;
    v11 = 3;
    v14 = 0;
    v12 = &v24;
    v13 = 2;
    std::io::stdio::_print(&v10);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v0);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v16);
    v10 = 0;
    v11 = 1;
    v12 = 0;
    v16 = std::io::stdio::stdin();
    v0 = v16.read_line(&v10);
    v1 = v53;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v0);
    alloc::str::<impl str>::to_lowercase(&v0, core::str::<impl str>::trim_matches(1, 0), v53);
    v56 = v1.equal(9, "yEnter keyEnter `` to accept, or anything else to decline, and `` to confirm your choice:\n\nFailed to open issue report in your browser: Please copy the above report and open an issue manually, or try opening the following link:\nWill not open an issue in yo", 1);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    if (v56)
    {
        starship::bug_report::make_github_issue_link(&v16, v30, v31);
        v28 = open::that(&v16);
        if (v28)
        {
            v15 = v28;
            v24 = &v15;
            v25 = <std::io::error::Error as core::fmt::Display>::fmt;
            v0 = &g_11f22e8;
            v1 = 2;
            v5 = 0;
            v2 = &v24;
            v3 = 1;
            std::io::stdio::_print(&v0);
            v24 = &v16;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_11f2308;
            v1 = 2;
            v5 = 0;
            v2 = &v24;
            v3 = 1;
            std::io::stdio::_print(&v0);
            core::ptr::drop_in_place<std::io::error::Error>(&v15);
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v28);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v16);
    }
    else
    {
        v0 = &g_11f2328;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        std::io::stdio::_print(&v0);
    }
    v0 = &g_11f2338;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    std::io::stdio::_print(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    core::ptr::drop_in_place<starship::bug_report::Environment>(&(unsigned long long)v33);
    core::ptr::drop_in_place<os_info::info::Info>(&v49);
    return;
}
