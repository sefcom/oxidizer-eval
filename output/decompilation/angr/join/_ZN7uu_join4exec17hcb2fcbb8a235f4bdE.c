long long uu_join::exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, void* a5)
{
    unsigned int v0;  // [bp-0x4b4]
    struct_2 *v1;  // [bp-0x4b0]
    unsigned long long v2;  // [sp-0x4a0]
    int v3;  // [bp-0x4a0]
    int v4;  // [bp-0x4a0]
    struct_1 *v5;  // [sp-0x498], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x490], Other Possible Types: unsigned long long
    int v7;  // [bp-0x490]
    int v8;  // [bp-0x490]
    unsigned long long v9;  // [bp-0x488]
    void* v10;  // [bp-0x480], Other Possible Types: int
    char v11;  // [bp-0x470]
    unsigned long long v12;  // [bp-0x448]
    char *v13;  // [sp-0x440]
    int v14;  // [bp-0x440]
    unsigned long long v15;  // [bp-0x438]
    char *v16;  // [sp-0x430], Other Possible Types: unsigned long long
    int v17;  // [bp-0x430]
    unsigned long long v18;  // [bp-0x428]
    int v19;  // [bp-0x420]
    unsigned long long v20;  // [bp-0x410]
    struct_1 *v21;  // [bp-0x408]
    unsigned long long v22;  // [bp-0x400]
    int v23;  // [bp-0x3f8]
    int v24;  // [bp-0x3e8]
    int v25;  // [bp-0x3d8]
    int v26;  // [bp-0x3c8]
    unsigned long long v27;  // [bp-0x3b8]
    char v28;  // [bp-0x3b6]
    char v29;  // [bp-0x3b5]
    unsigned long long v30;  // [bp-0x3b0]
    struct_1 *v31;  // [bp-0x3a8]
    unsigned long long v32;  // [bp-0x3a0]
    int v33;  // [bp-0x398]
    int v34;  // [bp-0x388]
    int v35;  // [bp-0x378]
    int v36;  // [bp-0x368]
    unsigned long long v37;  // [bp-0x358]
    char v38;  // [bp-0x356]
    char v39;  // [bp-0x355]
    int v40;  // [bp-0x350], Other Possible Types: char
    unsigned long long v41;  // [bp-0x340]
    unsigned long long v42;  // [bp-0x338]
    int v43;  // [bp-0x330]
    int v44;  // [bp-0x330]
    int v45;  // [bp-0x330]
    int v46;  // [bp-0x320], Other Possible Types: char
    int v47;  // [bp-0x310]
    unsigned long long v48;  // [bp-0x300]
    unsigned long v49;  // [bp-0x2f8]
    void* v50;  // [bp-0x2f0], Other Possible Types: char
    unsigned long v51;  // [bp-0x2e9]
    struct_1 *v52;  // [bp-0x2e8], Other Possible Types: unsigned long
    char *v53;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v54;  // [bp-0x2d8]
    int v55;  // [bp-0x2c8]
    int v56;  // [bp-0x2b8]
    int v57;  // [bp-0x2a8]
    char v58;  // [bp-0x298]
    int v59;  // [bp-0x1d0]
    int v60;  // [bp-0x1c0]
    unsigned long long v61;  // [bp-0x1b0]
    char v62;  // [bp-0x1a8]
    char v63;  // [bp-0x190]
    char v65;  // [bp-0x70]
    unsigned int v68;  // eax
    unsigned long long v69;  // rax
    struct_1 *v70;  // r12
    char v71;  // bl
    unsigned int v72;  // edx
    unsigned long long v73;  // rax
    struct_0 *v74;  // r15
    unsigned int v75;  // eax
    unsigned long v76;  // r14
    struct_1 *v77;  // rax
    unsigned long long v78;  // rcx
    struct_1 *v79;  // rax
    struct_1 *v80;  // rax
    struct_0 *v81;  // r14
    struct_1 *v82;  // rax
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rdx
    unsigned long long v87;  // rax
    struct_1 *v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax
    unsigned long long v94;  // rax
    int v95;  // xmm0
    unsigned long long v96;  // rax
    int v97;  // xmm0
    unsigned long long v98;  // rax
    struct_1 *v99;  // r14
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    struct_1 *v102;  // rax
    unsigned long long v103;  // rax
    struct_1 *v104;  // rax
    unsigned long long v105;  // rax
    unsigned long long v106;  // rax
    unsigned long long v107;  // rax
    unsigned long v108;  // r14

    v0 = v68 & 0xffffff00 | 1;
    v12 = std::io::stdio::stdin();
    v50.new(0, a0, a1, &v12, v1->field_48, v1->field_5f, v1->field_58);
    v69 = *((long long *)&v50);
    v70 = v52;
    if ((char)(((0 ^ v69) & (0 ^ -(v69))) >> 63))
    {
        v71 = 1;
        goto LABEL_4a4b97;
    }
    v27 = *((long long *)&v58);
    v26 = v57;
    v25 = v56;
    v24 = v55;
    v23 = v54;
    v20 = v69;
    v21 = v70;
    v22 = v53;
    v0 = v72 & 0xffffff00 | 1;
    v50.new(1, a2, a3, &v12, v1->field_50, v1->field_5f, v1->field_59);
    v73 = *((long long *)&v50);
    v70 = v52;
    if (v73 == 0x8000000000000000)
    {
        v0 = 1;
        v71 = 1;
        goto LABEL_4a4b82;
    }
    v37 = *((long long *)&v58);
    v36 = v57;
    v35 = v56;
    v34 = v55;
    v33 = v54;
    v30 = v73;
    v31 = v70;
    v32 = v53;
    v50.clone(a5);
    v74 = a4;
    v75 = (unsigned int)memcpy(&v63, &v50, 288);
    v65 = v74->field_5b;
    v65 = v74->field_5e;
    v76 = &v74->field_5c;
    if (!v74->field_5c)
    {
        v0 = v75 & 0xffffff00 | 1;
        if (v20.initialize(a5, 0))
        {
            v82 = v83.from();
        }
        else if (v30.initialize(a5, *((char *)v76)))
        {
            v82 = v84.from();
        }
        else
        {
            v81 = a4;
            v41 = v81->field_10;
            *((uint128_t *)&v40) = v81->field_0;
            v0 = 0;
            goto LABEL_4a4c2f;
        }
        v70 = v82;
LABEL_4a4b60:
        v0 = (unsigned int)v82 & 0xffffff00 | 1;
        v71 = 1;
        goto LABEL_4a4b68;
    }
    v77 = 16.alloc_impl();
    if (!v77)
    {
        v0 = 1;
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    }
    v77->field_0 = 0;
    v78 = *((long long *)&v50);
    *((unsigned long *)&v77->field_1[7]) = v51;
    *((unsigned long long *)&v77->field_1[0]) = v78;
    v2 = 1;
    v5 = v77;
    v6 = 1;
    v50 = a5;
    v52 = v76;
    v53 = &v2;
    v79 = uu_join::exec::{{closure}}(&v50, &v20);
    v80 = v79;
    if (v80)
    {
LABEL_4a4ae9:
        v0 = (unsigned int)v79 & 0xffffff00 | 1;
        v82 = v2.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
        goto LABEL_4a4b60;
    }
    v79 = uu_join::exec::{{closure}}(&v50, &v30);
    v80 = v79;
    if (!(!v80))
        goto LABEL_4a4ae9;
    v41 = v6;
    memcpy(&v40, &v2, 16);
    v0 = (unsigned int)v41 & 0xffffff00 | 1;
    v81 = a4;
LABEL_4a4c2f:
    memcpy(&v50, a5, 288);
    v60 = v40;
    v61 = v41;
    v62 = v81->field_5f;
    *((uint128_t *)&v59) = v81->field_20;
    v42 = std::io::stdio::stdout();
    v11.with_capacity(0x2000, v42.lock());
    if (a4->field_5d)
    {
        v87 = v20.print_headers(&v11, &v30, &v50);
        if (v87)
        {
            v88 = v87.from();
            goto LABEL_4a5088;
        }
        else
        {
            v89 = v20.reset_read_line(&v63);
            if (v89)
            {
                v88 = v89.from();
                goto LABEL_4a5088;
            }
            else
            {
                v90 = v30.reset_read_line(&v63);
                if (!v90)
                    goto LABEL_4a4d42;
                v88 = v90.from();
                goto LABEL_4a5088;
            }
        }
    }
LABEL_4a4d42:
    if (v22)
    {
        while (v32)
        {
            v91 = v20.get_current_key();
            v92 = v30.get_current_key();
            v94 = *((int *)&v65).compare(v91, v72, v92, v72);
            if ((char)v94)
            {
                if ((unsigned int)v94 == 1)
                {
                    v70 = v30.skip_line(&v11, &v63, &v50);
                    if (!v70)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v72);
                    }
                    else
                    {
                        v98 = v11.flush();
                        if (!v98)
                            goto LABEL_4a50ea;
                        v99 = v98.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v70, v72);
                        goto LABEL_4a50e4;
                    }
                }
                else
                {
                    v70 = v20.skip_line(&v11, &v63, &v50);
                    if (!v70)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v72);
                    }
                    else
                    {
                        v100 = v11.flush();
                        if (!v100)
                            goto LABEL_4a50ea;
                        v99 = v100.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v70, v72);
                        goto LABEL_4a50e4;
                    }
                }
                v29 = 1;
                v39 = 1;
                v44 = v43;
            }
            else
            {
                v2.extend(&v20, &v63);
                if (v2 == 9223372036854775809)
                {
                    v70 = v5;
                    v101 = v11.flush();
                    if (v101)
                    {
                        v102 = v101.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v5, v6);
                        v70 = v102;
                        goto LABEL_4a50ea;
                    }
                }
                v47 = v10;
                memcpy(&v46, &v6, 16);
                memcpy(&v43, &v2, 16);
                v2.extend(&v30, &v63);
                if (v2 != 9223372036854775809)
                {
                    v95 = *((int128_t *)&v2);
                    v19 = v10;
                    *((int128_t *)&v17) = *((int128_t *)&v6);
                    v14 = v95;
                    if (a4->field_5a)
                    {
                        v96 = v20.combine(&v11, &v30, &v50);
                        if (v96)
                        {
                            v70 = v96.from();
                            (unsigned long long)v14.drop_in_place<core::option::Option<uu_join::Line>>();
LABEL_4a52ea:
                            v43.drop_in_place<core::option::Option<uu_join::Line>>();
                            goto LABEL_4a50ea;
                        }
                    }
                    v10 = v47;
                    v7 = v46;
                    v3 = v45;
                    v20.reset(&v2);
                    v97 = (int128_t)v14;
                    v10 = v19;
                    *((int128_t *)&v8) = *((int128_t *)&v16);
                    v4 = v97;
                    v30.reset(&v2);
                    v44 = v45;
                }
                else
                {
                    v70 = v5;
                    v103 = v11.flush();
                    if (v103)
                    {
                        v104 = v103.from();
                        ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v5, v6);
                        v70 = v104;
                        goto LABEL_4a52ea;
                    }
                }
            }
            v43 = v44;
            if (!v22)
                break;
        }
        goto LABEL_4a4f9a;
    }
    else
    {
LABEL_4a4f9a:
        v70 = v20.finalize(&v11, &v63, &v50);
        if (v70)
        {
            v105 = v11.flush();
            if (v105)
            {
                v99 = v105.from();
                ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v70, v72);
                goto LABEL_4a50e4;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v72);
            v70 = v30.finalize(&v11, &v63, &v50);
            if (v70)
            {
                v106 = v11.flush();
                if (v106)
                {
                    v99 = v106.from();
                    ::0x4a0d00::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v70, v72);
LABEL_4a50e4:
                    v70 = v99;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v72);
                v107 = v11.flush();
                if (v107)
                {
                    v88 = v107.from();
                }
                else
                {
                    if (v28 || v38 == 1)
                    {
                        v48 = uucore::execution_phrase();
                        v49 = v72;
                        uucore::mods::locale::get_message(&v43, "join-error-input-not-sortedcontentjoin-error-not-sorted", 27);
                        v13 = &v48;
                        v15 = <&T as core::fmt::Display>::fmt;
                        v16 = &v43;
                        v18 = <alloc::string::String as core::fmt::Display>::fmt;
                        v2 = &g_593a90;
                        v5 = 3;
                        v10 = 0;
                        v6 = &v13;
                        v9 = 2;
                        std::io::stdio::_eprint(&v2);
                        ::0x4a0f00::core::ptr::drop_in_place<alloc::string::String>(&v43);
                        uucore::mods::error::set_exit_code(1);
                    }
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v11);
                    v50.drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>();
                    v63.drop_in_place<uu_join::Input<uu_join::MultiByteSep>>();
                    core::ptr::drop_in_place<uu_join::State>(&v30);
                    core::ptr::drop_in_place<uu_join::State>(&v20);
                    v108 = &a4->padding_18;
                    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
                    if ((char)v0)
                        a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
                    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v108);
                    return 0;
                }
LABEL_4a5088:
                v70 = v88;
            }
        }
    }
LABEL_4a50ea:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v11);
    v50.drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>();
LABEL_4a4b68:
    v63.drop_in_place<uu_join::Input<uu_join::MultiByteSep>>();
    core::ptr::drop_in_place<uu_join::State>(&v30);
LABEL_4a4b82:
    core::ptr::drop_in_place<uu_join::State>(&v20);
    if (!v71)
        goto LABEL_4a4ba1;
LABEL_4a4b97:
    core::ptr::drop_in_place<uu_join::MultiByteSep>(a5);
LABEL_4a4ba1:
    core::ptr::drop_in_place<uu_join::SepSetting>(&a4->padding_30);
    if (v71)
        a4.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
    ::0x4a0f60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&a4->padding_18);
    return v70;
}
