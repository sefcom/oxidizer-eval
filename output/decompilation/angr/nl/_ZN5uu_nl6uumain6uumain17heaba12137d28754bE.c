long long uu_nl::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x448], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x440]
    void* v2;  // [bp-0x438], Other Possible Types: unsigned long long
    char v3;  // [bp-0x428]
    unsigned long long v4;  // [bp-0x428]
    int v5;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x420]
    unsigned long long v7;  // [bp-0x420]
    char *v8;  // [bp-0x418], Other Possible Types: char, unsigned long long
    unsigned int v9;  // [bp-0x410], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x408], Other Possible Types: char
    char v11;  // [bp-0x3f8]
    unsigned long long v12;  // [bp-0x3d8]
    unsigned long long v13;  // [bp-0x3d0]
    char *v14;  // [bp-0x3c8]
    unsigned long long v15;  // [bp-0x3c8]
    struct_0 *v16;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long v17;  // [bp-0x3b8], Other Possible Types: unsigned long long
    char *v18;  // [bp-0x3b0]
    unsigned long long v19;  // [bp-0x3a8]
    char v20;  // [bp-0x3a0]
    unsigned long long v21;  // [bp-0x398]
    unsigned long long v22;  // [bp-0x390]
    unsigned long long v23;  // [bp-0x388]
    unsigned long long v24;  // [bp-0x380]
    char v25;  // [bp-0x378]
    char v26;  // [bp-0x368]
    unsigned long long v27;  // [bp-0x358]
    int v28;  // [bp-0x350], Other Possible Types: char
    unsigned long long v29;  // [bp-0x340]
    char v30;  // [bp-0x338]
    char v31;  // [bp-0x2f8]
    char v32;  // [bp-0x298]
    unsigned long long v34;  // rbx
    struct_0 *v35;  // rbp
    struct_0 *v36;  // r13
    struct_0 *v37;  // rax
    int v38;  // xmm0
    struct_0 *v39;  // rax
    struct_0 *v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v42;  // r15
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax

    uu_nl::uu_app(&v31);
    v3.try_get_matches_from(&v31, a0, a1);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return v24.from();
    v27 = *((long long *)&v11);
    memcpy(&v26, &v10, 16);
    memcpy(&v25, &v8, 16);
    v23 = v4;
    v24 = v6;
    v31.default();
    uu_nl::helper::parse_options(&v20, &v31, &v23);
    if (v22)
    {
        alloc::str::join_generic_copy(&v3, v21, v22);
        v2 = v8;
        *((int128_t *)&v0) = *((int128_t *)&v4);
        v14 = &(char)v0;
        v16 = <alloc::string::String as core::fmt::Display>::fmt;
        *((unsigned long long **)&v5) = &g_639370;
        v7 = 1;
        v10 = 0;
        v8 = &v14;
        v9 = 1;
        v28.map_or_else(&(unsigned long long)v5);
        core::ptr::drop_in_place<alloc::string::String>(v0, v1);
        v9 = 1;
        v5 = v28;
        v8 = v29;
        v34 = (unsigned long long)v5.new();
LABEL_511ed5:
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v20);
        core::ptr::drop_in_place<uu_nl::Settings>(&v31);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
        return v34;
    }
    v3.try_get_many(&v23);
    v30.unwrap(&v3);
    if (*((long long *)&v30))
    {
        (char)v15.collect(&v30);
        v35 = v16;
        v0 = 1;
        v1 = *((long long *)&v32);
        v2 = 0;
        if (!v17)
            goto LABEL_512226;
        v36 = 24 * v17 + (char *)v35;
    }
    else
    {
        v37 = 8.alloc_impl(24);
        if (!v37)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v35 = v37;
        v3.to_vec("-: Is a directory\nutf8info", 1);
        v2 = v8;
        v38 = (int128_t)v5;
        v0 = v38;
        v35->field_8 = v8;
        *((void*)&v35->field_0[0]) = v38;
        v15 = 1;
        v16 = v35;
        v17 = 1;
        v0 = 1;
        v1 = *((long long *)&v32);
        v2 = 0;
        v36 = &v35->field_10;
    }
    v39 = &v35->field_10;
    do
    {
        v40 = v39;
        v41 = v35->field_0[1];
        v42 = v35->field_8;
        if ((char)v41.equal(v42, "-: Is a directory\nutf8info", 1))
        {
            v3.with_capacity(std::io::stdio::stdin());
            v44 = uu_nl::nl(&v3, &v0, &v31);
            if (v44)
            {
                v34 = v44;
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v4, v6);
                goto LABEL_51229d;
            }
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v4, v6);
            v39 = &v40->field_10;
            if (v40 == v36)
            {
                v39 = v40;
                if (v40 == v36)
                    break;
            }
            else
            {
                if (v40 == v36)
                    break;
            }
        }
        else if ((char)v41.is_dir(v42))
        {
            v12 = uucore::util_name();
            v13 = v45;
            v18 = &v12;
            v19 = <&T as core::fmt::Display>::fmt;
            v5 = &g_6392f8;
            v7 = 2;
            v10 = 0;
            v8 = &v18;
            v9 = 1;
            std::io::stdio::_eprint(&v5);
            v12 = v41;
            v13 = v42;
            v18 = &v12;
            v19 = <std::path::Display as core::fmt::Display>::fmt;
            v4 = &g_639380;
            v6 = 2;
            v10 = 0;
            v8 = &v18;
            v9 = 1;
            std::io::stdio::_eprint(&v4);
            uucore::mods::error::set_exit_code(1);
            v39 = &v40->field_10;
            if (v40 == v36)
            {
                v39 = v40;
                if (v40 == v36)
                    break;
            }
            else if (v40 == v36)
            {
                break;
            }
        }
        else
        {
            v3.open(v41, v42);
            v12.map_err_context(&v3, v35);
            if (v12)
            {
                v34 = v12;
                goto LABEL_51229d;
            }
            v3.with_capacity(v13);
            v46 = uu_nl::nl(&v3, &v0, &v31);
            if (!v46)
            {
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v3);
                v39 = &v40->field_10;
                if (v40 == v36)
                {
                    v39 = v40;
                    if (v40 == v36)
                        break;
                }
                else if (v40 == v36)
                {
                    break;
                }
            }
            else
            {
                v34 = v46;
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v3);
LABEL_51229d:
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v15);
                goto LABEL_511ed5;
            }
        }
        v35 = v40;
    } while (v40);
LABEL_512226:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v15);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v20);
    core::ptr::drop_in_place<uu_nl::Settings>(&v31);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
    return 0;
}
