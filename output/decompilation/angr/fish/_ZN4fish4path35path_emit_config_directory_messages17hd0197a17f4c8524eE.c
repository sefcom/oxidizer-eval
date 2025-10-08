long long fish::path::path_emit_config_directory_messages(unsigned long long a0)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3[3];  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    int v6;  // [bp-0x60], Other Possible Types: char
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x30]
    struct_1 *v10;  // r14
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    struct_0 *v13;  // rax
    struct_0 *v14;  // r14
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v10 = fish::path::get_data_directory();
    if (*((int *)((char *)&v10->field_8 + 8)))
    {
        v4 = "c";
        v5 = 20;
        *(v3) = 0x8000000000000000;
        v11 = v3.localize();
        fish::path::maybe_issue_path_warning("d", 4, v11, v12, *((char *)&v10->field_8 + 12), "X", 13, *((int128_t *)&(&v10->padding_0)[1]), *((int128_t *)&(&v10->padding_0)[1]), *((int *)((char *)&v10->field_8 + 8)), a0);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    }
    if (*((char *)&v10->field_8 + 13) == 2 && (char)core::sync::atomic::atomic_load(&g_15a9a40, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v6.to_flog_str(&g_15a9a30);
        v3.into_iter(&v6);
        v0.spec_extend(&v3);
        v0.push(58, &g_14deee0);
        v0.push(32, &g_14deee0);
        v7.to_vec("data path appears to be on a network volume", 43);
        v3.into_iter(&v7);
        v0.spec_extend(&v3);
        v0.push(10, &g_14deee0);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v13 = fish::path::get_config_directory();
    v14 = v13;
    if (*((int *)((char *)&v14->field_8 + 8)))
    {
        v4 = "c";
        v5 = 45;
        *(v3) = 0x8000000000000000;
        v15 = v3.localize();
        fish::path::maybe_issue_path_warning("c", 6, v15, v12, *((char *)&v14->field_8 + 12), "X", 15, *((int128_t *)&(&v14->padding_0)[1]), *((int128_t *)&(&v14->padding_0)[1]), *((int *)((char *)&v14->field_8 + 8)), a0);
        v13 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    }
    if (*((char *)&v14->field_8 + 13) != 2)
        return v13;
    v16 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a9a40, 0);
    if (!(char)v16)
        return v16;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v6.to_flog_str(&g_15a9a30);
    v3.into_iter(&v6);
    v0.spec_extend(&v3);
    v0.push(58, &g_14deef8);
    v0.push(32, &g_14deef8);
    v8.to_vec("config path appears to be on a network volume", 45);
    v3.into_iter(&v8);
    v0.spec_extend(&v3);
    v0.push(10, &g_14deef8);
    fish::flog::flog_impl(1, 0);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, 1);
}
