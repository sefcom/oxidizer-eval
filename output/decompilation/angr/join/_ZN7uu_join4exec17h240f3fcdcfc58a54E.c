long long uu_join::exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, void* a4, char a5)
{
    char v0;  // [bp-0x23c]
    char v1;  // [bp-0x23b]
    char v2;  // [bp-0x23a]
    char v3;  // [bp-0x239]
    char *v4;  // [bp-0x238], Other Possible Types: int, char, unsigned long
    unsigned long v5;  // [bp-0x231]
    unsigned long long v6;  // [bp-0x230]
    char *v7;  // [bp-0x228]
    int v8;  // [bp-0x228]
    int v9;  // [bp-0x228]
    char v10;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x218], Other Possible Types: unsigned long long
    int v12;  // [bp-0x218]
    int v13;  // [bp-0x218]
    int v14;  // [bp-0x210]
    int v15;  // [bp-0x200]
    int v16;  // [bp-0x1f0]
    unsigned long v17;  // [bp-0x1e0]
    unsigned long long v18;  // [bp-0x1d8]
    int v19;  // [bp-0x1d8]
    struct_0 *v20;  // [bp-0x1d0], Other Possible Types: unsigned long
    unsigned long long v21;  // [bp-0x1c8]
    int v22;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v23;  // [bp-0x1b8], Other Possible Types: char
    char v24;  // [bp-0x1a8]
    unsigned long long v25;  // [bp-0x180]
    int v26;  // [bp-0x178]
    unsigned long long v27;  // [bp-0x170]
    unsigned long long v28;  // [bp-0x168]
    int v29;  // [bp-0x160]
    char v30;  // [bp-0x150]
    char v31;  // [bp-0x14f]
    unsigned long long v32;  // [bp-0x148]
    unsigned long long v33;  // [bp-0x140]
    char *v34;  // [bp-0x138]
    char v35;  // [bp-0x130]
    int v36;  // [bp-0x120]
    int v37;  // [bp-0x110]
    int v38;  // [bp-0x100]
    unsigned long v39;  // [bp-0xf0]
    char v40;  // [bp-0xee]
    char v41;  // [bp-0xed]
    int v42;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v43;  // [bp-0xd8]
    unsigned long long v44;  // [bp-0xd0]
    int v45;  // [bp-0xc8]
    unsigned long long v46;  // [bp-0xc0]
    int v47;  // [bp-0xb8], Other Possible Types: char
    int v48;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v49;  // [bp-0x90]
    unsigned long long v50;  // [bp-0x88]
    char *v51;  // [bp-0x80]
    char v52;  // [bp-0x78]
    int v53;  // [bp-0x68]
    int v54;  // [bp-0x58]
    int v55;  // [bp-0x48]
    unsigned long v56;  // [bp-0x38]
    char v57;  // [bp-0x36]
    char v58;  // [bp-0x35]
    unsigned long long v60;  // rax
    unsigned long long v61;  // r15
    unsigned long long v62;  // rax
    unsigned long long v63;  // r14
    struct_0 *v64;  // rax
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rdx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rdx
    char v70;  // al
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    void* v76;  // rax
    unsigned long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    int v80;  // xmm0
    int v81;  // xmm0
    unsigned long long v82;  // rax
    unsigned long long v83;  // r12
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    char *v93;  // [bp-0xc8]

    v0 = a5;
    v25 = std::io::stdio::stdin();
    v4.new(0, a0, a1, &v25, (long long)a4[72], (char)a4[95], (char)a4[88]);
    v60 = *((long long *)&v4);
    if ((char)(((0 ^ v60) & (0 ^ -(v60))) >> 63))
    {
        core::ptr::drop_in_place<uu_join::SepSetting>((long long)a4[48], (long long)a4[56]);
        *((long long *)a4).drop_in_place<alloc::vec::Vec<uu_join::Spec>>((long long)a4[8]);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>((long long)a4[24], (long long)a4[32]);
        return v61;
    }
    v39 = v17;
    v38 = v16;
    v37 = v15;
    v36 = v14;
    memcpy(&v35, &v10, 16);
    v32 = v60;
    v33 = v6;
    v34 = v7;
    v4.new(1, a2, a3, &v25, (long long)a4[80], (char)a4[95], (char)a4[89]);
    v62 = *((long long *)&v4);
    v61 = v6;
    if (v62 == 0x8000000000000000)
        goto LABEL_45f30a;
    v56 = v17;
    v55 = v16;
    v54 = v15;
    v53 = v14;
    memcpy(&v52, &v10, 16);
    v49 = v62;
    v50 = v61;
    v51 = v7;
    v3 = v0;
    v1 = (char)a4[91];
    v2 = (char)a4[94];
    v63 = a4 + 92;
    if (!(char)a4[92])
    {
        if (((char)v32.initialize(&v0, 0) & 1))
        {
            v67 = v66.from();
        }
        else if (((char)v49.initialize(&v0, *((char *)v63)) & 1))
        {
            v67 = v68.from();
        }
        else
        {
            v43 = (long long)a4[16];
            *((int128_t *)&v42) = *((int128_t *)a4);
            goto LABEL_45f395;
        }
        v61 = v67;
LABEL_45f2fa:
        goto LABEL_45f2fd;
    }
    v64 = 8.alloc_impl(16);
    if (!v64)
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    v64->field_0 = 0;
    v65 = *((long long *)&v4);
    v64->field_1 = v5;
    *((unsigned long long *)&(&v64->field_0)[1]) = v65;
    v18 = 1;
    v20 = v64;
    v21 = 1;
    v4 = &v0;
    v6 = v63;
    v7 = &v18;
    v61 = uu_join::exec::{{closure}}(&v4, &v32);
    if (v61)
    {
LABEL_45f29a:
        v18.drop_in_place<alloc::vec::Vec<uu_join::Spec>>(v20);
        goto LABEL_45f2fa;
    }
    v61 = uu_join::exec::{{closure}}(&v4, &v49);
    if (v61)
        goto LABEL_45f29a;
    v43 = v22;
    memcpy(&v42, &v18, 16);
