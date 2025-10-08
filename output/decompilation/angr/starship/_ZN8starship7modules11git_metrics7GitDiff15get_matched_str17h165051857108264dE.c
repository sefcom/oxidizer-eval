long long starship::modules::git_metrics::GitDiff::get_matched_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    int v3;  // [bp-0xb8]
    int v4;  // [bp-0xa8]
    int v5;  // [bp-0x98]
    char v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    int v9;  // [bp-0x68], Other Possible Types: char
    int v10;  // [bp-0x58]
    int v11;  // [bp-0x48]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    unsigned long long v15;  // rax

    v9.captures_at(a2, a0, a1);
    if (*((int *)&v9) == 2)
        return "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs";
    v8 = *((long long *)&v13);
    memcpy(&v6, &v12, 16);
    v5 = v11;
    v4 = v10;
    v3 = v9;
    v0.get_group(&v4, 1);
    if (*((int *)&v0) != 1)
        core::option::unwrap_failed(&g_11f48b8); /* do not return */
    v15 = v1.get(v2, v7, v8);
    if (!v15)
        core::str::slice_error_fail(v7, v8, v1, v2, &g_11f4770); /* do not return */
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v3);
    return v15;
}
