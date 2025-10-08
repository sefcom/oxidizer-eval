long long starship::bug_report::get_github_issue_body(unsigned long long a0, unsigned long long a1[7])
{
    unsigned long long v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x170]
    void* v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    unsigned long long v4;  // [bp-0x158]
    unsigned long v5;  // [bp-0x150]
    unsigned long long v6;  // [bp-0x148]
    unsigned long v7;  // [bp-0x140]
    unsigned long long v8;  // [bp-0x138]
    unsigned long v9;  // [bp-0x130]
    unsigned long long v10;  // [bp-0x128]
    unsigned long long v11[7];  // [bp-0x120]
    unsigned long long v12;  // [bp-0x118]
    unsigned long v13;  // [bp-0x110]
    unsigned long long v14;  // [bp-0x108]
    unsigned long v15;  // [bp-0x100]
    unsigned long long v16;  // [bp-0xf8]
    unsigned long long v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    char *v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xd0]
    unsigned long long v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xc0]
    unsigned long long v24;  // [bp-0xb8]
    unsigned long long v25;  // [bp-0xb0]
    unsigned long long v26;  // [bp-0xa8]
    unsigned long long v27;  // [bp-0xa0]
    unsigned long long v28;  // [bp-0x98]
    char *v29;  // [bp-0x90]
    unsigned long long v30;  // [bp-0x88]
    unsigned long v31;  // [bp-0x80]
    unsigned long long v32;  // [bp-0x78]
    unsigned long v33;  // [bp-0x70]
    unsigned long long v34;  // [bp-0x68]
    unsigned long long v35;  // [bp-0x60]
    unsigned long long v36;  // [bp-0x58]
    char *v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x48]
    void* v39;  // [bp-0x40]
    unsigned long v41;  // r15
    unsigned long v42;  // r12
    unsigned long long v43;  // r13

    v41 = a1[5];
    v42 = a1[6];
    if ((char)v41.equal(v42, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10))
    {
        v43 = "pwsh\n```";
    }
    else
    {
        v43 = "pwsh\n```";
        if (!(char)v41.equal(v42, "pwsh\n```", 4))
        {
            v43 = "fish ";
            if (!(char)v41.equal(v42, "fish ", 4))
                v43 = ((v41.equal(v42, "cmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about ", 3) & 255) ? "lua1.23.0rustc 1.89.0-nightly (bf64d66bd 2025-05-21)nightly-2025-05-22-x86_64-unknown-linux-gnurelease2025-10-02 04:15:51 +00:00" : "bashopam$allHOMEUserBare0000koi8CoreTextSlimv150granname");
        }
    }
    v0 = v43;
    v1 = 1;
    v2 = 0;
    v3 = &g_11f2458;
    v4 = <&T as core::fmt::Display>::fmt;
    v5 = &a1[4];
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = a1 + 1;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &a1[3 + 1];
    v10 = <os_info::os_type::Type as core::fmt::Display>::fmt;
    v11[0] = a1;
    v12 = <os_info::version::Version as core::fmt::Display>::fmt;
    v13 = &a1[1 + 6];
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &a1[2 + 2];
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v17 = &g_11f2468;
    v18 = <&T as core::fmt::Display>::fmt;
    v19 = &v1;
    v20 = <&T as core::fmt::Display>::fmt;
    v21 = &g_11f2478;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &g_11f2488;
    v24 = <&T as core::fmt::Display>::fmt;
    v25 = &g_11f2498;
    v26 = <&T as core::fmt::Display>::fmt;
    v27 = &g_11f24a8;
    v28 = <&T as core::fmt::Display>::fmt;
    v29 = &v0;
    v30 = <&T as core::fmt::Display>::fmt;
    v31 = &a1[1 + 3];
    v32 = <alloc::string::String as core::fmt::Display>::fmt;
    v33 = &a1[2 + 5];
    v34 = <alloc::string::String as core::fmt::Display>::fmt;
    v35 = &g_11f2348;
    v36 = 17;
    v39 = 0;
    v37 = &v3;
    v38 = 16;
    return a0.map_or_else(0, <alloc::string::String as core::fmt::Display>::fmt, &v35);
}
