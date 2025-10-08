void uu_ls::display_item_name(unsigned long a0, struct_4 *a1, char a2[257], unsigned long long a3, unsigned int a4, struct_3 *a5, struct_0 *a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x2fc]
    int v1;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v2;  // [bp-0x2f0]
    unsigned long long v3;  // [bp-0x2e8]
    unsigned long v4;  // [bp-0x2e8]
    struct_1 *v5;  // [bp-0x2e0]
    char *v6;  // [bp-0x2d8], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v7;  // [bp-0x2d0]
    char *v8;  // [bp-0x2c8]
    unsigned long long v9;  // [bp-0x2c0]
    int v10;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x2b0]
    unsigned long long v12;  // [bp-0x2a8]
    unsigned long long v13;  // [bp-0x298]
    unsigned long long v14;  // [bp-0x290]
    int v15;  // [bp-0x288], Other Possible Types: char
    unsigned long long v16;  // [bp-0x278]
    unsigned long long v17;  // [bp-0x268]
    unsigned long long v18;  // [bp-0x258]
    struct_2 *v19;  // [bp-0x250]
    unsigned long long v20;  // [bp-0x248]
    char v21;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x238]
    unsigned long long v23;  // [bp-0x230]
    int v24;  // [bp-0x228]
    unsigned long long v25;  // [bp-0x228]
    void* v26;  // [bp-0x228]
    int v27;  // [bp-0x220]
    unsigned long long v28;  // [bp-0x218]
    unsigned long long v29;  // [bp-0x210]
    unsigned long long v30;  // [bp-0x208]
    char v31;  // [bp-0x200]
    char v32;  // [bp-0x178], Other Possible Types: unsigned long long
    int v33;  // [bp-0x178]
    unsigned long long v34;  // [bp-0x170]
    char *v35;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x160]
    void* v37;  // [bp-0x158], Other Possible Types: unsigned long long
    char v38;  // [bp-0x150]
    char v39;  // [bp-0x50]
    char v40;  // [bp-0x48]
    char v41;  // [bp-0x38]
    unsigned long v42;  // r12
    unsigned int v43;  // eax
    unsigned long long v44;  // rax
    char v46;  // bl
    unsigned int v47;  // r15d
    unsigned int v48;  // eax
    unsigned int *v50;  // rax
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rax

    v18 = a3;
    v42 = &a2[252];
    v43 = uucore::features::quoting_style::escape_name(&(char)v1, a1->field_8, a1->field_10, v42);
    if (a2[247])
    {
        v0 = v43 & 0xffffff00 | 1;
        uu_ls::create_hyperlink(&v32, v2, v3, a1);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(*((long long *)&v1), v2);
        v4 = v35;
        *((int128_t *)&v1) = *((int128_t *)&v32);
    }
    v44 = &a6->padding_0[104];
    v14 = v44;
    if (a6->field_85 != 2)
    {
        uu_ls::colors::color_name((unsigned int)&(unsigned long long)v33, &(char)v1, a1, v14, a6, NULL, uu_ls::display_item_name::{{closure}}(a2, a7, v4));
        v44 = v35;
        v4 = v44;
        *((int128_t *)&v1) = *((int128_t *)&(unsigned long long)v33);
    }
    v46 = a2[0x100];
    v0 = (unsigned int)v44 & 0xffffff00 | 1;
    if (v46 != 1 && a5->field_10)
    {
        v35 = v4;
        *((int128_t *)&v33) = (int128_t)v1;
        *((uint128_t *)&v1) = v5->field_0;
        v4 = v5->field_10;
        (char)v1.push(&(unsigned long long)v33);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v32, v34);
        v0 = 0;
    }
    v47 = a2[255];
    if (v47)
    {
        v48 = uu_ls::classify_file(a1, a6);
        if (v47 != 1)
        {
            if ((v47 != 2 || v48 != 42) && v48 != 0x110000)
                goto LABEL_59e74e;
        }
        else
        {
            if (v48 == 47)
            {
LABEL_59e74e:
                v6 = 0;
                (unsigned long long)v33.to_vec(::0x57d660::core::char::methods::encode_utf8_raw(v48, &v6), a2);
                v28 = v35;
                *((int128_t *)&v24) = (int128_t)v33;
                (char)v1.push((long long)(&v24)[8], v35);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v26);
                if (v46 == 1)
                {
LABEL_59e7ba:
                    if (a1.file_type(a6))
                    {
                        v50 = a1.file_type(a6);
                        if (!v50)
                            core::option::unwrap_failed(&g_686d40); /* do not return */
                        if ((0xf000 & *(v50)) == 0xa000 && a1->field_128 != 1)
                        {
                            std::fs::read_link(&v21, a1->field_20, a1->field_28);
                            if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
                            {
                                v20 = v22;
                                (unsigned long long)v33.clone(a1->field_20, a1->field_28);
                                v29 = v35;
                                *((int128_t *)&v27) = (int128_t)v33;
                                v30 = v20;
                                v31 = 0;
                                v25 = 9223372036854775810;
                                uucore::mods::error::set_exit_code(1);
                                v10 = uucore::util_name();
                                v11 = v51;
                                v6 = &v10;
                                v7 = <&T as core::fmt::Display>::fmt;
                                v8 = &v25;
                                v9 = <uu_ls::LsError as core::fmt::Display>::fmt;
                                v32 = &g_686b10;
                                v34 = 3;
                                v37 = 0;
                                v35 = &v6;
                                v36 = 2;
                                std::io::stdio::_eprint(&v32);
                                core::ptr::drop_in_place<uu_ls::LsError>(&v25);
                            }
                            else
                            {
                                v12 = v23;
                                *((int128_t *)&v10) = *((int128_t *)&v21);
                                (char)v1.push(" -> ", 4);
                                if (a6->field_85 == 2)
                                {
                                    uucore::features::quoting_style::escape_name(&(unsigned long long)v33, v11, v12, v42);
                                    (char)v1.push(&(unsigned long long)v33);
                                }
                                else
                                {
                                    v13 = v11;
                                    (unsigned long long)v33.clone(v11, v12);
                                    v16 = v35;
                                    memcpy(&v15, &v32, 16);
                                    v17 = v12;
                                    if (!(char)v13.is_absolute(v17))
                                    {
                                        v52 = a1->field_20.parent(a1->field_28);
                                        if (v52)
                                        {
                                            (unsigned long long)v33.join(v52, a2, &v15);
                                            v16 = v35;
                                            memcpy(&v15, &v32, 16);
                                        }
                                    }
                                    v26 = 0;
                                    v6 = 0x8000000000000000;
                                    (unsigned long long)v33.new(&v15, &v26, &v6, a2[243], a2[250], 0);
                                    if (!a1.get_metadata(a6))
                                    {
                                        uu_ls::get_metadata_with_deref_opt(&v26, v37, *((long long *)&v38), v39);
                                        if ((int)v26 == 2)
                                        {
                                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
                                            std::fs::read_link(&v26, a1->field_20, a1->field_28);
                                            v6.unwrap(&v26);
                                            (char)v1.push(&v6);
                                            goto LABEL_59ed0c;
                                        }
                                        else
                                        {
                                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
                                        }
                                    }
                                    uucore::features::quoting_style::escape_name(&v26, v13, v17, v42);
                                    uu_ls::colors::color_name((unsigned int)&v6, &v26, a1, v14, a6, &(unsigned long long)v33, uu_ls::display_item_name::{{closure}}(a2, a7, v4));
                                    (char)v1.push(&v6);
LABEL_59ed0c:
                                    core::ptr::drop_in_place<uu_ls::PathData>(&(unsigned long long)v33);
                                }
                                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v10);
                                v3 = v4;
                                if (a2[243])
                                {
LABEL_59e946:
                                    v3 = v4;
                                    if (((char)v18 & 1))
                                    {
                                        if (v46 == 4)
                                            (char)v26.clone(&a1->padding_30);
                                        else
                                            uu_ls::pad_left(&(char)v26, a1->field_38, a1->field_40, a4);
                                        v6 = &(char)v26;
                                        v7 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v32 = &g_686678;
                                        v34 = 2;
                                        v37 = 0;
                                        v35 = &v6;
                                        v36 = 1;
                                        v40.map_or_else(&v32);
                                        memcpy(&(char)v1, &v40, 16);
                                        v3 = *((long long *)&v41);
                                        v32 = (long long)v1;
                                        v34 = v2;
                                        v35 = v4;
                                        (char)v1.push(&v32);
                                        core::ptr::drop_in_place<alloc::string::String>(&(char)v26);
                                    }
                                }
LABEL_59ea5b:
                                v19->field_10 = v3;
                                v19->field_0 = (int128_t)v1;
                                core::ptr::drop_in_place<core::cell::lazy::LazyCell<usize,alloc::boxed::Box<dyn core::ops::function::FnOnce<()>+Output = usize>>>(a7);
                                if (!(char)v0)
                                    return;
                                core::ptr::drop_in_place<alloc::string::String>(a5);
                                return;
                            }
                        }
                    }
                }
LABEL_59e938:
                v3 = v4;
                if (a2[243])
                    goto LABEL_59e946;
                goto LABEL_59ea5b;
            }
        }
    }
    if (v46 == 1)
        goto LABEL_59e7ba;
    goto LABEL_59e938;
}
