long long forc_crypto::help()
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    char *v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    char *v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    char *v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    char *v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    char *v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    char *v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    char *v26;  // [bp-0x40]
    unsigned long long v27;  // [bp-0x38]
    void* v28;  // [bp-0x30]
    char v29;  // [bp-0x20]
    unsigned long long v31;  // rdx

    v0 = forc_crypto::args::examples();
    v1 = v31;
    v2 = forc_crypto::address::examples();
    v3 = v31;
    v4 = forc_crypto::keys::new_key::examples();
    v5 = v31;
    v6 = forc_crypto::keys::parse_secret::examples();
    v7 = v31;
    v8 = forc_crypto::keys::get_public_key::examples();
    v9 = v31;
    v10 = forc_crypto::keys::vanity::examples();
    v11 = v31;
    v12 = &v0;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v2;
    v15 = <&T as core::fmt::Display>::fmt;
    v16 = &v4;
    v17 = <&T as core::fmt::Display>::fmt;
    v18 = &v6;
    v19 = <&T as core::fmt::Display>::fmt;
    v20 = &v8;
    v21 = <&T as core::fmt::Display>::fmt;
    v22 = &v10;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &g_a2f1b0;
    v25 = 6;
    v28 = 0;
    v26 = &v12;
    v27 = 6;
    v29.map_or_else(0, v31, &v24);
    return v29.into_boxed_slice();
}
