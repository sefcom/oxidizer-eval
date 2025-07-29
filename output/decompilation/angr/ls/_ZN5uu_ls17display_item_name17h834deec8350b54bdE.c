char uu_ls::display_item_name(unsigned long a0, struct_4 *a1, struct_3 *a2, char a3, unsigned long long a4, struct_2 *a5, struct_1 *a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x2fc]
    int v1;  // [bp-0x2f8]
    unsigned long long v2;  // [bp-0x2f0]
    unsigned long long v3;  // [bp-0x2e8]
    unsigned long long v4;  // [bp-0x2e8]
    struct_0 *v5;  // [bp-0x2e0]
    unsigned int v6;  // [bp-0x2d8]
    unsigned long long v7;  // [bp-0x2d8]
    unsigned long long v8;  // [bp-0x2d0]
    char *v9;  // [bp-0x2c8]
    unsigned long long v10;  // [bp-0x2c0]
    int v11;  // [bp-0x2b8]
    unsigned long long v12;  // [bp-0x2b0]
    unsigned long long v13;  // [bp-0x2a8]
    unsigned long long v14;  // [bp-0x298]
    unsigned long long v15;  // [bp-0x288]
    int v16;  // [bp-0x278], Other Possible Types: char *, unsigned long long
    unsigned long long v17;  // [bp-0x270]
    unsigned long long v18;  // [bp-0x268]
    unsigned long long v19;  // [bp-0x260]
    struct_0 *v20;  // [bp-0x250]
    char v21;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x238]
    unsigned long long v23;  // [bp-0x230]
    char v24;  // [bp-0x228]
    unsigned long long v25;  // [bp-0x228]
    int v26;  // [bp-0x228]
    int v27;  // [bp-0x220]
    unsigned long long v28;  // [bp-0x218]
    unsigned long long v29;  // [bp-0x210]
    unsigned long long v30;  // [bp-0x208]
    char v31;  // [bp-0x200]
    int v32;  // [bp-0x178], Other Possible Types: char, unsigned long long
    unsigned long long v33;  // [bp-0x178]
    unsigned long long v34;  // [bp-0x170]
    char *v35;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x160]
    void* v37;  // [bp-0x158], Other Possible Types: unsigned long long
    char v38;  // [bp-0x150]
    char v39;  // [bp-0x50]
    int v40;  // [bp-0x48], Other Possible Types: char
    char v41;  // [bp-0x38]
    unsigned int v42;  // r12d
    unsigned long long v43;  // rax
    char v45;  // bpl
    unsigned int v46;  // r15d
    unsigned int v47;  // eax
    unsigned int *v49;  // rax
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rax
    char v53;  // al

    v42 = a2->field_fe * 0x10000 | a2->field_fc;
    v43 = uucore::features::quoting_style::locale_aware_escape_name(&(char)v1, a1->field_8, a1->field_10, v42);
    if (a2->field_f7)
    {
        v0 = (unsigned int)v43 & 0xffffff00 | 1;
        uu_ls::create_hyperlink(&v32, v2, v3, a1);
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v1);
        v43 = v35;
        v4 = v43;
        *((int128_t *)&v1) = *((int128_t *)&v32);
    }
    if (a6->field_45 != 2)
    {
        v35 = v4;
        *((int128_t *)&v32) = (int128_t)v1;
        uu_ls::colors::color_name(&v24, &v33, a1, v19, a6, 0, uu_ls::display_item_name::{{closure}}(a2, a7, v4));
        *((int128_t *)&v1) = *((int128_t *)&v24);
        v43 = v28;
        v4 = v43;
    }
    v19 = &a6->padding_0[40];
    v45 = a2->field_100;
    v0 = (unsigned int)v43 & 0xffffff00 | 1;
    if (v45 != 1 && a5->field_10)
    {
        v35 = v4;
        *((int128_t *)&v32) = (int128_t)v1;
        *((uint128_t *)&v1) = v5->field_0;
        v4 = v5->field_10;
        (char)v1.push(&v33);
        v0 = 0;
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v33);
        v0 = 0;
    }
    v46 = a2->field_ff;
    if (v46)
    {
        v47 = uu_ls::classify_file(a1, a6);
        if (v46 == 3)
        {
LABEL_52fe10:
            if (!(v47 == 0x110000))
                goto LABEL_52fe1e;
        }
        else if (v46 == 2)
        {
            if (!(v47 == 42))
                goto LABEL_52fe10;
        }
        else
        {
            if (v47 == 47)
            {
LABEL_52fe1e:
                v6 = 0;
                v33.to_vec(::0x51e6f0::core::char::methods::encode_utf8_raw(v47, &v6), a2);
                v28 = v35;
                *((int128_t *)&v26) = *((int128_t *)&v33);
                (char)v1.push((long long)(&v26)[8], v35);
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v25);
            }
        }
    }
    if (v45 == 1 && a1.file_type(a6))
    {
        v49 = a1.file_type(a6);
        if (!v49)
        {
            core::option::unwrap_failed(&g_69f8e8); /* do not return */
        }
        else if ((0xf000 & *(v49)) == 0xa000 && !a1->field_128)
        {
            std::fs::read_link(&v21, a1->field_20, a1->field_28);
            if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
            {
                v14 = v22;
                v33.clone(&a1->padding_18);
                v29 = v35;
                *((int128_t *)&v27) = *((int128_t *)&v33);
                v30 = v14;
                v31 = 0;
                v25 = 9223372036854775810;
                uucore::mods::error::set_exit_code(1);
                v16 = uucore::util_name();
                v17 = v50;
                v7 = &v16;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &v25;
                v10 = <uu_ls::LsError as core::fmt::Display>::fmt;
                v32 = &g_69f378;
                v34 = 3;
                v37 = 0;
                v35 = &v7;
                v36 = 2;
                std::io::stdio::_eprint(&v32);
                ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v25);
            }
            else
            {
                v13 = v23;
                *((int128_t *)&v11) = *((int128_t *)&v21);
                (char)v1.push(" -> ", 4);
                if (a6->field_45 == 2)
                {
                    uucore::features::quoting_style::locale_aware_escape_name(&v33, v12, v13, v42);
                    (char)v1.push(&v33);
                }
                else
                {
                    v33.clone(&(char)v11);
                    v15 = v35;
                    memcpy(&(char)v14, &v33, 16);
                    if (!(char)v12.is_absolute(v13))
                    {
                        v51 = a1->field_20.parent(a1->field_28);
                        if (v51)
                        {
                            v35 = v15;
                            *((int128_t *)&v32) = *((int128_t *)&v14);
                            v25.join(v51, a2, &v33);
                            memcpy(&(char)v14, &v25, 16);
                            v15 = v28;
                        }
                    }
                    v18 = v15;
                    *((int128_t *)&v16) = *((int128_t *)&v14);
                    v25 = 0;
                    v7 = 0x8000000000000000;
                    v33.new(&(char)v16, &v25, &v7, a2->field_f3, a2->field_fa, 0);
                    if (!a1.get_metadata(a6))
                    {
                        uu_ls::get_metadata_with_deref_opt(&v25, v37, *((long long *)&v38), v39);
                        if ((int)v25 == 2)
                        {
                            ::0x51da70::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v25);
                            std::fs::read_link(&v25, a1->field_20, a1->field_28);
                            v7.unwrap(&v25);
                            (char)v1.push(&v7);
                            goto LABEL_530297;
                        }
                        else
                        {
                            ::0x51da70::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v25);
                        }
                    }
                    uucore::features::quoting_style::locale_aware_escape_name(&v25, v12, v13, v42);
                    uu_ls::colors::color_name(&v7, &v25, a1, v19, a6, &v33, uu_ls::display_item_name::{{closure}}(a2, a7, v4));
                    (char)v1.push(&v7);
LABEL_530297:
                    ::0x51c810::core::ptr::drop_in_place<uu_ls::PathData>(&v33);
                }
                ::0x51c9a0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v11);
            }
        }
    }
    if ((a3 & a2->field_f3))
    {
        if (v45 == 4)
            v7.clone(&a1->padding_30);
        else
            uu_ls::pad_left(&v7, a1->field_38, a1->field_40, a4);
        v28 = v4;
        memcpy(&v25, &(char)v1, 16);
        v16 = &v7;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v32 = &g_69f450;
        v34 = 2;
        v37 = 0;
        v35 = &v16;
        v36 = 1;
        v40.map_or_else(&v32);
        v1 = v40;
        v4 = *((long long *)&v41);
        v35 = v28;
        memcpy(&v32, &v25, 16);
        (char)v1.push(&v32);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v7);
    }
    v20->field_10 = v4;
    v20->field_0 = (int128_t)v1;
    v53 = (char)core::ptr::drop_in_place<core::cell::lazy::LazyCell<usize,alloc::boxed::Box<dyn core::ops::function::FnOnce<()>+Output = usize>>>(a7);
    if (!(char)v0)
        return v53;
    return ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(a5);
}
