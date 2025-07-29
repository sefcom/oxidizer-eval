long long uu_yes::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3c8]
    unsigned long long v1;  // [bp-0x3c0]
    void* v2;  // [bp-0x3b0]
    int v3;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v4;  // [bp-0x3a0]
    char v5;  // [bp-0x398], Other Possible Types: unsigned long long
    char v6;  // [bp-0x388]
    char v7;  // [bp-0x378]
    unsigned long long v8;  // [bp-0x368]
    unsigned long long v9;  // [bp-0x360]
    char v10;  // [bp-0x358]
    char v11;  // [bp-0x348]
    unsigned long long v12;  // [bp-0x338]
    int v13;  // [bp-0x330], Other Possible Types: char
    unsigned long long v14;  // [bp-0x320]
    char v15;  // [bp-0x318]
    unsigned long long v16;  // [bp-0x308]
    int v17;  // [bp-0x300]
    unsigned long long v18;  // [bp-0x2f0]
    int v19;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v20;  // [bp-0x2d8]
    unsigned int v21;  // [bp-0x2d0]
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rbx
    void* v25;  // rax

    uu_yes::uu_app(&v19);
    v3.try_get_matches_from(&v19, a0, a1);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
        return v9.from();
    v12 = *((long long *)&v7);
    memcpy(&v11, &v6, 16);
    memcpy(&v10, &v5, 16);
    v8 = *((long long *)&v3);
    v9 = v4;
    v1 = 0x4000.with_capacity_in(&g_562f28);
    v2 = 0;
    v19.try_get_many(&v8, "STRINGyes-error-standard-outputUSimpleErrormessage", 6);
    v3.unwrap("STRINGyes-error-standard-outputUSimpleErrormessage", 6, &v19);
    uu_yes::args_into_buffer(&v1, &v3);
    uu_yes::prepare_buffer(&v1);
    v24 = uu_yes::exec(v23, 0);
    if (!v24)
    {
LABEL_490a4a:
        v25 = 0;
    }
    else if ((char)v24.kind() == 11)
    {
        ::0x48ff60::core::ptr::drop_in_place<std::io::error::Error>(v24);
        goto LABEL_490a4a;
    }
    else
    {
        v0 = v24;
        v19.to_vec();
        v5 = v20;
        v3 = v19;
        v19.spec_to_string(&v0);
        v16 = v5;
        memcpy(&v15, &v3, 16);
        v17 = v19;
        v18 = v20;
        v19.from_iter(&v15);
        uucore::mods::locale::get_message_with_args(&v13, "yes-error-standard-outputUSimpleErrormessage", 25, &v19);
        v21 = 1;
        v19 = v13;
        v20 = v14;
        v25 = v19.new();
        ::0x48ff60::core::ptr::drop_in_place<std::io::error::Error>(v0);
    }
    ::0x48ff80::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return v25;
}
