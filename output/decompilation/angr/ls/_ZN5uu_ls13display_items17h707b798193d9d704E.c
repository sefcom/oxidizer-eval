long long uu_ls::display_items(unsigned long long a0, unsigned long long a1, struct_0 *a2, struct_1 *a3, unsigned long long a4)
{
    char v0;  // [bp-0x199]
    unsigned long v1;  // [sp-0x198], Other Possible Types: unsigned long long
    int v2;  // [bp-0x198]
    int v3;  // [bp-0x198]
    unsigned long long v4;  // [sp-0x190]
    char *v5;  // [sp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v6;  // [bp-0x188]
    int v7;  // [sp-0x168], Other Possible Types: unsigned long long
    int v8;  // [bp-0x168]
    void* v9;  // [bp-0x168]
    unsigned long long v10;  // [sp-0x160]
    char *v11;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x150]
    int v13;  // [bp-0x150]
    int v14;  // [bp-0x150]
    void* v15;  // [sp-0x148]
    char v16;  // [bp-0x12c], Other Possible Types: unsigned int
    unsigned long v17;  // [bp-0x128], Other Possible Types: unsigned long long
    int v18;  // [bp-0x128]
    unsigned long long v19;  // [sp-0x120]
    unsigned long long v20;  // [sp-0x118]
    struct_0 *v21;  // [bp-0x110], Other Possible Types: unsigned long
    struct_0 *v22;  // [bp-0x110]
    char *v23;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x100]
    int v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xe8]
    unsigned long long v27;  // [sp-0xe0]
    unsigned long long v28;  // [sp-0xd8]
    char v29;  // [sp-0xd0]
    int v30;  // [bp-0xd0]
    int v31;  // [bp-0xd0]
    unsigned long long v32;  // [sp-0xc0]
    void* v33;  // [bp-0xb8]
    unsigned long long v34;  // [bp-0xb0]
    void* v35;  // [bp-0xa8]
    unsigned long long v36;  // [bp-0xa0]
    unsigned long long v37;  // [sp-0x98]
    unsigned long long v38;  // [bp-0x60]
    unsigned long v39;  // [bp-0x58]
    unsigned long long v40;  // [bp-0x50]
    int v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x18]
    unsigned long long v44;  // r14
    unsigned long long v45;  // r14
    char v46;  // al
    unsigned int v47;  // ecx
    unsigned int v48;  // ebx
    struct_1 *v49;  // r12
    unsigned long long v50;  // rax
    unsigned long long v51;  // r14
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    struct_2 *v55;  // rax
    unsigned long long v56;  // rbp
    struct_1 *v57;  // r12
    unsigned long long v58;  // rax
    char *v59;  // r15
    struct_0 *v60;  // 4096
    struct_0 *v61;  // r13
    unsigned long long v62;  // rax
    void* v64;  // r15
    int v65;  // ymm0
    uint256_t v66;  // ymm0
    unsigned long long v67;  // rax
    unsigned long long v68;  // r15
    unsigned int v69;  // eax
    uint256_t v70;  // ymm0
    unsigned short v71;  // r14w
    uint256_t v72;  // ymm0
    unsigned long long v73;  // rbx
    unsigned long long v74;  // rax
    unsigned long long v75;  // r15
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax

    v42 = v44;
    v28 = a4;
    v45 = a1 * 304 + a0;
    v36 = a0;
    v37 = v45;
    v46 = v36.any(a2);
    v47 = a2->field_100;
    v22 = a2;
    v0 = v46;
    if (v47 == 1)
    {
        uu_ls::calculate_padding_collection(&v36, a0, a1, a2, a3);
        v17 = a0;
        v19 = v45;
        v27 = v36;
        v26 = v38;
        v48 = v0;
        v16 = a2->field_f2 | a2->field_f1;
        v49 = a3;
        while (true)
        {
            v50 = v17.next();
            if (!v50)
                break;
            v51 = v50;
            v21 = v22;
            if (((a2->field_f2 | a2->field_f1) & 1))
            {
                uu_ls::display_additional_leading_info(&v7, v51, v27, v26, v22, v49);
                if (v7 == 0x8000000000000000)
                    return v10;
                v1 = v7;
                v4 = v10;
                v5 = v11;
                v23 = &v1;
                v24 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_4259a0;
                v10 = 1;
                v15 = 0;
                v11 = &v23;
                v12 = 1;
                v52 = v49.write_fmt(&v7);
                if (v52)
                {
                    v54 = v52.from();
                    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                    return v54;
                }
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                v21 = v22;
            }
            v53 = uu_ls::display_item_long(v51, &v36, v21, v49, v28, v48);
            if (v53)
                return v53;
        }
    }
    else
    {
        v16 = v47;
        if (a2->field_f3)
        {
            v36 = a0;
            v37 = v45;
            v26 = 1;
            v56 = 1;
            if (v36.next())
            {
                do
                {
                    v56 = ::0x51bc80::core::cmp::max_by(v55->field_40, v56);
                    v55 = v36.next();
                } while (v55);
            }
        }
        else
        {
            v26 = 0;
        }
        v57 = a3;
        uu_ls::calculate_padding_collection(&v36, a0, a1, a2, v57);
        if (v57->field_45 != 2)
        {
            (char)v1.apply_normal(&v57->padding_0[40]);
            v23 = &(char)v1;
            v24 = <alloc::string::String as core::fmt::Display>::fmt;
            v9 = &g_4259a0;
            v10 = 1;
            v15 = 0;
            v11 = &v23;
            v12 = 1;
            v58 = v57.write_fmt(&v9);
            if (v58)
            {
                v54 = v58.from();
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                return v54;
            }
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        }
        v33 = 0;
        v34 = 8;
        v35 = 0;
        v23 = a0;
        v24 = v45;
        v28 = v36;
        v27 = v38;
        v59 = &v9;
        v60 = a2;
        while (true)
        {
            v61 = v60;
            v62 = v23.next();
            if (!v62)
                break;
            uu_ls::display_additional_leading_info(v59, v62, v28, v27, v61, v57);
            v59 = v59;
            if (v9 == 0x8000000000000000)
            {
                ::0x51d590::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v33);
                return v10;
            }
            v1 = v9;
            v4 = v10;
            v5 = v11;
            v9 = 0;
            v10 = alloc::boxed::Box<T>::new();
            v11 = &g_69f4d8;
            v57 = a3;
            uu_ls::display_item_name(&v41, v62, v22, v26, v56, &v1, v57, v59);
            v33.push(&v41);
            v60 = v22;
        }
        v23.into_iter(&v33);
        switch (v16)
        {
        case 0:
            memcpy(&v11, &v25, 16);
            *((int128_t *)&v8) = *((int128_t *)&v23);
            v53 = uu_ls::display_grid(&v9, *((int *)&v61->field_ec), 1, v57, v0, v61->field_e0);
            if (v53)
                return v53;
            break;
        case 3:
            memcpy(&v11, &v25, 16);
            *((int128_t *)&v7) = *((int128_t *)&v23);
            v53 = uu_ls::display_grid(&v9, *((int *)&v61->field_ec), 0, v57, v0, v61->field_e0);
            if (v53)
                return v53;
            break;
        case 4:
            (char)v17.next(&v23);
            if (v17 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<std::env::VarError>(&(char)v17);
                v64 = 0;
            }
            else
            {
                v66 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v17);
                memcpy(&v1, &(char)v17, 16);
                v5 = v20;
                v67 = uu_ls::write_os_str(v57, v4, v20);
                if (v67)
                {
                    v68 = v67.from();
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v1);
                    ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v23);
                    return v68;
                }
                v9.to_string_lossy(v4, v6);
                v69 = ansi_width::ansi_width(v10, v11);
                ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v9);
                ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v1);
                v64 = v69 + 2;
            }
            v70 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v23);
            v5 = v25;
            *((int128_t *)&v2) = *((int128_t *)&v23);
            (char)v30.next(&v1);
            if (*((long long *)&v29) != 0x8000000000000000)
            {
                v71 = *((short *)&v61->field_ec);
                do
                {
                    v20 = v32;
                    v72 = v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
                    memcpy(&(char)v17, &(char)v30, 16);
                    v9.to_string_lossy(v19, a2);
                    v73 = ansi_width::ansi_width(v10, v11);
                    ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v9);
                    if (v71 && ((unsigned short)v64 + (unsigned short)v73 + 1) * 0x1000000000000 > v71 * 0x1000000000000)
                    {
                        v9 = &g_69f4b8;
                        v10 = 1;
                        v11 = 8;
                        v70 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v13) = 0;
                        v74 = a3.write_fmt(&v9);
                        if (!(!v74))
                            goto LABEL_52e34b;
                        v64 = (unsigned int)v73 + 2;
                    }
                    else
                    {
                        v9 = &g_69f4c8;
                        v10 = 1;
                        v11 = 8;
                        v70 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v14) = 0;
                        v74 = a3.write_fmt(&v9);
                        if (!(!v74))
                            goto LABEL_52e34b;
                        v64 = (unsigned int)v64 + (unsigned int)v73 + 2;
                    }
                    v74 = uu_ls::write_os_str(a3, v19, v20);
                    if (v74)
                    {
LABEL_52e34b:
                        v75 = v74.from();
                        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v17);
                        ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v1);
                        return v75;
                    }
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v17);
                    (char)v30.next(&v1);
                } while (*((long long *)&v29) != 0x8000000000000000);
            }
            ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v1);
            if ((unsigned short)v64)
            {
                v1 = &v22[1].padding_0[1];
                v4 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                v7 = &g_4259a0;
                v10 = 1;
                v15 = 0;
                v11 = &v1;
                v12 = 1;
                v76 = a3.write_fmt(&v7);
                if (v76)
                    return v76.from();
            }
            break;
        default:
            v5 = v25;
            *((int128_t *)&v3) = *((int128_t *)&v23);
            v29.next(&v1);
            if ((long long)v30 != 0x8000000000000000)
            {
                v21 = &v22[1].padding_0[1];
                do
                {
                    v18 = v31;
                    v20 = v32;
                    v77 = uu_ls::write_os_str(a3, v19, v32);
                    if (v77)
                    {
                        v79 = v77.from();
                        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v17);
                        ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v1);
                        return v79;
                    }
                    v39 = v21;
                    v40 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                    v7 = &g_4259a0;
                    v10 = 1;
                    v15 = 0;
                    v11 = &v39;
                    v12 = 1;
                    v78 = a3.write_fmt(&v7);
                    if (v78)
                    {
                        v79 = v78.from();
                        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v17);
                        ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v1);
                        return v79;
                    }
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v17);
                    v29.next(&v1);
                } while ((long long)v30 != 0x8000000000000000);
            }
            ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v1);
            break;
        }
    }
    return 0;
}
