long long starship::print::get_prompt(struct_0 *a0, void* a1)
{
    void* v0;  // [bp-0x208]
    int v1;  // [bp-0x208]
    unsigned long long v2;  // [bp-0x200]
    char *v3;  // [bp-0x1f8]
    int v4;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x1e8]
    unsigned long long v6;  // [bp-0x1e0]
    int v7;  // [bp-0x1d8], Other Possible Types: char *, unsigned long long
    unsigned long long v8;  // [bp-0x1d8]
    int v9;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v10;  // [bp-0x1c8], Other Possible Types: void*, unsigned long long
    char v11;  // [bp-0x1b8]
    unsigned long long v12;  // [bp-0x1a8]
    char v13;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x190]
    unsigned long long v15;  // [bp-0x188]
    char v16;  // [bp-0x180]
    int v17;  // [bp-0x178]
    int v18;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v19;  // [bp-0x160]
    int v20;  // [bp-0x158]
    unsigned long long v21;  // [bp-0x148]
    unsigned long long v22;  // [bp-0x140]
    unsigned long long v23;  // [bp-0x138]
    unsigned long long v24;  // [bp-0x130]
    int v25;  // [bp-0x128]
    int v26;  // [bp-0x120]
    int v27;  // [bp-0x110]
    unsigned long long v28;  // [bp-0x100]
    int v29;  // [bp-0xf8]
    unsigned long long v30;  // [bp-0xe8]
    char v31;  // [bp-0xe0]
    int v32;  // [bp-0xc0], Other Possible Types: char
    int v33;  // [bp-0xb0]
    int v34;  // [bp-0xa0]
    char v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x80]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x68]
    int v39;  // [bp-0x58]
    int v40;  // [bp-0x48]
    unsigned long long v41;  // [bp-0x38]

    v0 = 0;
    v2 = 1;
    v3 = 0;
    std::env::var_os(&v13, "TERM", 4);
    if (!((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63)) && (char)v14.eq(v15))
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
        {
            v22 = &g_11f66f0;
            v23 = 1;
            v24 = 8;
            *((uint128_t *)&v25) = 0;
            v4 = "starship::printStarship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA";
            v6 = 15;
            v7 = "starship::printStarship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA";
            v9 = 15;
            v10 = log::__private_api::loc(&g_11f6700);
            log::__private_api::log(&v22, 1, &v4);
        }
        v0.spec_extend("Starship disabled due to TERM=dumb > ", &g_5433a6);
        a0->field_10 = v3;
        a0->field_0 = *((int128_t *)&v0);
        core::ptr::drop_in_place<gix_ref::FullName>(&v13);
        return a0;
    }
    v13.drop_in_place<core::option::Option<gix_ref::FullName>>();
    if ((char)a1[1736] == 1 && (long long)a1[568] == 0x8000000000000000)
        v0.spec_extend(&g_5433a6, "starship::printStarship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA");
    starship::print::load_formatter_and_modules(&(char)v22, a1);
    v41 = v28;
    v40 = v27;
    v39 = v26;
    memcpy(&v38, &v24, 16);
    memcpy(&v37, &v22, 16);
    v21 = v30;
    v20 = v29;
    v32.map_variables_to_segments(&v37, &v20, a1);
    (char)v22.new("Starship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA", 13, "The root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA", 15, 0);
    v12 = v36;
    memcpy(&v11, &v35, 16);
    v10 = v34;
    v7 = v33;
    v4 = v32;
    v16 = 2;
    v31.parse(&(char)v5, &v16, a1);
    (char)v5.expect(&v31);
    (char)v22.set_segments(&(char)v5);
    v16.ansi_strings_for_width(&(char)v22, 1, (long long)a1[1728]);
    if ((char)a1[480] && (long long)a1[568] != 9223372036854775810)
    {
        v5 = &g_11ebeb0;
        v6 = 1;
        v8 = 8;
        *((uint128_t *)&v9) = 0;
        (unsigned int)v0.spec_write_fmt(&v5).unwrap(&g_11f6730);
    }
    v18 = v17;
    (char)v5.spec_to_string(&(char)v18);
    starship::utils::wrap_colorseq_for_shell(&v31, &(char)v5, (int)a1[1736]);
    v18 = &v31;
    v19 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_525500;
    v6 = 1;
    v10 = 0;
    v7 = &v18;
    v9 = 1;
    (unsigned int)v0.spec_write_fmt(&v4).unwrap(&g_11f6748);
    if ((long long)a1[568] == 9223372036854775809)
    {
        alloc::str::<impl str>::replace(&v4, 1, v3, 10, 1, 0);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v3 = v7;
        *((int128_t *)&v1) = *((int128_t *)&v4);
    }
    if ((char)a1[1736] == 7)
    {
        alloc::str::<impl str>::replace(&v4, 1, v3, 33, "\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA", 2);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v3 = v7;
        *((int128_t *)&v1) = *((int128_t *)&v4);
        alloc::str::<impl str>::replace(&v4, 1, v7, 10, " \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA", 3);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v3 = v7;
        memcpy(&v0, &v4, 16);
    }
    a0->field_10 = v3;
    a0->field_0 = *((int128_t *)&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v31);
    core::ptr::drop_in_place<alloc::vec::Vec<nu_ansi_term::display::AnsiGenericString<str>>>(&v16);
    core::ptr::drop_in_place<starship::module::Module>(&(char)v22);
    core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(&v20);
    return a0;
}
