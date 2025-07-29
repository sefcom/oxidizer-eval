long long uu_expand::expand(struct_1 *a0)
{
    int v0;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x140]
    char *v3;  // [bp-0x138], Other Possible Types: unsigned long long
    int v4;  // [bp-0x138]
    unsigned long long v5;  // [bp-0x130]
    int v6;  // [bp-0x130]
    void* v7;  // [bp-0x128]
    int v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    char *v11;  // [bp-0x108], Other Possible Types: unsigned long long
    int v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xf8]
    int v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xe0]
    unsigned long long v18;  // [bp-0xd8]
    int v20;  // [bp-0xc8]
    int v21;  // [bp-0xb8]
    struct struct_0 v22[16];  // [bp-0xa8]
    unsigned long long v23[3];  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    void* v25;  // [bp-0x80]
    unsigned long long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    char *v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x60]
    unsigned long long v30[1][3];  // [bp-0x58]
    unsigned long long *v33;  // r14
    unsigned long long v34;  // r15
    unsigned long long v35;  // rdx
    unsigned long long v36[3];  // rax
    unsigned long long v37[3];  // r12
    int v38;  // xmm1
    int v39;  // xmm0
    int v40;  // xmm1
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // r12
    void* v44;  // rdx

    v30.with_capacity(0x2000, std::io::stdio::stdout());
    v33 = a0->field_20;
    v34 = a0->field_28;
    *(v23) = 0;
    v24 = 1;
    v25 = 0;
    v26 = a0.into_iter();
    v27 = v35;
    v36 = v26.next();
    if (v36)
    {
        v37 = v36;
        do
        {
            if ((char)v37[1].is_dir(v37[2]))
            {
                v16 = uucore::util_name();
                v17 = v35;
                v11 = &v16;
                v13 = <&T as core::fmt::Display>::fmt;
                v0 = &g_57b7f0;
                v2 = 2;
                v7 = 0;
                v3 = &v11;
                v5 = 1;
                std::io::stdio::_eprint(&v0);
                v16.to_vec("filesizei128", 4);
                v14 = v18;
                *((int128_t *)&v12) = *((int128_t *)&v16);
                v16.clone(v37);
                v3 = v14;
                memcpy(&v0, &v11, 16);
                v9 = v18;
                *((int128_t *)&v6) = *((int128_t *)&v16);
                v38 = (int128_t)(&v6)[8];
                *((int128_t *)&v15) = *((int128_t *)&v0);
                v18 = v3;
                v18 = v5;
                v20 = v38;
                v0.from_iter(&v16);
                uucore::mods::locale::get_message_with_args(&v16, "expand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-error-tab-size-cannot-be-zeroexpand-error-tab-size-too-largeexpand-error-tab-sizes-must-be-ascendin", 25, &v0);
                v11 = &v16;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_57b810;
                v2 = 2;
                v7 = 0;
                v3 = &v11;
                v5 = 1;
                std::io::stdio::_eprint(&v1);
                ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&v16);
                uucore::mods::error::set_exit_code(1);
            }
            else
            {
                uu_expand::open(&v16, v37[1], v37[2]);
                if (v16)
                {
                    v10 = (long long)v21;
                    v39 = *((int128_t *)&v16);
                    v40 = *((int128_t *)&v18);
                    v8 = v20;
                    v4 = v40;
                    v0 = v39;
                    while (true)
                    {
                        v41 = std::io::read_until(&v1, 10, &v23);
                        if (!v41)
                        {
                            v42 = v35;
                            if (!v42)
                            {
                                v44 = 0;
                                break;
                            }
                        }
                        else if (false)
                        {
                            break;
                        }
                        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v41, v42);
                        v43 = uu_expand::expand_line(&v23, &v30, v33, v34, a0).map_err_context();
                        if (v43)
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v1);
                            ::0x49d1d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23);
                            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v30);
                            return v43;
                        }
                    }
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v41, v44);
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v1);
                }
                else
                {
                    *((int128_t *)&v22[0]) = *((int128_t *)&v17);
                    v11 = uucore::util_name();
                    v13 = v35;
                    v28 = &v11;
                    v29 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_57b7f0;
                    v2 = 2;
                    v7 = 0;
                    v3 = &v28;
                    v5 = 1;
                    std::io::stdio::_eprint(&v0);
                    v11 = &(char)v22;
                    v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v1 = &g_57b810;
                    v2 = 2;
                    v7 = 0;
                    v3 = &v11;
                    v5 = 1;
                    std::io::stdio::_eprint(&v1);
                    uucore::mods::error::set_exit_code(1);
                    ::0x49cfc0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(*((long long *)&v22[0]), *((long long *)&v22[8]));
                }
            }
            v37 = v26.next();
        } while (v37);
    }
    ::0x49d1d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v30);
    return 0;
}
