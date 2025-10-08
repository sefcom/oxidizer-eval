long long uu_sum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x409]
    unsigned long long v1;  // [bp-0x408]
    unsigned short v2;  // [bp-0x408]
    struct_1 *v3;  // [bp-0x400]
    int v4;  // [bp-0x3f8], Other Possible Types: char *, char, unsigned long long
    unsigned long long v5;  // [bp-0x3f0]
    char *v6;  // [bp-0x3e8], Other Possible Types: char
    unsigned long long v7;  // [bp-0x3e0]
    char v8;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x3d0]
    char v10;  // [bp-0x3c8]
    char v11;  // [bp-0x3b8]
    unsigned long long v12;  // [bp-0x3b8]
    struct_2 *v13;  // [bp-0x3b0]
    unsigned long long v14;  // [bp-0x3a8]
    unsigned long long v15;  // [bp-0x3a0]
    unsigned long long v16;  // [bp-0x398]
    unsigned long long v17;  // [bp-0x390]
    unsigned long long v18;  // [bp-0x388]
    struct_1 *v19;  // [bp-0x380]
    struct_2 *v20;  // [bp-0x378]
    unsigned long long v21;  // [bp-0x370]
    unsigned long long v22;  // [bp-0x368]
    char v23;  // [bp-0x360]
    char v24;  // [bp-0x350]
    unsigned long long v25;  // [bp-0x340]
    char v26;  // [bp-0x338]
    char v27;  // [bp-0x2f8]
    char *v28;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x2f8]
    unsigned long long v30;  // [bp-0x2f0]
    char *v31;  // [bp-0x2e8]
    unsigned long long v32;  // [bp-0x2e0]
    char *v33;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v34;  // [bp-0x2d0], Other Possible Types: unsigned short
    void* v35;  // [bp-0x2c8]
    unsigned short v36;  // [bp-0x2c0]
    struct_2 *v38;  // rax
    struct_2 *v39;  // r15
    int v40;  // xmm0
    char v41;  // r15b
    struct_2 *v42;  // r13
    unsigned short v43;  // bx
    unsigned long long v44;  // rbp
    struct_2 *v45;  // rax
    struct_2 *v46;  // r13
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // r14
    unsigned long long v52;  // rax

    uu_sum::uu_app(&v27);
    v4.try_get_matches_from(&v27, a0, a1);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return v22.from();
    v25 = *((long long *)&v10);
    memcpy(&v24, &v8, 16);
    memcpy(&v23, &v6, 16);
    v21 = v4;
    v22 = v5;
    v27.try_get_many(&v21, _ZN6uu_sum7options4FILE17h621830cf250500f6E, g_4e1cd8);
    v26.unwrap(_ZN6uu_sum7options4FILE17h621830cf250500f6E, g_4e1cd8, &v27);
    if (*((long long *)&v26))
    {
        v11.collect(&v26);
    }
    else
    {
        v38 = 8.alloc_impl(24);
        if (!v38)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v39 = v38;
        v27.to_vec("- ", 1);
        v6 = v31;
        v40 = *((int128_t *)&v27);
        v4 = v40;
        v39->field_8 = v31;
        *((void*)&v39->field_0[0]) = v40;
        v12 = 1;
        v13 = v39;
        v14 = 1;
    }
    v0 = v21.get_flag(_ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hbe8458c5cf2e4671E, g_4e1ce8);
    if (v14 >= 2)
    {
        v41 = 1;
        v42 = v13;
    }
    else if (v14 == 1)
    {
        v42 = v13;
        v41 = (char)v42->field_0[1].equal(v42->field_8, "- ", 1) ^ 1;
    }
    else
    {
        core::panicking::panic_bounds_check(0, 0, &g_4e10c8); /* do not return */
    }
    v43 = (v0 ^ 1) * 4 + 1;
    v44 = 24 * v14 + (char *)v42;
    v45 = &v42->field_10;
    do
    {
        v20 = v42;
        v46 = v45;
        uu_sum::open(&v17, v42->field_0[1], v42->field_8);
        if ((int)v17 == 1)
        {
            v1 = v18;
            v3 = v19;
            uucore::mods::error::set_exit_code(v3->field_58(v1));
            v15 = uucore::util_name();
            v16 = v48;
            v4 = &v15;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v1;
            v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v28 = &g_4e1098;
            v30 = 3;
            v33 = 0;
            v31 = &v4;
            v32 = 2;
            std::io::stdio::_eprint(&v28);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, v3);
            continue;
        }
        else
        {
            if (v0)
                uu_sum::sysv_sum(&v27, v1, v3);
            else
                uu_sum::bsd_sum(&v27, v1, v3);
            if (*((int *)&v27) == 1)
            {
                v51 = v30.from();
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
                return v51;
            }
            v15 = v30;
            v2 = (short)v31;
            v29 = std::io::stdio::stdout();
            v17 = v29.lock();
            if (v41)
            {
                v28 = &v2;
                v30 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v31 = &v15;
                v32 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v33 = &v20;
                v34 = <&T as core::fmt::Display>::fmt;
                v35 = 0;
                v36 = v43;
                v4 = &g_4e1110;
                v5 = 4;
                v8 = &g_4183e8;
                v9 = 3;
                v6 = &v28;
                v7 = 4;
                v49 = v17.write_fmt(&v4);
                if (v49)
                {
                    v52 = v49.from();
LABEL_454321:
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v17);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
                    goto LABEL_0x45433e;
                }
            }
            else
            {
                v28 = &v2;
                v30 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v31 = &v15;
                v32 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v33 = 0;
                v34 = v43;
                v4 = &g_4e10e0;
                v5 = 3;
                v8 = &g_418388;
                v9 = 2;
                v6 = &v28;
                v7 = 3;
                v50 = v17.write_fmt(&v4);
                if (v50)
                {
                    v52 = v50.from();
                    goto LABEL_454321;
                }
            }
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v17);
        }
        v45 = &v46->field_10;
        if (v46 == v44)
        {
            v45 = v46;
            if (v46 == v44)
                break;
        }
        else if (v46 == v44)
        {
            break;
        }
        v42 = v46;
    } while (v42);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return v52;
}
