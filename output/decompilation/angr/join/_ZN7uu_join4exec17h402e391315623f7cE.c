long long uu_join::exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, char a5)
{
    char v0;  // [bp-0x24c]
    char v1;  // [bp-0x24b]
    char v2;  // [bp-0x24a]
    char v3;  // [bp-0x249]
    char *v4;  // [bp-0x248], Other Possible Types: int, char, unsigned long
    unsigned long v5;  // [bp-0x241]
    unsigned long long v6;  // [bp-0x240]
    char *v7;  // [bp-0x238]
    int v8;  // [bp-0x238]
    int v9;  // [bp-0x238]
    char v10;  // [bp-0x230], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x228], Other Possible Types: unsigned long long
    int v12;  // [bp-0x228]
    int v13;  // [bp-0x228]
    int v14;  // [bp-0x220]
    int v15;  // [bp-0x210]
    int v16;  // [bp-0x200]
    unsigned long v17;  // [bp-0x1f0]
    char *v18;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v19;  // [bp-0x1e8]
    struct_1 *v20;  // [bp-0x1e0], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v22;  // [bp-0x1d8]
    unsigned long long v23;  // [bp-0x1d0]
    int v24;  // [bp-0x1c8], Other Possible Types: char
    char v25;  // [bp-0x1b8]
    unsigned long long v26;  // [bp-0x190]
    int v27;  // [bp-0x188]
    unsigned long long v28;  // [bp-0x178]
    int v29;  // [bp-0x170]
    char v30;  // [bp-0x160]
    char v31;  // [bp-0x15f]
    unsigned long long v32;  // [bp-0x158]
    unsigned long long v33;  // [bp-0x150]
    char *v34;  // [bp-0x148]
    char v35;  // [bp-0x140]
    int v36;  // [bp-0x130]
    int v37;  // [bp-0x120]
    int v38;  // [bp-0x110]
    unsigned long v39;  // [bp-0x100]
    char v40;  // [bp-0xfe]
    char v41;  // [bp-0xfd]
    int v42;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v43;  // [bp-0xe8]
    unsigned long long v44;  // [bp-0xe0]
    int v45;  // [bp-0xd8]
    int v46;  // [bp-0xd8]
    int v47;  // [bp-0xd8]
    int v48;  // [bp-0xc8], Other Possible Types: char
    int v49;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v50;  // [bp-0xa0]
    unsigned long long v51;  // [bp-0x98]
    char *v52;  // [bp-0x90]
    char v53;  // [bp-0x88]
    int v54;  // [bp-0x78]
    int v55;  // [bp-0x68]
    int v56;  // [bp-0x58]
    unsigned long v57;  // [bp-0x48]
    char v58;  // [bp-0x46]
    char v59;  // [bp-0x45]
    unsigned long long v60;  // [bp-0x40]
    unsigned long long v61;  // [bp-0x38]
    unsigned long long v63;  // rax
    void* v64;  // r15
    unsigned long long v65;  // rax
    unsigned long v66;  // r14
    struct_1 *v67;  // rax
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rax
    unsigned long long v71;  // rdx
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rdx
    unsigned long long v80;  // rax
    int v81;  // xmm0
    unsigned long long v82;  // rax
    int v83;  // xmm0
    int v84;  // xmm1
    unsigned long long v85;  // rax
    unsigned long long v86;  // r12
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax
    unsigned long long v93;  // rax
    unsigned long long v94;  // rax
    unsigned long v96;  // r13

    v0 = a5;
    v26 = std::io::stdio::stdin();
    v4.new(0, a0, a1, &v26, a4->field_48, a4->field_5f, a4->field_58);
    v63 = *((long long *)&v4);
    v64 = v6;
    if ((char)(((0 ^ v63) & (0 ^ -(v63))) >> 63))
        goto LABEL_4a340b;
    v39 = v17;
    v38 = v16;
    v37 = v15;
    v36 = v14;
    memcpy(&v35, &v10, 16);
    v32 = v63;
    v33 = v64;
    v34 = v7;
    v4.new(1, a2, a3, &v26, a4->field_50, a4->field_5f, a4->field_59);
    v65 = *((long long *)&v4);
    v64 = v6;
    if (v65 == 0x8000000000000000)
        goto LABEL_4a33fe;
    v57 = v17;
    v56 = v16;
    v55 = v15;
    v54 = v14;
    memcpy(&v53, &v10, 16);
    v50 = v65;
    v51 = v64;
    v52 = v7;
    v3 = v0;
    v1 = a4->field_5b;
    v2 = a4->field_5e;
    v66 = &a4->field_5c;
    if (!a4->field_5c)
    {
        if (v32.initialize(&v0, 0))
        {
            v70 = v69.from();
        }
        else if (v50.initialize(&v0, *((char *)v66)))
        {
            v70 = v71.from();
        }
        else
        {
            v43 = a4->field_10;
            *((uint128_t *)&v42) = a4->field_0;
            goto LABEL_4a3483;
        }
        v64 = v70;
LABEL_4a33ee:
        goto LABEL_4a33f1;
    }
    v67 = 16.alloc_impl();
    if (!v67)
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    v67->field_0 = 0;
    v68 = *((long long *)&v4);
    *((unsigned long *)&v67->field_1[7]) = v5;
    *((unsigned long long *)&v67->field_1[0]) = v68;
    v18 = 1;
    v20 = v67;
    v21 = 1;
    v4 = &v0;
    v6 = v66;
    v7 = &v18;
    v64 = uu_join::exec::{{closure}}(&v4, &v32);
    if (v64)
    {
LABEL_4a338b:
        v18.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
        goto LABEL_4a33ee;
    }
    v64 = uu_join::exec::{{closure}}(&v4, &v50);
    if (!(!v64))
        goto LABEL_4a338b;
    v43 = v21;
    memcpy(&v42, &v18, 16);
LABEL_4a3483:
    v27 = v42;
    v28 = v43;
    v30 = a4->field_5f;
    v31 = v0;
    *((uint128_t *)&v29) = a4->field_20;
    v44 = std::io::stdio::stdout();
    v25.with_capacity(0x2000, v44.lock());
    if (a4->field_5d)
    {
        v74 = v32.print_headers(&v25, &v50, &v27);
        if (v74)
        {
            v75 = v74.from();
            goto LABEL_4a38b2;
        }
        else
        {
            v76 = v32.reset_read_line(&v1);
            if (v76)
            {
                v75 = v76.from();
                goto LABEL_4a38b2;
            }
            else
            {
                v77 = v50.reset_read_line(&v1);
                if (!v77)
                    goto LABEL_4a3583;
                v75 = v77.from();
                goto LABEL_4a38b2;
            }
        }
    }
LABEL_4a3583:
    if (v34)
    {
        while (v52)
        {
            v78 = v32.get_current_key();
            v80 = v1.compare(v78, v79, v50.get_current_key(), v79);
            if ((char)v80)
            {
                if ((unsigned int)v80 == 1)
                {
                    v64 = v50.skip_line(&v25, &v1, &v27);
                    if (!v64)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v79);
                    }
                    else
                    {
                        v85 = v25.flush();
                        if (!v85)
                            goto LABEL_4a391a;
                        v86 = v85.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v64, v79);
                        goto LABEL_4a3914;
                    }
                }
                else
                {
                    v64 = v32.skip_line(&v25, &v1, &v27);
                    if (!v64)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v79);
                    }
                    else
                    {
                        v87 = v25.flush();
                        if (!v87)
                            goto LABEL_4a391a;
                        v86 = v87.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v64, v79);
                        goto LABEL_4a3914;
                    }
                }
                v41 = 1;
                v59 = 1;
                v46 = v45;
            }
            else
            {
                v4.extend(&v32, &v1);
                if (v4 == 9223372036854775809)
                {
                    v64 = v6;
                    v88 = v25.flush();
                    if (v88)
                    {
                        v89 = v88.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v6, v7);
                        v64 = v89;
                        goto LABEL_4a391a;
                    }
                }
                memcpy(&v49, &v11, 16);
                memcpy(&v48, &v7, 16);
                memcpy(&v45, &v4, 16);
                v4.extend(&v50, &v1);
                if (v4 != 9223372036854775809)
                {
                    v81 = *((int128_t *)&v4);
                    memcpy(&v24, &v11, 16);
                    *((int128_t *)&v22) = *((int128_t *)&v7);
                    v19 = v81;
                    if (a4->field_5a)
                    {
                        v82 = v32.combine(&v25, &v50, &v27);
                        if (v82)
                        {
                            v64 = v82.from();
                            (unsigned long long)v19.drop_in_place<core::option::Option<uu_join::Line>>();
LABEL_4a3afa:
                            v45.drop_in_place<core::option::Option<uu_join::Line>>();
                            goto LABEL_4a391a;
                        }
                    }
                    v12 = v49;
                    v8 = v48;
                    v4 = v47;
                    v32.reset(&v4);
                    v83 = (int128_t)v19;
                    v84 = (int128_t)v22;
                    v13 = v24;
                    v9 = v84;
                    v4 = v83;
                    v50.reset(&v4);
                    v46 = v47;
                }
                else
                {
                    v64 = v6;
                    v90 = v25.flush();
                    if (v90)
                    {
                        v91 = v90.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v6, v7);
                        v64 = v91;
                        goto LABEL_4a3afa;
                    }
                }
            }
            v45 = v46;
            if (!v34)
                break;
        }
        goto LABEL_4a37bb;
    }
    else
    {
LABEL_4a37bb:
        v64 = v32.finalize(&v25, &v1, &v27);
        if (v64)
        {
            v92 = v25.flush();
            if (v92)
            {
                v86 = v92.from();
                ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v64, v79);
                goto LABEL_4a3914;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v79);
            v64 = v50.finalize(&v25, &v1, &v27);
            if (v64)
            {
                v93 = v25.flush();
                if (v93)
                {
                    v86 = v93.from();
                    ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v64, v79);
LABEL_4a3914:
                    v64 = v86;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v79);
                v94 = v25.flush();
                if (v94)
                {
                    v75 = v94.from();
                }
                else
                {
                    if (v40 || v58 == 1)
                    {
                        v60 = uucore::execution_phrase();
                        v61 = v79;
                        uucore::mods::locale::get_message(&v45, "join-error-input-not-sortedcontentjoin-error-not-sorted", 27);
                        v18 = &v60;
                        v20 = <&T as core::fmt::Display>::fmt;
                        v21 = &v45;
                        v23 = <alloc::string::String as core::fmt::Display>::fmt;
                        v4 = &g_593a90;
                        v6 = 3;
                        v11 = 0;
                        v7 = &v18;
                        v10 = 2;
                        std::io::stdio::_eprint(&v4);
                        ::0x4a0f00::core::ptr::drop_in_place<alloc::string::String>(&v45);
                        uucore::mods::error::set_exit_code(1);
                    }
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v25);
                    v27.drop_in_place<uu_join::Repr<uu_join::LineSep>>();
                    core::ptr::drop_in_place<uu_join::State>(&v50);
                    core::ptr::drop_in_place<uu_join::State>(&v32);
                    v96 = &a4->padding_18;
                    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
                    a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
                    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v96);
                    return 0;
                }
LABEL_4a38b2:
                v64 = v75;
            }
        }
    }
LABEL_4a391a:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v25);
    v27.drop_in_place<uu_join::Repr<uu_join::LineSep>>();
LABEL_4a33f1:
    core::ptr::drop_in_place<uu_join::State>(&v50);
LABEL_4a33fe:
    core::ptr::drop_in_place<uu_join::State>(&v32);
LABEL_4a340b:
    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
    a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&a4->padding_18);
    return v64;
}
