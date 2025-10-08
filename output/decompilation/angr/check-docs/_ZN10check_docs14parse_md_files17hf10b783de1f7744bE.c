long long check_docs::parse_md_files(unsigned long long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98], Other Possible Types: char
    char *v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    unsigned short v7;  // [bp-0x48]
    char v8;  // [bp-0x40]

    v0 = a2;
    v1 = a3;
    v2.new("\\((.*\\.md)\\) could not canonicalize md pathfile `` not in SUMMARY.mdFailed running `grep` command for pattern ''", 12);
    v8.expect(&v2, &g_5d35d0);
    v6.into_searcher(a1[1], a1[2]);
    v3 = &v8;
    v4 = 0;
    v5 = a1[2];
    v7 = 0;
    v2 = &v0;
    a0.collect(&v2);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v8);
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return a0;
}