LABEL_45f395:
    v70 = (char)a4[95];
    v26 = v42;
    v28 = v43;
    v30 = v70;
    v31 = v0;
    *((int128_t *)&v29) = (int128_t)a4[32];
    v44 = std::io::stdio::stdout();
    v24.with_capacity(v44.lock());
    if ((char)a4[93])
    {
        v72 = v32.print_headers(&v24, &v49, &(char)v26);
        if (v72)
        {
            v73 = v72.from();
            goto LABEL_45f7bb;
        }
        else
        {
            v74 = v32.reset_read_line(&v1);
            if (v74)
            {
                v73 = v74.from();
                goto LABEL_45f7bb;
            }
            else
            {
                v75 = v49.reset_read_line(&v1);
                if (!v75)
                    goto LABEL_45f490;
                v73 = v75.from();
                goto LABEL_45f7bb;
            }
        }
    }
LABEL_45f490:
    if (v34)
    {
        while (v51)
        {
            v76 = v32.get_current_key();
            v78 = v1.compare(v76, v77, v49.get_current_key(), v77);
            if ((char)v78)
            {
                if ((unsigned int)v78 == 1)
                {
                    v61 = v49.skip_line(&v24, &v1, &(char)v26);
                    if (!v61)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                    }
                    else
                    {
                        v86 = v24.flush();
                        if (!v86)
                            goto LABEL_45f868;
                        v83 = v86.from();
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v61, v77);
                        goto LABEL_45f862;
                    }
                }
                else
                {
                    v61 = v32.skip_line(&v24, &v1, &(char)v26);
                    if (!v61)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                    }
                    else
                    {
                        v82 = v24.flush();
                        if (!v82)
                            goto LABEL_45f868;
                        v83 = v82.from();
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v61, v77);
                        goto LABEL_45f862;
                    }
                }
                v41 = 1;
                v58 = 1;
            }
            else
            {
                v4.extend(&v32, &v1);
                if ((long long)v4 == 9223372036854775809)
                {
                    v61 = v6;
                    v84 = v24.flush();
                    if (v84)
                    {
                        v85 = v84.from();
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, v7);
                        v61 = v85;
                        goto LABEL_45f868;
                    }
                }
                memcpy(&v48, &v11, 16);
                memcpy(&v47, &v7, 16);
                *((int128_t *)&v45) = (int128_t)v4;
                v4.extend(&v49, &v1);
                if ((long long)v4 != 9223372036854775809)
                {
                    memcpy(&v23, &v11, 16);
                    memcpy(&v21, &v7, 16);
                    *((int128_t *)&v19) = (int128_t)v4;
                    if ((char)a4[90])
                    {
                        v79 = v32.combine(&v24, &v49);
                        if (v79)
                        {
                            v61 = v79.from();
                            (unsigned long long)v19.drop_in_place<core::option::Option<uu_join::Line>>();
LABEL_45f9e6:
                            (unsigned long long)v45.drop_in_place<core::option::Option<uu_join::Line>>();
                            goto LABEL_45f868;
                        }
                    }
                    v80 = (int128_t)v45;
                    v12 = v48;
                    v8 = v47;
                    v4 = v80;
                    v32.reset(&v4);
                    v81 = (int128_t)v19;
                    v13 = v23;
                    v9 = v22;
                    v4 = v81;
                    v49.reset(&v4);
                }
                else
                {
                    v61 = v6;
                    v87 = v24.flush();
                    if (v87)
                    {
                        v88 = v87.from();
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, v7);
                        v61 = v88;
                        goto LABEL_45f9e6;
                    }
                }
            }
            if (!v34)
                break;
        }
        goto LABEL_45f6c4;
    }
    else
    {
LABEL_45f6c4:
        v61 = v32.finalize(&v24, &v1, &(char)v26);
        if (v61)
        {
            v89 = v24.flush();
            if (v89)
            {
                v83 = v89.from();
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v61, v77);
                goto LABEL_45f862;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
            v61 = v49.finalize(&v24, &v1, &(char)v26);
            if (v61)
            {
                v90 = v24.flush();
                if (v90)
                {
                    v83 = v90.from();
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v61, v77);
LABEL_45f862:
                    v61 = v83;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v77);
                v91 = v24.flush();
                if (v91)
                {
                    v73 = v91.from();
                }
                else
                {
                    if (v40 || v57 == 1)
                    {
                        v18 = uucore::execution_phrase();
                        v20 = v77;
                        v93 = &v18;
                        v46 = <&T as core::fmt::Display>::fmt;
                        v4 = &g_4fd2e0;
                        v6 = 2;
                        v11 = 0;
                        v7 = &v93;
                        v10 = 1;
                        std::io::stdio::_eprint(&v4);
                        uucore::mods::error::set_exit_code(1);
                    }
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v24);
                    (long long)v26.drop_in_place<uu_join::Repr<uu_join::LineSep>>(v27);
                    core::ptr::drop_in_place<uu_join::State>(&v49);
                    core::ptr::drop_in_place<uu_join::State>(&v32);
                    core::ptr::drop_in_place<uu_join::SepSetting>((long long)a4[48], (long long)a4[56]);
                    *((long long *)a4).drop_in_place<alloc::vec::Vec<uu_join::Spec>>((long long)a4[8]);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>((long long)a4[24], (long long)a4[32]);
                    return 0;
                }
LABEL_45f7bb:
                v61 = v73;
            }
        }
    }
LABEL_45f868:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v24);
    (long long)v26.drop_in_place<uu_join::Repr<uu_join::LineSep>>(v27);
LABEL_45f2fd:
    core::ptr::drop_in_place<uu_join::State>(&v49);
LABEL_45f30a:
    core::ptr::drop_in_place<uu_join::State>(&v32);
    core::ptr::drop_in_place<uu_join::SepSetting>((long long)a4[48], (long long)a4[56]);
    if (true)
    {
        *((long long *)a4).drop_in_place<alloc::vec::Vec<uu_join::Spec>>((long long)a4[8]);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>((long long)a4[24], (long long)a4[32]);
        return v61;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>((long long)a4[24], (long long)a4[32]);
    return v61;
}
