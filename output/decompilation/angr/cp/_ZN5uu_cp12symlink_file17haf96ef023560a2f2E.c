long long uu_cp::symlink_file(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    struct_0 *v0;  // [bp-0x1f0]
    unsigned long long v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1d0], Other Possible Types: unsigned long
    int v3;  // [bp-0x1c8]
    char *v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1b0]
    char *v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x1a0]
    void* v8;  // [bp-0x198]
    unsigned long long v9;  // [bp-0x190]
    unsigned long long v10;  // [bp-0x188]
    char v11;  // [bp-0x180]
    void* v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x170]
    unsigned long long v14;  // [bp-0x168]
    char v15;  // [bp-0x160]
    unsigned long long v16;  // [bp-0x158]
    unsigned long long v17;  // [bp-0x150]
    char *v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x140]
    void* v20;  // [bp-0x138]
    char v21;  // [bp-0xc0]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rdx

    v1 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v23 = uucore::features::fs::get_filename(a3, a4);
    if (!v23)
        v24 = 17;
    if (!v23)
        v23 = "invalid file namecannot create symlink  and  are the same filebacking up  might destroy source;   not copiedcannot stat cannot create hard link not replacing 'will not copy 'not writing through dangling symlink 'cannot change attribute : Source file is a non regular file";
    v8 = 0;
    v9 = v23;
    v10 = v24;
    v11 = 1;
    v25 = uucore::features::fs::get_filename(a1, a2);
    if (!v25)
    {
        v26 = 17;
        if (!v25)
            goto LABEL_4a23a6;
LABEL_4a23a5:
    }
    else
    {
        v26 = v27;
        if (v25)
            goto LABEL_4a23a5;
LABEL_4a23a6:
        v25 = "invalid file namecannot create symlink  and  are the same filebacking up  might destroy source;   not copiedcannot stat cannot create hard link not replacing 'will not copy 'not writing through dangling symlink 'cannot change attribute : Source file is a non regular file";
    }
    v12 = 0;
    v13 = v25;
    v14 = v26;
    v15 = 1;
    v4 = &v8;
    v5 = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &v12;
    v7 = <os_display::Quoted as core::fmt::Display>::fmt;
    v16 = &g_55ebb8;
    v17 = 2;
    v20 = 0;
    v18 = &v4;
    v19 = 2;
    v2.map_or_else(&v16);
    if (v1)
    {
        *((void*)&v0->field_10) = v3;
        v0->field_0 = 9223372036854775810;
        v0->field_8 = v2;
        v0->field_20 = v1;
        return v2;
    }
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v2);
    v16.from_path(a3, a4, 0);
    if (!((char)v16 & 1))
    {
        memcpy(&v21, &v17, 144);
        a5.insert(&v21);
    }
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v16);
    *(a0) = 9223372036854775820;
    return 9223372036854775820;
}
