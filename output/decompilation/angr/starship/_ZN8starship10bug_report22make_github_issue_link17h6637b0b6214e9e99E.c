void starship::bug_report::make_github_issue_link(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    char *v5;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0x78], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x68]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x38]
    char v12;  // [bp-0x30]

    urlencoding::enc::encode_binary(&v0, a1, a2);
    alloc::str::<impl str>::replace(&v9, v1, v2, "%20+<unknown shell><unknown version>STARSHIP_SHELLsrc/bug_report.rs", 3, "+<unknown shell><unknown version>STARSHIP_SHELLsrc/bug_report.rs", 1);
    core::ptr::drop_in_place<versions::Chunk>(&v0);
    urlencoding::enc::encode_binary(&v12, "Bug_report.mdhttps://github.com/starship/starship/issues/new?template=&body=", 13);
    v5 = &v12;
    v6 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v7 = &v9;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_11f24b8;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 2;
    v10.map_or_else(0, a2, &v0);
    core::ptr::drop_in_place<versions::Chunk>(&v12);
    memcpy(&v0, &v10, 16);
    v2 = v11;
    v5 = v1;
    v6 = v2 + v1;
    v7 = 8100;
    a0.collect(&v5);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    return;
}
