long long uu_wc::wc(unsigned long long a0[4], struct_2 *a1)
{
    unsigned long long v0;  // [bp-0x1a0]
    char *v1;  // [bp-0x198], Other Possible Types: unsigned long long
    struct_1 *v2;  // [bp-0x190]
    char *v3;  // [bp-0x188]
    unsigned long long v4;  // [sp-0x180]
    int v5;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x170]
    char *v8;  // [bp-0x168]
    int v9;  // [bp-0x168]
    char v10;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x150]
    int v13;  // [bp-0x148]
    char *v14;  // [bp-0x138], Other Possible Types: unsigned long long
    struct_1 *v15;  // [sp-0x130], Other Possible Types: unsigned long long
    char *v16;  // [sp-0x128]
    unsigned long long v17;  // [sp-0x120]
    void* v18;  // [sp-0x118]
    unsigned long long v19;  // [bp-0x108]
    unsigned long long v20;  // [sp-0x100]
    unsigned long long v21;  // [bp-0xf8]
    unsigned long v22;  // [bp-0xf0]
    unsigned long long v23;  // [bp-0xe8]
    unsigned long long v24;  // [bp-0xe0]
    char *v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0]
    unsigned long long v27;  // [bp-0xc0]
    int v28;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v29;  // [bp-0xb8]
    unsigned long long v30;  // [bp-0xb0]
    int v31;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v32;  // [bp-0x98]
    char *v33;  // [bp-0x90]
    unsigned long long v34;  // [bp-0x88]
    char *v35;  // [bp-0x80]
    struct_1 *v36;  // [bp-0x78]
    unsigned long long v37;  // [bp-0x70]
    char *v38;  // [bp-0x68]
    struct_1 *v39;  // [bp-0x60]
    uint128_t v40;  // [bp-0x58]
    uint128_t v41;  // [bp-0x48]
    void* v42;  // [bp-0x38]
    unsigned long v44;  // r15
    void* v45;  // rbp
    char *v46;  // rbx
    unsigned long long v47;  // r13
    char *v48;  // rdi
    struct_1 *v49;  // rax
    int v51;  // xmm0
    struct_1 *v52;  // rbx
    unsigned long long v53;  // rax
    unsigned long long v54;  // rdx
    unsigned int v57;  // r15d
    unsigned long long v58;  // rax

    v41 = 0;
    v40 = 0;
    v42 = 0;
    v44 = a1->field_1d;
    v21 = 1;
    if ((unsigned int)v44 != 2)
        v21 = uu_wc::compute_number_width(a0, a1);
    (char)v5.try_iter(a0, a1);
    if (v6 == 9223372036854775811)
        return v7;
    v22 = v44;
    v27 = v12;
    memcpy(&v26, &v10, 16);
    v23 = v6;
    v24 = v7;
    v33 = v8;
    v25 = v33;
    v45 = 0;
    v46 = &v28;
    while (true)
    {
        uu_wc::Inputs::try_iter::{{closure}}(&v37, &v23);
        if (v37 == 9223372036854775811)
            break;
        v48 = v38;
        v49 = v39;
        if (v37 == 9223372036854775810)
        {
            v1 = v48;
            v2 = v49;
            uucore::mods::error::set_exit_code(v49->field_58(v48));
            v29 = uucore::util_name();
            v30 = v54;
            v14 = v46;
            v15 = &<&T as core::fmt::Display>::fmt;
            v16 = &v1;
            v17 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v6 = &g_59f210;
            v7 = 3;
            v11 = 0;
            v8 = &v14;
            v10 = 2;
            std::io::stdio::_eprint(&v6);
            ::0x4ac7d0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, v2);
            v45 += 1;
        }
        else
        {
            v34 = v37;
            v35 = v48;
            v36 = v49;
            uu_wc::word_count_from_input(&(char)v5, &v34, a1);
            if (v6)
            {
                if ((unsigned int)v6 == 2)
                {
                    v0 = v7.map_err_context(&v34);
                    uucore::mods::error::set_exit_code(1);
                    v19 = uucore::util_name();
                    v20 = v54;
                    v1 = &v19;
                    v2 = &<&T as core::fmt::Display>::fmt;
                    v3 = &v0;
                    v4 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v14 = &g_59f210;
                    v15 = 3;
                    v18 = 0;
                    v16 = &v1;
                    v17 = 2;
                    std::io::stdio::_eprint(&v14);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
                    ::0x4acb10::core::ptr::drop_in_place<uu_wc::Input>(&v34);
                    v45 += 1;
                    continue;
                }
                else
                {
                    v0 = (long long)v13.map_err_context(&v34);
                    uucore::mods::error::set_exit_code(1);
                    v19 = uucore::util_name();
                    v20 = v54;
                    v1 = &v19;
                    v2 = &<&T as core::fmt::Display>::fmt;
                    v3 = &v0;
                    v4 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v14 = &g_59f210;
                    v15 = 3;
                    v18 = 0;
                    v16 = &v1;
                    v17 = 2;
                    std::io::stdio::_eprint(&v14);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
                }
            }
            v32 = v12;
            v51 = *((int128_t *)&v7);
            memcpy(&v31, &v10, 16);
            v28 = v51;
            v11 = v32;
            v9 = v31;
            v5 = v51;
            v40.add_assign(&(char)v5);
            if ((int)v22 != 2)
            {
                v1.to_title(&v34);
                if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)) && v1 == 9223372036854775809)
                {
                    v52 = 0;
                }
                else
                {
                    v52 = v2;
                    v47 = v3;
                }
                v53 = uu_wc::print_stats(a1, &v28, v52, v47, v21);
                if (v53)
                {
                    if (!v52)
                        v47 = 7;
                    if (!v52)
                        v52 = "<stdin>";
                    v0 = v53.map_err_context(v52, v47);
                    uucore::mods::error::set_exit_code(1);
                    v19 = uucore::util_name();
                    v20 = v54;
                    v14 = &v19;
                    v15 = &<&T as core::fmt::Display>::fmt;
                    v16 = &v0;
                    v17 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v6 = &g_59f210;
                    v7 = 3;
                    v11 = 0;
                    v8 = &v14;
                    v10 = 2;
                    std::io::stdio::_eprint(&v6);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
                }
                else
                {
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
                }
                core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<std::ffi::os_str::OsStr>>>(&v1);
                v46 = &v28;
            }
            ::0x4acb10::core::ptr::drop_in_place<uu_wc::Input>(&v34);
            v45 += 1;
        }
    }
    core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v23);
    v57 = v22;
    if (v57 - 1 < 2 || !v57 && v45 >= 2)
    {
        uucore::mods::locale::get_message(&v23, "wc-total", 8);
        v58 = uu_wc::print_stats(a1, &v40, (v57 == 2 ? 0 : v24), v25, v21);
        if (v58)
        {
            v1 = v58.map_err_context();
            uucore::mods::error::set_exit_code(1);
            v28 = uucore::util_name();
            v30 = v54;
            v14 = v46;
            v15 = &<&T as core::fmt::Display>::fmt;
            v16 = &v1;
            v17 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v5 = &g_59f210;
            v7 = 3;
            v11 = 0;
            v8 = &v14;
            v10 = 2;
            std::io::stdio::_eprint(&v5);
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v1);
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
        }
        ::0x4acba0::core::ptr::drop_in_place<alloc::string::String>(&v23);
    }
    return 0;
}
