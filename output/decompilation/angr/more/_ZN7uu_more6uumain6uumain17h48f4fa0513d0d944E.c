long long uu_more::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x4e8]
    int v1;  // [bp-0x4e8]
    struct_1 *v2;  // [bp-0x4e0]
    char *v3;  // [bp-0x4d8]
    unsigned long long v4;  // [bp-0x4d0]
    unsigned long long v5;  // [bp-0x4c8]
    unsigned long long v6;  // [bp-0x4c0]
    char *v7;  // [bp-0x4b8], Other Possible Types: unsigned long long
    int v8;  // [bp-0x4b8]
    int v9;  // [bp-0x4b8]
    unsigned long long v10;  // [bp-0x4b0]
    int v11;  // [bp-0x4b0]
    int v12;  // [bp-0x4b0]
    char *v13;  // [bp-0x4a8]
    int v14;  // [bp-0x4a8]
    char *v15;  // [bp-0x4a0], Other Possible Types: char, unsigned long long
    char v16;  // [bp-0x498]
    unsigned long long v17;  // [bp-0x480]
    unsigned long long v18;  // [bp-0x478]
    unsigned int v19;  // [bp-0x470]
    unsigned int v20;  // [bp-0x46c]
    unsigned long long v21;  // [bp-0x468]
    unsigned long long v22;  // [bp-0x460]
    void* v23;  // [bp-0x458], Other Possible Types: char, unsigned long long
    unsigned long long v24;  // [bp-0x450]
    unsigned long long v25;  // [bp-0x450]
    char v26;  // [bp-0x448], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x448]
    int v28;  // [bp-0x440]
    char v29;  // [bp-0x438]
    int v30;  // [bp-0x430]
    unsigned long long v31;  // [bp-0x428]
    int v32;  // [bp-0x420]
    unsigned long long v33;  // [bp-0x410]
    unsigned long long v34;  // [bp-0x408]
    unsigned long long v35;  // [bp-0x400]
    unsigned long long v36;  // [bp-0x3f8]
    char v37;  // [bp-0x3f0]
    char v38;  // [bp-0x3e0]
    unsigned long long v39;  // [bp-0x3d0]
    char v40;  // [bp-0x3c8]
    int v41;  // [bp-0x398]
    unsigned long long v42;  // [bp-0x388]
    int v43;  // [bp-0x380]
    unsigned long long v44;  // [bp-0x370]
    int v45;  // [bp-0x368]
    unsigned long long v46;  // [bp-0x358]
    int v47;  // [bp-0x350], Other Possible Types: char
    unsigned long long v48;  // [bp-0x340]
    int v49;  // [bp-0x338], Other Possible Types: char
    int v50;  // [bp-0x328]
    int v51;  // [bp-0x318]
    unsigned long long v52;  // [bp-0x308]
    unsigned long long v53;  // [bp-0x300]
    void* v54;  // [bp-0x2f8], Other Possible Types: int
    unsigned long long v55;  // [bp-0x2f8]
    unsigned long long v56;  // [sp-0x2f0]
    unsigned long long v57;  // [sp-0x2e8]
    char *v58;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v59;  // [bp-0x2e0]
    void* v60;  // [bp-0x2d8]
    unsigned long long v63;  // rbx
    void* v64;  // rax
    unsigned long long v65[3];  // rax
    unsigned long long v67;  // rdx
    unsigned long long v69;  // r12
    unsigned long long v70;  // r15
    unsigned long long v71[2];  // rax
    unsigned long long v72[2];  // rbx
    unsigned long v73;  // r13
    char v76;  // al
    int v78;  // xmm0
    unsigned long long v79;  // rdx
    unsigned long long v80;  // rax
    unsigned long long v81;  // rcx
    unsigned long long v82;  // r9

    std::panicking::set_hook(alloc::boxed::Box<T>::new(), &g_5bcb50);
    uu_more::uu_app(&(char)v55);
    v23.try_get_matches_from(&(char)v55, a0, a1);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
        return v36.from();
    v39 = v31;
    memcpy(&v38, &v29, 16);
    memcpy(&v37, &v26, 16);
    v35 = v23;
    v36 = v24;
    v40.from(&v35);
    (char)v55.try_get_many(&v35, "files\r", 5);
    v49.unwrap("files\r", 5, &(char)v55);
    if (*((long long *)&v49))
    {
        v63 = v53;
        v17 = v63.len();
        v33 = v52;
        v32 = v51;
        v30 = v50;
        v28 = v49;
        v34 = v63;
        v64 = 0;
        v18 = 9223372036854775809;
        while (true)
        {
            v23 = 0;
            v25 = v24;
            v27 = v26;
            if (!v64)
            {
                v65 = (char)v28.next();
                if (v65)
                {
                    v25 = v65[1].call_once(v65[2]);
                    v27 = v67;
                }
                else
                {
                    v25 = 0;
                    v27 = v26;
                }
            }
            v69 = v27;
            v70 = v25;
            v71 = v23.get_or_insert_with(&(char)v28);
            if (!v70)
            {
                core::ptr::drop_in_place<uu_more::Options>(&v40);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v35);
                return 0;
            }
            v72 = v71;
            v73 = v71[0];
            if ((char)v70.is_dir(v69))
            {
                v4.to_string_lossy(v70, v69);
                (char)v55.to_vec(v5, v6);
                v15 = v58;
                *((int128_t *)&v11) = *((int128_t *)&v55);
                v7 = 0x8000000000000000;
                v41.spec_to_string(&v7);
                v59 = 0;
                v54 = v41;
                v58 = v42;
                *((double *)&v0) = (char)v55.new();
                v2 = &g_5bcc28.padding_0[0];
                core::ptr::drop_in_place<uu_more::MoreError>(&v7);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
                uucore::mods::error::set_exit_code(v2->field_58(v0));
                v4 = uucore::util_name();
                v5 = v67;
                v7 = &v4;
                v10 = <&T as core::fmt::Display>::fmt;
                v13 = &v0;
                v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v55 = &g_5bcb20;
                v56 = 3;
                v60 = 0;
                v58 = &v7;
                v58 = 2;
                std::io::stdio::_eprint(&v55);
                ::0x4b3010::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v0, v2);
            }
            else
            {
                std::fs::metadata(&(char)v55, v70, v69);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v55, v56);
                if ((unsigned int)v55 == 2)
                {
                    v4.to_string_lossy(v70, v69);
                    (char)v55.to_vec(v5, v6);
                    v15 = v58;
                    *((int128_t *)&v12) = *((int128_t *)&v55);
                    v7 = 9223372036854775809;
                    v43.spec_to_string(&v7);
                    v59 = 0;
                    v54 = v43;
                    v57 = v44;
                    *((double *)&v0) = (char)v55.new();
                    v2 = &g_5bcba0.padding_0[0];
                    core::ptr::drop_in_place<uu_more::MoreError>(&v7);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
                    uucore::mods::error::set_exit_code(v2->field_58(v0));
                    v4 = uucore::util_name();
                    v5 = v67;
                    v7 = &v4;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v13 = &v0;
                    v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v55 = &g_5bcb20;
                    v56 = 3;
                    v60 = 0;
                    v58 = &v7;
                    v58 = 2;
                    std::io::stdio::_eprint(&v55);
                    ::0x4b3010::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v0, v2);
                }
                else
                {
                    v19.open(v70, v69);
                    if (((char)v19 & 1))
                    {
                        v4.to_string_lossy(v70, v69);
                        (char)v55.to_vec(v5, v6);
                        v3 = v58;
                        *((int128_t *)&v1) = *((int128_t *)&v55);
                        v76 = (char)v21.kind();
                        *((int128_t *)&v8) = *((int128_t *)&v0);
                        v13 = v3;
                        v15 = v76;
                        v45.spec_to_string(&v7);
                        v59 = 0;
                        v54 = v45;
                        v57 = v46;
                        *((double *)&v0) = (char)v55.new();
                        v2 = &g_5bcba0.padding_0[0];
                        core::ptr::drop_in_place<uu_more::MoreError>(&v7);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
                        uucore::mods::error::set_exit_code(v2->field_58(v0));
                        v4 = uucore::util_name();
                        v5 = v67;
                        v7 = &v4;
                        v10 = <&T as core::fmt::Display>::fmt;
                        v13 = &v0;
                        v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v55 = &g_5bcb20;
                        v56 = 3;
                        v60 = 0;
                        v58 = &v7;
                        v58 = 2;
                        std::io::stdio::_eprint(&v55);
                        ::0x4b3010::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v0, v2);
                        ::0x4b3120::core::ptr::drop_in_place<std::io::error::Error>(v21);
                    }
                    else
                    {
                        (char)v55.with_capacity(0x2000, v20);
                        v78 = *((int128_t *)&v55);
                        memcpy(&v16, &v60, 16);
                        *((int128_t *)&v14) = *((int128_t *)&v58);
                        v9 = v78;
                        (char)v55.try_from(v70, v69);
                        if (!(char)v55)
                        {
                            v79 = v56;
                            if (!(!v73))
                                goto LABEL_4b43f1;
                        }
                        else
                        {
                            v79 = 0;
                            if (v73)
                            {
LABEL_4b43f1:
                                v73 = v72[0];
                            }
                        }
                        if (uu_more::more(&v7, 2 <= v17, v79, v58, v73, v72[1], &v40))
                            break;
                    }
                }
            }
            v64 = v23;
        }
        goto LABEL_4b44e3;
    }
    else
    {
        v22 = std::io::stdio::stdin();
        if (<S as crossterm::tty::IsTty>::is_tty())
        {
            v47.spec_to_string(&g_418818);
            v59 = 1;
            v54 = v47;
            v57 = v48;
            v80 = (char)v55.new();
        }
        else
        {
            v56 = v22;
            v54 = 0;
            v80 = uu_more::more(&v54, 0, 0, v81, 0, v82, &v40);
            if (!v80)
            {
                core::ptr::drop_in_place<uu_more::Options>(&v40);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v35);
                return 0;
            }
LABEL_4b44e3:
        }
        core::ptr::drop_in_place<uu_more::Options>(&v40);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v35);
        return v80;
    }
}
