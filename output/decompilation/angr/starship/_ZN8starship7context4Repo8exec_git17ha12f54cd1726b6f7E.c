int starship::context::Repo::exec_git(unsigned long long *a0, struct_1 *a1, struct_0 *a2, unsigned long long a3)
{
    char *v0;  // [bp-0x228]
    unsigned long long v1;  // [bp-0x220]
    unsigned long long v2;  // [bp-0x218]
    unsigned long long v3;  // [bp-0x210]
    unsigned long long v4;  // [bp-0x208]
    unsigned long long v5;  // [bp-0x200]
    unsigned long long v6;  // [bp-0x1f8]
    char v7;  // [bp-0x1f0], Other Possible Types: unsigned long long
    char v8;  // [bp-0x1e8], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x1e0], Other Possible Types: int
    unsigned long long v10;  // [bp-0x1d8]
    void* v11;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1c8]
    int v13;  // [bp-0x1c0]
    unsigned long long v14;  // [bp-0x1b0]
    unsigned long long v15;  // [bp-0x1a8]
    unsigned long v16;  // [bp-0x1a0]
    unsigned long v17;  // [bp-0x198]
    unsigned long long v18;  // [bp-0x110]
    char v19;  // [bp-0x108]
    char v21;  // bl
    unsigned long v22;  // rcx
    int v23;  // xmm1

    starship::utils::create_command(&v7, "gitcore.fsmonitor=core.fsmonitor=trueGIT_OPTIONAL_LOCKS0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs", 3);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::process::Command,std::io::error::Error>>(&v7);
        *(a0) = 0x8000000000000000;
        return (unsigned int)core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::map::Map<core::array::iter::IntoIter<&str,3_usize>,<str as alloc::borrow::ToOwned>::to_owned>,core::option::IntoIter<alloc::string::String>>>(a3);
    }
    memcpy(&v19, &v8, 216);
    v18 = v7;
    v21 = a1->padding_358[40];
    v18.env();
    v22 = (v21 ? "core.fsmonitor=trueGIT_OPTIONAL_LOCKS0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs" : "core.fsmonitor=core.fsmonitor=trueGIT_OPTIONAL_LOCKS0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs");
    v23 = *((int128_t *)&(&a1->padding_0)[1]);
    v7 = "-C--git-dir-c--work-treeExecuting git command: ";
    v8 = 2;
    *((int128_t *)&v9) = *((int128_t *)&(&a2->padding_0)[1]);
    v11 = "--git-dir-c--work-treeExecuting git command: ";
    v12 = 9;
    v13 = v23;
    v14 = "-c--work-treeExecuting git command: ";
    v15 = 2;
    *((int *)&v16) = (v21 ? "core.fsmonitor=trueGIT_OPTIONAL_LOCKS0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs" : "core.fsmonitor=core.fsmonitor=trueGIT_OPTIONAL_LOCKS0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs");
    v17 = v21 * 4 + 15;
    v18.args(&v7);
    if (*((long long *)&a1->padding_328[16]) != 0x8000000000000000)
    {
        v7 = "--work-treeExecuting git command: ";
        v8 = 11;
        *((int128_t *)&v9) = *((int128_t *)&a1->field_340);
        v18.args(&v7);
    }
    v18.args(a3);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v0 = &v18;
        v1 = <std::process::Command as core::fmt::Debug>::fmt;
        v7 = &g_11f36d0;
        v8 = 1;
        v11 = 0;
        v9 = &v0;
        v10 = 1;
        v2 = "starship::contextFailed to find git repo: , (trust: ";
        v3 = 17;
        v4 = "starship::contextFailed to find git repo: , (trust: ";
        v5 = 17;
        v6 = log::__private_api::loc(&g_11f36e0);
        log::__private_api::log(&v7, 5, &v2);
    }
    starship::utils::exec_timeout(a0, &v18, (int)((*((long long *)&a2->padding_c8[264]) >> 3) / 125), (unsigned int)(*((long long *)&a2->padding_c8[264]) - (int)((*((long long *)&a2->padding_c8[264]) >> 3) / 125) * 1000) * 1000000);
    return core::ptr::drop_in_place<std::process::Command>(&v18);
}
