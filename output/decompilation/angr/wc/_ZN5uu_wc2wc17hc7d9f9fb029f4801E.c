long long uu_wc::wc(void* a0, struct_2 *a1)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x190]
    struct_1 *v2;  // [sp-0x188], Other Possible Types: void*
    char *v3;  // [bp-0x180], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x178]
    unsigned long v5;  // [bp-0x170]
    unsigned long long v6;  // [sp-0x168]
    char *v7;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x158], Other Possible Types: unsigned long long
    char *v9;  // [sp-0x150]
    unsigned long long v10;  // [sp-0x148]
    void* v11;  // [sp-0x140]
    char v12;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x130]
    unsigned long long v14;  // [bp-0x128]
    char *v15;  // [sp-0x120], Other Possible Types: unsigned long long
    char v16;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v17;  // [sp-0x110]
    unsigned long long v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    unsigned long v21;  // [bp-0xf0]
    unsigned long long v22;  // [bp-0xe8]
    void* v23;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0xd8]
    char v25;  // [bp-0xd0]
    unsigned long long v26;  // [bp-0xc0]
    unsigned long long v27;  // [bp-0xb8]
    unsigned long long v28;  // [bp-0xb0]
    struct_1 *v29;  // [bp-0xa8]
    unsigned long long v30;  // [bp-0xa0]
    unsigned long long v31;  // [bp-0x98]
    struct_1 *v32;  // [bp-0x90]
    uint128_t v33;  // [bp-0x88]
    uint128_t v34;  // [bp-0x78]
    void* v35;  // [bp-0x68]
    char v36;  // [bp-0x58]
    char v37;  // [bp-0x48]
    unsigned long long v38;  // [bp-0x38]
    unsigned long v40;  // r15
    void* v41;  // rbp
    unsigned long long v42;  // rdi
    struct_1 *v43;  // rax
    unsigned long v46;  // r15
    void* v47;  // r13
    void* v50;  // r13
    unsigned long long v51;  // rax
    void* v53;  // r13
    void* v54;  // r13
    void* v57;  // rdx, Other Possible Types: unsigned long
    unsigned int v59;  // ecx
    unsigned long long v60;  // rax

    v34 = 0;
    v33 = 0;
    v35 = 0;
    v40 = a1->field_1d;
    v20 = 1;
    if ((unsigned int)v40 != 2)
        v20 = uu_wc::compute_number_width(a0, a1);
    v12.try_iter(a0, a1);
    if (v13 == 9223372036854775811)
        return v14;
    v21 = v40;
    v26 = v18;
    memcpy(&v25, &v16, 16);
    v22 = v13;
    v23 = v14;
    v24 = v15;
    v41 = 0;
    while (true)
    {
        uu_wc::Inputs::try_iter::{{closure}}(&v30, &v22);
        if (v30 == 9223372036854775811)
            break;
        v42 = v31;
        v43 = v32;
        if (v30 == 9223372036854775810)
        {
            v1 = v42;
            v2 = v43;
            uucore::mods::error::set_exit_code(v43->field_58(v42));
            v3 = uucore::util_name();
            v4 = v57;
            v7 = &v3;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v1;
            v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v13 = &g_4f9318;
            v14 = 3;
            v17 = 0;
            v15 = &v7;
            v16 = 2;
            std::io::stdio::_eprint(&v13);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, v2);
            v41 += 1;
            continue;
        }
        v27 = v30;
        v28 = v42;
        v29 = v43;
        uu_wc::word_count_from_input(&v12, &v27, a1);
        if (v13)
        {
            if ((unsigned int)v13 == 2)
            {
                v0 = v14.map_err_context(&v27);
                uucore::mods::error::set_exit_code(1);
                v1 = uucore::util_name();
                v2 = v57;
                v3 = &v1;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = &v0;
                v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v7 = &g_4f9318;
                v8 = 3;
                v11 = 0;
                v9 = &v3;
                v10 = 2;
                std::io::stdio::_eprint(&v7);
                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
                goto LABEL_469ce5;
            }
            else
            {
                v0 = v19.map_err_context(&v27);
                uucore::mods::error::set_exit_code(1);
                v1 = uucore::util_name();
                v2 = v57;
                v3 = &v1;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = &v0;
                v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v7 = &g_4f9318;
                v8 = 3;
                v11 = 0;
                v9 = &v3;
                v10 = 2;
                std::io::stdio::_eprint(&v7);
                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
            }
        }
        v38 = v18;
        memcpy(&v37, &v16, 16);
        memcpy(&v36, &v14, 16);
        v33.add_assign(&v36);
        if ((int)v21 != 2)
        {
            v3.to_title(&v27);
            if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)) && v3 == 9223372036854775809)
            {
                v46 = v40;
                v47 = 0;
            }
            else
            {
                v46 = v5;
                v47 = v4;
            }
            v50 = v47;
            v40 = v46;
            v51 = uu_wc::print_stats(a1, &v36, v50, v40, v20);
            if (!v51)
            {
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
            }
            else
            {
                if (!v50)
                    v53 = "<stdin>";
                else
                    v53 = v50;
                v54 = v53;
                if (!v50)
                    v40 = 7;
                v0 = v51.map_err_context(v54, v40);
                uucore::mods::error::set_exit_code(1);
                v1 = uucore::util_name();
                v2 = v57;
                v7 = &v1;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v13 = &g_4f9318;
                v14 = 3;
                v17 = 0;
                v15 = &v7;
                v16 = 2;
                std::io::stdio::_eprint(&v13);
                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
            }
            core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<std::ffi::os_str::OsStr>>>(&v3);
        }
LABEL_469ce5:
        core::ptr::drop_in_place<uu_wc::Input>(&v27);
        v41 += 1;
    }
    core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v22);
    v59 = v21;
    if (v59 - 1 >= 2 && (v59 || v41 < 2))
        return 0;
    v60 = uu_wc::print_stats(a1, &v33, (v59 != 2 ? "totalwordsfiles-" : 0), 5, v20);
    if (v60)
    {
        v3 = v60.map_err_context();
        uucore::mods::error::set_exit_code(1);
        v22 = uucore::util_name();
        v23 = v57;
        v7 = &v22;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v3;
        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v12 = &g_4f9318;
        v14 = 3;
        v17 = 0;
        v15 = &v7;
        v16 = 2;
        std::io::stdio::_eprint(&v12);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v3);
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
    }
    return 0;
}
