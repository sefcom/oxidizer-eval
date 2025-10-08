long long uu_install::copy_files_into_dir(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x230]
    struct_1 *v1;  // [bp-0x228], Other Possible Types: struct_3 *
    char *v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x218]
    char *v4;  // [bp-0x210]
    unsigned long long v5;  // [bp-0x208]
    struct_3 *v6;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x1f0]
    unsigned long long v9;  // [bp-0x1d0]
    char *v10;  // [bp-0x1c8]
    unsigned long long v11;  // [bp-0x1c0]
    struct_1 *v12;  // [bp-0x1b8]
    unsigned long long v13;  // [bp-0x1b0]
    void* v14;  // [bp-0x1a8]
    int v15;  // [bp-0x198]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x110]
    int v18;  // [bp-0x110]
    char *v19;  // [bp-0x108]
    unsigned long long v20;  // [bp-0x100]
    void* v21;  // [bp-0xf8]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x38]
    void* v27;  // rbx
    unsigned long v28;  // r15
    unsigned long v29;  // r14
    unsigned long long v31;  // rax
    struct_3 *v33;  // rdx, Other Possible Types: unsigned long

    if (!(char)a2.is_dir(a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v18, a2, a3);
        v16 = 6;
        return v16.new();
    }
    if (!a1)
        return 0;
    v9 = a1 * 24;
    v27 = 0;
    do
    {
        v28 = *((long long *)(8 + a0 + (char *)v27));
        v29 = *((long long *)(16 + a0 + (char *)v27));
        std::fs::metadata(&v16, v28, v29);
        v10.map_err_context(&v16, v28, v29);
        if ((int)v10 == 2)
        {
            v0 = v11;
            v1 = v12;
            uucore::mods::error::set_exit_code(v1->field_58(v11));
            v6 = uucore::util_name();
            v6 = v33;
            v2 = &v6;
            v3 = <&T as core::fmt::Display>::fmt;
            v4 = &v0;
            v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v16 = &g_5022c0;
            v17 = 3;
            v21 = 0;
            v19 = &v2;
            v20 = 2;
            std::io::stdio::_eprint(&v16);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v1);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v10);
            if ((char)v28.is_dir(v29))
            {
                v6.clone(v28, v29);
                v16 = 13;
                v20 = v8;
                *((int128_t *)&v18) = *((int128_t *)&v6);
                uucore::mods::error::set_exit_code(1);
                v0 = uucore::util_name();
                v1 = v33;
                v2 = &v0;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v16;
                v5 = <uu_install::InstallError as core::fmt::Display>::fmt;
                v10 = &g_5022c0;
                v11 = 3;
                v14 = 0;
                v12 = &v2;
                v13 = 2;
                std::io::stdio::_eprint(&v10);
                core::ptr::drop_in_place<uu_install::InstallError>(&v16);
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, a2, a3);
                v16.components(v28, v29);
                v10.next_back(&v16);
                if ((char)v10 == 10)
                    core::option::unwrap_failed(&g_502450); /* do not return */
                v25 = (long long)v15;
                memcpy(&v24, &v14, 16);
                memcpy(&v23, &v12, 16);
                memcpy(&v22, &v10, 16);
                v2.push(&v22);
                v31 = uu_install::copy(v28, v29, v3, v4, a4);
                if (!v31)
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v33);
                }
                else
                {
                    v0 = v31;
                    v1 = v33;
                    uucore::mods::error::set_exit_code(v33->field_58(v31));
                    v6 = uucore::util_name();
                    v6 = v33;
                    v10 = &v6;
                    v11 = <&T as core::fmt::Display>::fmt;
                    v12 = &v0;
                    v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v16 = &g_5022c0;
                    v17 = 3;
                    v21 = 0;
                    v19 = &v10;
                    v20 = 2;
                    std::io::stdio::_eprint(&v16);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v1);
                }
                core::ptr::drop_in_place<std::path::PathBuf>(&v2);
            }
        }
        v27 += 24;
    } while (v9 != v27);
    return 0;
}
