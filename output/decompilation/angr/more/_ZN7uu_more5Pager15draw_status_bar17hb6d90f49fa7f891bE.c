void uu_more::Pager::draw_status_bar(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [sp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    char *v2;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x190]
    void* v4;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x180]
    int v6;  // [bp-0x178], Other Possible Types: unsigned short
    char *v7;  // [bp-0x178]
    unsigned int v8;  // [bp-0x178]
    char *v9;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x170]
    unsigned long long v11;  // [bp-0x168]
    char *v12;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long v13;  // [sp-0x150], Other Possible Types: unsigned long long
    char *v14;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x140]
    void* v16;  // [bp-0x138]
    char v17;  // [bp-0x128]
    void* v18;  // [bp-0x128]
    unsigned long long v19;  // [bp-0x120]
    void* v20;  // [bp-0x118], Other Possible Types: unsigned long long
    int v21;  // [bp-0x110], Other Possible Types: char
    unsigned long long v22;  // [bp-0x100]
    char v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xe8]
    int v25;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v26;  // [bp-0xc8]
    unsigned long v27;  // [bp-0xc0]
    unsigned long v28;  // [bp-0xb8]
    char v29;  // [bp-0xb0]
    unsigned long long v30;  // [bp-0xa0]
    char v31;  // [bp-0x98]
    int v32;  // [bp-0x80], Other Possible Types: char
    unsigned long long v33;  // [bp-0x70]
    char v34;  // [bp-0x68]
    char *v35;  // [bp-0x58]
    char v36;  // [bp-0x50]
    char *v37;  // [bp-0x40]
    unsigned long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    unsigned long v42;  // rax
    int v43;  // xmm0
    unsigned long v44;  // rax
    unsigned long v45;  // rax
    unsigned long long v49;  // rdx
    char v50;  // r13b

    v39 = a0->field_20 - 1;
    if (1 > a0->field_20)
        v39 = 0;
    v40 = ::0x4b90c0::core::cmp::min_by(a0->field_90 + a0->field_88, v39);
    if (a0->field_d0 && a0->field_b0)
    {
        v12 = a0->field_b0;
        v13 = a0->field_b8;
        v7 = &v12;
        v10 = <&T as core::fmt::Display>::fmt;
        v0 = &g_5bd358;
        v1 = 2;
        v4 = 0;
        v2 = &v7;
        v3 = 1;
        v29.map_or_else(&v0);
        memcpy(&v17, &v29, 16);
        goto LABEL_4bf4cd;
    }
    if ((a0->field_0 & 1))
    {
        v41 = a0->field_8;
        if (v40 < a0->field_38)
        {
            v42 = *((long long *)(a0->field_30 + v40 * 8));
            if (!(!v41))
                goto LABEL_4bf3b9;
LABEL_4bf430:
            (char)v0.to_vec(" (END)%):key[]more-help-messagemore-error-unknown-keyFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/arg_ma", 6);
            v20 = v2;
            memcpy(&v17, &(char)v0, 16);
        }
        else
        {
            v42 = 0;
            if (!v41)
                goto LABEL_4bf430;
LABEL_4bf3b9:
            v43 = MulV(DivV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v42) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v42) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v42) - 0x45300000000000004330000000000000), AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v41) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v41) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v41) - 0x45300000000000004330000000000000)), 0x4059000000000000);
            round((unsigned long long)v43);
            v6 = (unsigned short)(MinV(0x40efffe000000000, MaxV(0, v43)));
            if (!(v6 * 0x1000000000000 <= 0x63000000000000))
                goto LABEL_4bf430;
            v12 = &v6;
            v13 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
            v0 = &g_5bd378;
            v1 = 2;
            v4 = 0;
            v2 = &v12;
            v3 = 1;
            v31.map_or_else(&v0);
            memcpy(&v17, &v31, 16);
LABEL_4bf4cd:
            v20 = v30;
        }
    }
    else
    {
        v18 = 0;
        v19 = 1;
        v20 = 0;
    }
    v44 = a0->field_a0;
    if (v44)
        v45 = v44;
    else
        v45 = ":key[]more-help-messagemore-error-unknown-keyFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/arg_matches.rs";
    v27 = v45;
    *((int *)&v28) = (v44 ? a0->field_a8 : 1);
    v12 = &v27;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v17;
    v15 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_4186f8;
    v1 = 2;
    v4 = 0;
    v2 = &v12;
    v3 = 2;
    v25.map_or_else(&v0);
    memcpy(&v23, &v25, 16);
    v24 = v26;
    if (a0->field_d1)
    {
        if (a1 == 0x110000)
        {
            uucore::mods::locale::get_message(&v7, "more-help-messagemore-error-unknown-keyFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/arg_matches.rs", 17);
            v12 = &v23;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v7;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_4186f8;
            v1 = 2;
            v4 = 0;
            v2 = &v12;
            v3 = 2;
            v21.map_or_else(&v0);
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v7 = v7;
        }
        else
        {
            v0.to_vec("key[]more-help-messagemore-error-unknown-keyFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/arg_matches.rs", 3);
            v14 = v2;
            memcpy(&v12, &v0, 16);
            v8 = 0;
            v0.to_vec(::0x4bacb0::core::char::methods::encode_utf8_raw(a1, &v8), v49);
            v37 = v2;
            memcpy(&v36, &v0, 16);
            memcpy(&v34, &v12, 16);
            v35 = v14;
            v0.from_iter(&v34);
            uucore::mods::locale::get_message_with_args(&v8, "more-error-unknown-keyFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/arg_matches.rs", 22, &v0);
            v12 = &v23;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v8;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_5bd398;
            v1 = 3;
            v4 = 0;
            v2 = &v12;
            v3 = 2;
            v21.map_or_else(&v0);
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v8);
            v7 = v9;
        }
        v6 = v21;
        v11 = v22;
        v50 = 1;
    }
    else if (a1 == 0x110000)
    {
        v11 = v26;
        v6 = v25;
    }
    else
    {
        v12 = &v23;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v14 = &g_417c48;
        v15 = <char as core::fmt::Display>::fmt;
        v0 = &g_4186f8;
        v1 = 2;
        v4 = 0;
        v2 = &v12;
        v3 = 2;
        v32.map_or_else(&v0);
        v6 = v32;
        v11 = v33;
        v50 = 1;
    }
    v0 = &g_41a256;
    v1 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v2 = &v7;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_41a286;
    v5 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v12 = &g_5bd3c8;
    v13 = 3;
    v16 = 0;
    v14 = &v0;
    v15 = 3;
    a0->padding_c0.write_fmt(&v12).unwrap();
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v7);
    if (v50)
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v23);
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v17);
    return;
}
