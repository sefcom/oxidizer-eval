long long uu_expand::expand(struct_0 *a0)
{
    int v0;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    int v3;  // [bp-0x118], Other Possible Types: char *
    char *v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    int v6;  // [bp-0x108], Other Possible Types: void*
    unsigned long long v7;  // [bp-0xf8]
    char *v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe8]
    void* v10;  // [bp-0xe0]
    unsigned long long v11;  // [bp-0xd8]
    void* v12;  // [bp-0xd0]
    int v13;  // [bp-0xc8]
    unsigned long long v14[3];  // [bp-0xb0]
    unsigned long long v15;  // [bp-0xa8]
    char *v16;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x98]
    int v18;  // [bp-0x90]
    int v19;  // [bp-0x80]
    unsigned long long v20;  // [bp-0x70]
    char *v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x60]
    unsigned long long v23[1][3];  // [bp-0x58]
    unsigned long long *v26;  // r14
    unsigned long long v27;  // r15
    unsigned long long v28[3];  // r13
    unsigned long long v29;  // r12
    unsigned long v30;  // rax
    unsigned long long v31[3];  // r13
    unsigned long v32;  // r13
    int v33;  // xmm0
    unsigned long long v34;  // rax
    unsigned long v35;  // rdx
    unsigned long long v36;  // rdx
    void* v37;  // r12
    void* v38;  // rdx

    v23.with_capacity(std::io::stdio::stdout());
    v26 = a0->field_20;
    v27 = a0->field_28;
    v10 = 0;
    v11 = 1;
    v12 = 0;
    if (a0->field_10)
    {
        v28 = a0->field_8;
        v29 = &v28[a0->field_10];
        v30 = v28 + 1;
        v15 = v29;
        while (true)
        {
            v31 = v28;
            v14[0] = v31;
            v32 = v30;
            if ((char)v31[1].is_dir(v31[2]))
            {
                v16 = uucore::util_name();
                v17 = v35;
                v8 = &v16;
                v9 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4e8ad0;
                v2 = 2;
                v6 = 0;
                v3 = &v8;
                v5 = 1;
                std::io::stdio::_eprint(&v0);
                v16 = &v14;
                v17 = <&T as core::fmt::Display>::fmt;
                v1 = &g_4e8af0;
                v2 = 2;
                v6 = 0;
                v4 = &v16;
                v5 = 1;
                std::io::stdio::_eprint(&v1);
                uucore::mods::error::set_exit_code(1);
            }
            else
            {
                uu_expand::open(&v16, v14[1], v14[2]);
                if (v16)
                {
                    v7 = v20;
                    v33 = *((int128_t *)&v16);
                    v6 = v19;
                    v3 = v18;
                    v0 = v33;
                    while (true)
                    {
                        v34 = std::io::read_until(&v1, &v10);
                        if (!((char)v34 & 1))
                        {
                            v36 = v35;
                            if (!v36)
                            {
                                v38 = 0;
                                break;
                            }
                        }
                        else if (false)
                        {
                            break;
                        }
                        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v34, v36);
                        v37 = uu_expand::expand_line(&v10, &v23, v26, v27, a0).map_err_context();
                        if (v37)
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v1);
                            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
                            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v23);
                            return v37;
                        }
                    }
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v34, v38);
                    v29 = v15;
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v1);
                }
                else
                {
                    *((int128_t *)&v13) = *((int128_t *)&v17);
                    v8 = uucore::util_name();
                    v9 = v35;
                    v21 = &v8;
                    v22 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_4e8ad0;
                    v2 = 2;
                    v6 = 0;
                    v3 = &v21;
                    v5 = 1;
                    std::io::stdio::_eprint(&v0);
                    v8 = &(char)v13;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v1 = &g_4e8b10;
                    v2 = 2;
                    v6 = 0;
                    v4 = &v8;
                    v5 = 1;
                    std::io::stdio::_eprint(&v1);
                    uucore::mods::error::set_exit_code(1);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((long long)v13, (long long)(&v13)[8]);
                }
            }
            v30 = v32 + 24;
            if (v32 == v29)
            {
                v30 = v32;
                v28 = v32;
                if (v28 == v29)
                    break;
            }
            else
            {
                v28 = v32;
                if (v28 == v29)
                    break;
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v23);
    return 0;
}
