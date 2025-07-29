long long uu_cp::Attributes::parse_single_string(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xe0]
    struct struct_0 v1[4];  // [bp-0xd8]
    char v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    int v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xa8]
    int v7;  // [bp-0x98], Other Possible Types: char
    char v8;  // [bp-0x88]
    void* v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    char v11;  // [bp-0x50]
    int v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x38]
    char v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x20]
    unsigned short *v17;  // rax
    unsigned long long v18;  // rax

    alloc::str::<impl str>::to_lowercase(&v2, a1, a2);
    if ((char)v3.equal(v4, "all\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the valu", 3))
    {
        *((unsigned long long *)&a0->field_8) = 1103823438081;
        *((unsigned int *)&a0->padding_9[7]) = 65793;
        goto LABEL_4d9b89;
    }
    *((unsigned int *)&v1[0]) = 0;
    v0 = 0;
    if ((char)v3.equal(v4, "modefile", 4))
    {
        v17 = &(char)v0;
        goto LABEL_4d9b74;
    }
    if ((char)v3.equal(v4, "ownershiptimestampscontextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL envi", 9))
    {
        v17 = &(char)v0;
        goto LABEL_4d9b74;
    }
    if ((char)v3.equal(v4, "timestampscontextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment v", 10))
    {
        v17 = &(char)v0;
        goto LABEL_4d9b74;
    }
    if ((char)v3.equal(v4, "contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ", 7))
    {
        v17 = &(char)v0;
        goto LABEL_4d9b74;
    }
    if ((char)v3.equal(v4, "linkkindAuto/", 4) || (char)v3.equal(v4, "linksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here ar", 5))
    {
        v17 = &(char)v1;
        goto LABEL_4d9b74;
    }
    else if ((char)v3.equal(v4, "xattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the", 5))
    {
        v17 = &(char)v1;
LABEL_4d9b74:
        *(v17) = 257;
        *((int *)&a0->padding_9[7]) = *((int *)&v1[0]);
        *((void* *)&a0->field_8) = v0;
LABEL_4d9b89:
        v18 = 9223372036854775820;
    }
    else
    {
        v7.to_vec("valuecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
        v6 = *((long long *)&v8);
        v5 = v7;
        v9 = 0;
        memcpy(&v10, &v3, 16);
        v11 = 1;
        v7.spec_to_string(&v9);
        v13 = v6;
        v12 = v5;
        memcpy(&v14, &v7, 16);
        v15 = *((long long *)&v8);
        v7.from_iter(&v12);
        uucore::mods::locale::get_message_with_args(&v5, "cp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 26, &v7);
        a0->field_18 = v6;
        *((void*)&a0->field_8) = v5;
        v18 = 9223372036854775816;
    }
    a0->field_0 = v18;
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v2);
    return a0;
}
