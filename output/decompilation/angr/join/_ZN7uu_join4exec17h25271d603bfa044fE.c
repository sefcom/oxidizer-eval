long long uu_join::exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4)
{
    char v0;  // [bp-0x24b]
    char v1;  // [bp-0x24a]
    char v2;  // [bp-0x249]
    char *v3;  // [bp-0x248], Other Possible Types: int, char, unsigned long
    unsigned long v4;  // [bp-0x241]
    unsigned long long v5;  // [bp-0x240]
    char *v6;  // [bp-0x238]
    int v7;  // [bp-0x238]
    int v8;  // [bp-0x238]
    char v9;  // [bp-0x230], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x228], Other Possible Types: unsigned long long
    int v11;  // [bp-0x228]
    int v12;  // [bp-0x228]
    int v13;  // [bp-0x220]
    int v14;  // [bp-0x210]
    int v15;  // [bp-0x200]
    unsigned long v16;  // [bp-0x1f0]
    char *v17;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v18;  // [bp-0x1e8]
    struct_0 *v19;  // [bp-0x1e0], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v21;  // [bp-0x1d8]
    unsigned long long v22;  // [bp-0x1d0]
    int v23;  // [bp-0x1c8], Other Possible Types: char
    char v24;  // [bp-0x1b8]
    unsigned long long v25;  // [bp-0x190]
    int v26;  // [bp-0x188]
    unsigned long long v27;  // [bp-0x178]
    int v28;  // [bp-0x170]
    char v29;  // [bp-0x160]
    unsigned long long v30;  // [bp-0x158]
    unsigned long long v31;  // [bp-0x150]
    char *v32;  // [bp-0x148]
    char v33;  // [bp-0x140]
    int v34;  // [bp-0x130]
    int v35;  // [bp-0x120]
    int v36;  // [bp-0x110]
    unsigned long v37;  // [bp-0x100]
    char v38;  // [bp-0xfe]
    char v39;  // [bp-0xfd]
    int v40;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v41;  // [bp-0xe8]
    unsigned long long v42;  // [bp-0xe0]
    int v43;  // [bp-0xd8]
    int v44;  // [bp-0xd8]
    int v45;  // [bp-0xd8]
    int v46;  // [bp-0xc8], Other Possible Types: char
    int v47;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v48;  // [bp-0xa0]
    unsigned long long v49;  // [bp-0x98]
    char *v50;  // [bp-0x90]
    char v51;  // [bp-0x88]
    int v52;  // [bp-0x78]
    int v53;  // [bp-0x68]
    int v54;  // [bp-0x58]
    unsigned long v55;  // [bp-0x48]
    char v56;  // [bp-0x46]
    char v57;  // [bp-0x45]
    unsigned long long v58;  // [bp-0x40]
    unsigned long long v59;  // [bp-0x38]
    unsigned long long v61;  // rax
    void* v62;  // r15
    unsigned long long v63;  // rax
    unsigned long v64;  // r14
    struct_0 *v65;  // rax
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    int v79;  // xmm0
    unsigned long long v80;  // rax
    int v81;  // xmm0
    int v82;  // xmm1
    unsigned long long v83;  // rax
    unsigned long long v84;  // r12
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax
    unsigned long v94;  // r13

    v25 = std::io::stdio::stdin();
    v3.new(0, a0, a1, &v25, a4->field_48, a4->field_5f, a4->field_58);
    v61 = *((long long *)&v3);
    v62 = v5;
    if ((char)(((0 ^ v61) & (0 ^ -(v61))) >> 63))
        goto LABEL_4a28ad;
    v37 = v16;
    v36 = v15;
    v35 = v14;
    v34 = v13;
    memcpy(&v33, &v9, 16);
    v30 = v61;
    v31 = v62;
    v32 = v6;
    v3.new(1, a2, a3, &v25, a4->field_50, a4->field_5f, a4->field_59);
    v63 = *((long long *)&v3);
    v62 = v5;
    if (v63 == 0x8000000000000000)
        goto LABEL_4a28a0;
    v55 = v16;
    v54 = v15;
    v53 = v14;
    v52 = v13;
    memcpy(&v51, &v9, 16);
    v48 = v63;
    v49 = v62;
    v50 = v6;
    v0 = a4->field_5b;
    v1 = a4->field_5e;
    v64 = &a4->field_5c;
    if (!a4->field_5c)
    {
        if (v30.initialize(&v2, 0))
        {
            v68 = v67.from();
        }
        else if (v48.initialize(&v2, *((char *)v64)))
        {
            v68 = v69.from();
        }
        else
        {
            v41 = a4->field_10;
            *((uint128_t *)&v40) = a4->field_0;
            goto LABEL_4a2925;
        }
        v62 = v68;
LABEL_4a2890:
        goto LABEL_4a2893;
    }
    v65 = 16.alloc_impl();
    if (!v65)
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    v65->field_0 = 0;
    v66 = *((long long *)&v3);
    *((unsigned long *)&v65->field_1[7]) = v4;
    *((unsigned long long *)&v65->field_1[0]) = v66;
    v17 = 1;
    v19 = v65;
    v20 = 1;
    v3 = &v2;
    v5 = v64;
    v6 = &v17;
    v62 = uu_join::exec::{{closure}}(&v3, &v30);
    if (v62)
    {
LABEL_4a282d:
        v17.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
        goto LABEL_4a2890;
    }
    v62 = uu_join::exec::{{closure}}(&v3, &v48);
    if (!(!v62))
        goto LABEL_4a282d;
    v41 = v20;
    memcpy(&v40, &v17, 16);
LABEL_4a2925:
    v27 = v41;
    v26 = v40;
    v29 = a4->field_5f;
    *((uint128_t *)&v28) = a4->field_20;
    v42 = std::io::stdio::stdout();
    v24.with_capacity(0x2000, v42.lock());
    if (a4->field_5d)
    {
        v72 = v30.print_headers(&v24, &v48, &v26);
        if (v72)
        {
            v73 = v72.from();
            goto LABEL_4a2d48;
        }
        else
        {
            v74 = v30.reset_read_line(&v0);
            if (v74)
            {
                v73 = v74.from();
                goto LABEL_4a2d48;
            }
            else
            {
                v75 = v48.reset_read_line(&v0);
                if (!v75)
                    goto LABEL_4a2a19;
                v73 = v75.from();
                goto LABEL_4a2d48;
            }
        }
    }
LABEL_4a2a19:
    if (v32)
    {
        while (v50)
        {
            v76 = v30.get_current_key();
            v78 = v0.compare(v76, v77, v48.get_current_key(), v77);
            if ((char)v78)
            {
                if ((unsigned int)v78 == 1)
                {
                    v62 = v48.skip_line(&v24, &v0, &v26);
                    if (!v62)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                    }
                    else
                    {
                        v83 = v24.flush();
                        if (!v83)
                            goto LABEL_4a2db0;
                        v84 = v83.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v62, v77);
                        goto LABEL_4a2daa;
                    }
                }
                else
                {
                    v62 = v30.skip_line(&v24, &v0, &v26);
                    if (!v62)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                    }
                    else
                    {
                        v85 = v24.flush();
                        if (!v85)
                            goto LABEL_4a2db0;
                        v84 = v85.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v62, v77);
                        goto LABEL_4a2daa;
                    }
                }
                v39 = 1;
                v57 = 1;
                v44 = v43;
            }
            else
            {
                v3.extend(&v30, &v0);
                if (v3 == 9223372036854775809)
                {
                    v62 = v5;
                    v86 = v24.flush();
                    if (v86)
                    {
                        v87 = v86.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v5, v6);
                        v62 = v87;
                        goto LABEL_4a2db0;
                    }
                }
                memcpy(&v47, &v10, 16);
                memcpy(&v46, &v6, 16);
                memcpy(&v43, &v3, 16);
                v3.extend(&v48, &v0);
                if (v3 != 9223372036854775809)
                {
                    v79 = *((int128_t *)&v3);
                    memcpy(&v23, &v10, 16);
                    *((int128_t *)&v21) = *((int128_t *)&v6);
                    v18 = v79;
                    if (a4->field_5a)
                    {
                        v80 = v30.combine(&v24, &v48, &v26);
                        if (v80)
                        {
                            v62 = v80.from();
                            (unsigned long long)v18.drop_in_place<core::option::Option<uu_join::Line>>();
LABEL_4a2f90:
                            v43.drop_in_place<core::option::Option<uu_join::Line>>();
                            goto LABEL_4a2db0;
                        }
                    }
                    v11 = v47;
                    v7 = v46;
                    v3 = v45;
                    v30.reset(&v3);
                    v81 = (int128_t)v18;
                    v82 = (int128_t)v21;
                    v12 = v23;
                    v8 = v82;
                    v3 = v81;
                    v48.reset(&v3);
                    v44 = v45;
                }
                else
                {
                    v62 = v5;
                    v88 = v24.flush();
                    if (v88)
                    {
                        v89 = v88.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v5, v6);
                        v62 = v89;
                        goto LABEL_4a2f90;
                    }
                }
            }
            v43 = v44;
            if (!v32)
                break;
        }
        goto LABEL_4a2c51;
    }
    else
    {
LABEL_4a2c51:
        v62 = v30.finalize(&v24, &v0, &v26);
        if (v62)
        {
            v90 = v24.flush();
            if (v90)
            {
                v84 = v90.from();
                ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v62, v77);
                goto LABEL_4a2daa;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
            v62 = v48.finalize(&v24, &v0, &v26);
            if (v62)
            {
                v91 = v24.flush();
                if (v91)
                {
                    v84 = v91.from();
                    ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v62, v77);
LABEL_4a2daa:
                    v62 = v84;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                v92 = v24.flush();
                if (v92)
                {
                    v73 = v92.from();
                }
                else
                {
                    if (v38 || v56 == 1)
                    {
                        v58 = uucore::execution_phrase();
                        v59 = v77;
                        uucore::mods::locale::get_message(&v43, "join-error-input-not-sortedcontentjoin-error-not-sorted", 27);
                        v17 = &v58;
                        v19 = <&T as core::fmt::Display>::fmt;
                        v20 = &v43;
                        v22 = <alloc::string::String as core::fmt::Display>::fmt;
                        v3 = &g_593a90;
                        v5 = 3;
                        v10 = 0;
                        v6 = &v17;
                        v9 = 2;
                        std::io::stdio::_eprint(&v3);
                        ::0x4a0f00::core::ptr::drop_in_place<alloc::string::String>(&v43);
                        uucore::mods::error::set_exit_code(1);
                    }
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v24);
                    v26.drop_in_place<uu_join::Repr<uu_join::LineSep>>();
                    core::ptr::drop_in_place<uu_join::State>(&v48);
                    core::ptr::drop_in_place<uu_join::State>(&v30);
                    v94 = &a4->padding_18;
                    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
                    a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
                    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v94);
                    return 0;
                }
LABEL_4a2d48:
                v62 = v73;
            }
        }
    }
LABEL_4a2db0:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v24);
    v26.drop_in_place<uu_join::Repr<uu_join::LineSep>>();
LABEL_4a2893:
    core::ptr::drop_in_place<uu_join::State>(&v48);
LABEL_4a28a0:
    core::ptr::drop_in_place<uu_join::State>(&v30);
LABEL_4a28ad:
    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
    a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&a4->padding_18);
    return v62;
}
