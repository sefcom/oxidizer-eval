long long starship::main()
{
    char *v0;  // [bp-0xb18]
    unsigned long long v1;  // [bp-0xb10]
    unsigned long long v2;  // [bp-0xaf8]
    struct_0 *v3;  // [bp-0xad8]
    unsigned long long v4;  // [bp-0xac8]
    char v5;  // [bp-0xab8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xab8]
    unsigned long long v7;  // [bp-0xab0]
    int v8;  // [bp-0xaa8], Other Possible Types: char *
    unsigned long long v9;  // [bp-0xaa0]
    void* v10;  // [bp-0xa98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x9e8]
    unsigned long long v12;  // [bp-0x9e0]
    unsigned long long v13;  // [bp-0x9d8]
    unsigned long long v14;  // [bp-0x9d0]
    unsigned long long v15;  // [bp-0x9c8]
    char v16;  // [bp-0x918], Other Possible Types: unsigned long long
    struct_0 *v17;  // [bp-0x910], Other Possible Types: unsigned long long
    char *v18;  // [bp-0x908]
    unsigned long long v19;  // [bp-0x900]
    unsigned long long v20;  // [bp-0x8f8]
    unsigned long long v21;  // [bp-0x8f0]
    unsigned long long v22;  // [bp-0x30]
    unsigned long long v23;  // [bp-0x28]
    unsigned long long v24;  // [bp-0x20]
    unsigned long long v25;  // [bp-0x18]
    unsigned long long v26;  // [bp-0x10]
    unsigned long long v28;  // r15
    unsigned long long v29;  // r14
    unsigned long long v30;  // r13
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rdi
    int v34;  // xmm0

    v26 = v28;
    v25 = v29;
    v24 = v30;
    v23 = v31;
    v22 = v32;
    starship::logger::init();
    starship::init_global_threadpool();
    rayon_core::spawn::spawn();
    v16.try_parse();
    if (v16 != 13)
    {
        memcpy(&v5, &v16, 208);
        if (core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E) > 4)
        {
            v0 = &v5;
            v1 = <starship::Cli as core::fmt::Debug>::fmt;
            v16 = &g_11eb338;
            v17 = 1;
            v20 = &g_5278a8;
            v21 = 1;
            v18 = &v0;
            v19 = 1;
            v11 = "starshipRaspbianReadLinkSHELVINGaccountspoisonedasmo-708 instead149 bold147 boldidentifymetadataSOFTWAREBorrowedENOTUNIQELIBEXECAbsoluteno_proxyx-cp1256FilePathCherokeecherokeegeorgiantifinaghhostname.haxelibClient: a structENOTSOCKpathspeciso88598upstream";
            v12 = 8;
            v13 = "starshipRaspbianReadLinkSHELVINGaccountspoisonedasmo-708 instead149 bold147 boldidentifymetadataSOFTWAREBorrowedENOTUNIQELIBEXECAbsoluteno_proxyx-cp1256FilePathCherokeecherokeegeorgiantifinaghhostname.haxelibClient: a structENOTSOCKpathspeciso88598upstream";
            v14 = 8;
            v15 = log::__private_api::loc(&g_11eb348);
            log::__private_api::log(&v16, &v11);
            goto (long long)(*((int *)(5398304 + 4 * v5)) + (char *)&g_525f20[0]);
        }
        else
        {
            goto (long long)(*((int *)(5398304 + 4 * v5)) + (char *)&g_525f20[0]);
        }
    }
    else
    {
        v3 = v17;
        v5 = v3.print();
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v5);
        v33 = 0;
        if ((v17->field_f9 & 29) != 12)
        {
            v4 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            std::env::args(&(char)v11);
            v34 = *((int128_t *)&v11);
            *((int128_t *)&v8) = *((int128_t *)&v13);
            v6 = v34;
            v10 = 1;
            (char)v11.collect(&v5);
            v0 = &(char)v11;
            v1 = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
            v5 = &g_11eb2b8;
            v7 = 2;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            v2 = v4.write_fmt(&v5);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v2);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v11);
            v33 = 2;
        }
        std::process::exit(v33); /* do not return */
    }
}
