long long uu_mv::handle_two_paths(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char *v0;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x188]
    char *v2;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x178], Other Possible Types: char
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    char *v6;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    char v9;  // [bp-0x140]
    unsigned long long v10;  // [bp-0x138]
    char *v11;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x128]
    char *v13;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    char *v17;  // [bp-0x100], Other Possible Types: unsigned long long
    int v18;  // [bp-0xf8], Other Possible Types: unsigned long long
    void* v19;  // [bp-0xf0]
    unsigned long long v20;  // [bp-0xe0]
    char v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    unsigned long long v25;  // rax
    unsigned int v26;  // eax
    unsigned long long v27;  // rbp
    unsigned long long v28;  // r12
    unsigned long v29;  // r15
    char v30;  // al
    unsigned long long v31;  // r12
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // r15
    unsigned int v35;  // eax
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v41;  // rax

    if (a4->field_36 == 1 && (char)uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, a4->field_8, a4->field_10))
    {
        v6 = 1;
        v7 = a2;
        v8 = a3;
        v9 = 1;
        v0 = 1;
        v1 = a0;
        v2 = a1;
        v3 = 1;
        v11 = &v6;
        v12 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = &v0;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v15 = &g_541620;
        v16 = 3;
        v19 = 0;
        v17 = &v11;
        v18 = 2;
        v23.map_or_else(&v15);
        v25 = 0.new(&v23);
        return v25.from();
    }
    v5 = a3;
    std::fs::symlink_metadata(&(char)v15, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v15);
    if ((int)v15 != 2)
    {
        v27 = a2;
        v28 = v5;
        v4 = a0;
        v10 = a1;
        v29 = (unsigned int)a2.is_dir(v28);
        v30 = a0.is_dir(a1);
        if (v28)
        {
            if (*((char *)(v27 + v28 - 1)) == 47)
            {
                goto LABEL_48abf9;
            }
            else
            {
                if (v30 || (char)v29 || *((char *)(v27 + v28 - 1)) != 92 || a4->field_30 || a4->field_37 == 2)
                    goto LABEL_48abf9;
                v0 = 1;
                v1 = v27;
                v2 = v28;
                v3 = 1;
                (char)v16.spec_to_string(&v0);
                v15 = 8;
            }
        }
        else
        {
LABEL_48abf9:
            v31 = v27;
            v32 = uu_mv::assert_not_same_file(v4, v10, v27, v28, v29 & 4294967295, a4->field_30, a4->field_36);
            if (v32)
                return v32;
            if ((char)v29)
            {
                if ((a4->field_30 & 1))
                {
                    if ((char)v4.is_dir(v10))
                    {
                        v15 = v4;
                        v16 = v10;
                        v17 = v31;
                        v18 = v2;
                        return uu_mv::rename(v4, v10, v31, v2, a4, 0).map_err_context(&v15);
                    }
                    v0 = 1;
                    v1 = v31;
                    v2 = v5;
                    v3 = 1;
                    (char)v16.spec_to_string(&v0);
                    v15 = 4;
                }
                else
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v15, v4, v10);
                    v33 = uu_mv::move_files_into_dir(&(char)v15, 1, v31, v5, a4);
                    core::ptr::drop_in_place<(std::path::PathBuf,())>(v15, v16);
                    return v33;
                }
            }
            else
            {
                std::fs::metadata(&(char)v15, v31, v5);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v15);
                v34 = v10;
                if ((int)v15 == 2 || !(char)v4.is_dir(v34))
                {
                    v41 = uu_mv::rename(v4, v34, v31, v5, a4, 0);
                    return (!v41 ? 0 : uu_mv::handle_two_paths::{{closure}}(v41));
                }
                v35 = a4->field_35;
                if (!v35)
                    return 0;
                v36 = v5;
                if (v35 == 1)
                {
                    v0 = uucore::util_name();
                    v1 = v37;
                    v6 = &v0;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v15 = &g_541650;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v6;
                    v18 = 1;
                    std::io::stdio::_eprint(&v15);
                    v0 = 1;
                    v1 = v31;
                    v2 = v36;
                    v3 = 1;
                    v6 = &v0;
                    v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v15 = &g_541670;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v6;
                    v18 = 1;
                    std::io::stdio::_eprint(&v15);
                    v15 = &g_541690;
                    v16 = 1;
                    v17 = 8;
                    *((uint128_t *)&v18) = 0;
                    std::io::stdio::_eprint(&v15);
                    v15 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                    v38 = v15.flush();
                    if (v38)
                    {
                        v39 = uu_mv::handle_two_paths::{{closure}}(v38);
                        if (v39)
                        {
                            v11 = v39;
                            v12 = &g_541810;
                            uucore::mods::error::set_exit_code((unsigned int)v39.code());
                            v6 = uucore::util_name();
                            v7 = v37;
                            v0 = &v6;
                            v1 = <&T as core::fmt::Display>::fmt;
                            v2 = &v11;
                            v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v15 = &g_5416a0;
                            v16 = 3;
                            v19 = 0;
                            v17 = &v0;
                            v18 = 2;
                            std::io::stdio::_eprint(&v15);
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v11, &g_541810);
                        }
                    }
                    if (!(char)uucore::read_yes())
                    {
                        v15.to_vec(1, 0);
                        v25 = 40._new(v15.new(), &g_541778);
                        return v25.from();
                    }
                }
                v6 = 1;
                v7 = v4;
                v8 = v34;
                v9 = 1;
                v21.spec_to_string(&v6);
                v0 = 1;
                v1 = v31;
                v2 = v36;
                v3 = 1;
                v11.spec_to_string(&v0);
                v18 = v22;
                memcpy(&v16, &v21, 16);
                memcpy(&v18, &v11, 16);
                v20 = v13;
                v15 = 5;
            }
        }
    }
    else if (a1)
    {
        v26 = *((char *)(a0 + a1 - 1));
        if (v26 != 47 && v26 != 92)
            goto LABEL_48ab60;
        v0 = 1;
        v1 = a0;
        v2 = a1;
        v3 = 1;
        (char)v16.spec_to_string(&v0);
        v15 = 1;
    }
    else
    {
LABEL_48ab60:
        v0 = 1;
        v1 = a0;
        v2 = a1;
        v3 = 1;
        (char)v16.spec_to_string(&v0);
        v15 = 0;
    }
    return v15.new();
}
