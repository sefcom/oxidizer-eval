long long uu_ls::display_items(void* a0, unsigned long long a1, void* a2, struct_0 *a3, unsigned long long a4)
{
    char v0;  // [bp-0x179]
    void* v1;  // [bp-0x170], Other Possible Types: unsigned long
    int v2;  // [bp-0x168], Other Possible Types: void*
    int v3;  // [bp-0x168], Other Possible Types: char
    void* v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    char *v6;  // [sp-0x158], Other Possible Types: unsigned long long
    int v7;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x150]
    int v9;  // [bp-0x150]
    void* v10;  // [sp-0x148]
    void* v11;  // [bp-0x138], Other Possible Types: unsigned long
    int v12;  // [bp-0x138]
    int v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    char *v15;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x110]
    char *v17;  // [bp-0x108]
    unsigned long long v18;  // [sp-0x100]
    char v19;  // [bp-0xf8]
    void* v20;  // [bp-0xe8], Other Possible Types: unsigned int
    unsigned int v21;  // [bp-0xe8]
    char v22;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [sp-0xd8]
    unsigned long long v25;  // [sp-0xd0]
    unsigned long long v26;  // [bp-0xc8]
    void* v27;  // [bp-0xc0]
    unsigned long long v28;  // [bp-0xb8]
    void* v29;  // [bp-0xb0]
    unsigned long long v30;  // [bp-0xa8]
    unsigned long v31;  // [bp-0xa0]
    unsigned long long v32;  // [bp-0x98]
    void* v33;  // [bp-0x90]
    unsigned long long v34;  // [bp-0x88]
    unsigned long v35;  // [bp-0x50], Other Possible Types: unsigned long long
    char v36;  // [bp-0x48]
    unsigned long long v38;  // r15
    unsigned long long v39;  // rax
    unsigned int v40;  // ecx
    char *v41;  // rbp
    void* v42;  // 4096
    void* v43;  // rbx
    void* v44;  // r13
    void* v46;  // rbx
    void* v48;  // r13
    unsigned long long v49;  // rax
    void* v51;  // r13
    unsigned long long v52;  // rax
    unsigned long long v55;  // rax
    void* v56;  // r12
    unsigned long long v57;  // rbp
    unsigned long long v58;  // rax
    unsigned long long v60;  // rbx
    void* v61;  // rbx
    void* v63;  // rbx
    void* v65;  // r15
    unsigned long long v66;  // rax
    unsigned long long v67;  // r12
    unsigned short v68;  // r14w
    unsigned long long v69;  // rbx
    unsigned long long v70;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // r12
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax

    v16 = a4;
    v38 = a1 * 304;
    v33 = a0;
    v26 = a0 + v38;
    v34 = v26;
    v39 = v33.any(a2);
    v40 = (char)a2[0x100];
    v1 = a2;
    if (v40 == 1)
    {
        uu_ls::calculate_padding_collection(&v33, a0, a1, a2, a3);
        v20 = v33;
        v30 = v35;
        v41 = &v3;
        v42 = a2;
        while (true)
        {
            v43 = a0;
            v44 = v42;
            if (v43 == v26)
            {
                v46 = v43;
                if (v46 == v26)
                    break;
            }
            else
            {
                v46 = v43 + 304;
                if (v43 == v26)
                    break;
            }
            v48 = v44;
            if ((((char)a2[242] | (char)a2[241]) & 1))
            {
                uu_ls::display_additional_leading_info(v41, v43, (unsigned int)v20, v30, v44, a3);
                if (v2 == 0x8000000000000000)
                    return v5;
                v11 = v2;
                v14 = v5;
                v15 = v6;
                v17 = &v11;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = &g_4cf290;
                v5 = 1;
                v10 = 0;
                v6 = &v17;
                v7 = 1;
                v49 = a3.write_fmt(v41);
                if (v49)
                {
                    v55 = v49.from();
                    core::ptr::drop_in_place<alloc::string::String>(&v11);
                    return v55;
                }
                core::ptr::drop_in_place<alloc::string::String>(&v11);
                v48 = v1;
            }
            v51 = v48;
            v52 = uu_ls::display_item_long(v43, &v33, v51, a3, v16, v39 & 4294967295);
            v41 = &v3;
            v42 = v51;
            a0 = v46;
            if (v52)
                return v52;
        }
    }
    else
    {
        v0 = v39;
        v20 = v40;
        if ((char)a2[243] != 1)
        {
            v16 = 0;
        }
        else if (a1)
        {
            v16 = 1;
            v56 = 0;
            v57 = 1;
            do
            {
                v57 = *((long long *)(a0 + v56 + 64)).max(v57);
                v56 += 304;
            } while (v38 != v56);
        }
        else
        {
            v57 = 1;
            v16 = 1;
        }
        uu_ls::calculate_padding_collection(&v33, a0, a1, v1, a3);
        if (a3->field_85 != 2)
        {
            (char)v11.apply_normal(&a3->padding_0[104]);
            v17 = &(char)v11;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &g_4cf290;
            v5 = 1;
            v10 = 0;
            v6 = &v17;
            v8 = 1;
            v58 = a3.write_fmt(&v4);
            if (v58)
            {
                v55 = v58.from();
                core::ptr::drop_in_place<alloc::string::String>(&v11);
                return v55;
            }
            core::ptr::drop_in_place<alloc::string::String>(&(char)v11);
        }
        v27 = 0;
        v28 = 8;
        v29 = 0;
        while (true)
        {
            v61 = a0;
            if (v61 == v26)
            {
                v63 = v61;
                if (v63 == v26)
                    break;
            }
            else
            {
                v63 = v61 + 304;
                if (v61 == v26)
                    break;
            }
            uu_ls::display_additional_leading_info(&v4, v61, (unsigned int)v33, v35, v1, a3);
            if (v4 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v27);
                return v5;
            }
            v11 = v4;
            v14 = v5;
            v15 = v6;
            v4 = 0;
            v5 = alloc::boxed::Box<T>::new();
            v6 = &g_686c80;
            uu_ls::display_item_name(&v36, v61, v1, v16, v57, &v11, a3, &v4);
            v27.push(&v36);
            a0 = v63;
        }
        v17.into_iter(&v27);
        switch (v21)
        {
        case 0:
            memcpy(&v6, &v19, 16);
            *((int128_t *)&v3) = *((int128_t *)&v17);
            v78 = uu_ls::display_grid(&v4, (int)v1[236], 1, a3, v0, (long long)v1[224]);
            if (v78)
                return v78;
            break;
        case 3:
            memcpy(&v6, &v19, 16);
            *((int128_t *)&v2) = *((int128_t *)&v17);
            v77 = uu_ls::display_grid(&v4, (int)v1[236], 0, a3, v0, (long long)v1[224]);
            if (v77)
                return v77;
            break;
        case 4:
            v11.next(&v17);
            if (v11 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<std::env::VarError>(0x8000000000000000, v14);
                v65 = 0;
            }
            else
            {
                v66 = uu_ls::write_os_str(a3, v14, v15);
                if (v66)
                {
                    v60 = v66.from();
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v14);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v17);
                    return v60;
                }
                v4.from_utf8_lossy(v14, v15);
                v65 = (int)ansi_width::ansi_width(v5, v6) + 2;
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v14);
            }
            memcpy(&v15, &v19, 16);
            *((int128_t *)&v12) = *((int128_t *)&v17);
            v22.next(&v11);
            v67 = v22;
            if (v22 != 0x8000000000000000)
            {
                v68 = (short)v1[236];
                do
                {
                    v4.from_utf8_lossy(v24, v25);
                    v69 = ansi_width::ansi_width(v5, v6);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
                    if (v68 && ((unsigned short)v65 + (unsigned short)v69 + 1) * 0x1000000000000 > v68 * 0x1000000000000)
                    {
                        v4 = &g_686c60;
                        v5 = 1;
                        v6 = 8;
                        *((uint128_t *)&v7) = 0;
                        v70 = a3.write_fmt(&v4);
                        if (v70)
                            goto LABEL_59cd94;
                        v65 = (unsigned int)v69 + 2;
                    }
                    else
                    {
                        v4 = &g_686c70;
                        v5 = 1;
                        v6 = 8;
                        *((uint128_t *)&v9) = 0;
                        v70 = a3.write_fmt(&v4);
                        if (v70)
                            goto LABEL_59cd94;
                        v65 = (unsigned int)v65 + (unsigned int)v69 + 2;
                    }
                    v70 = uu_ls::write_os_str(a3, v24, v25);
                    if (v70)
                    {
LABEL_59cd94:
                        v60 = v70.from();
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v67, v24);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v11);
                        return v60;
                    }
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v67, v24);
                    v22.next(&v11);
                    v67 = v22;
                } while (v22 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v11);
            if ((unsigned short)v65)
            {
                v11 = v1 + 258;
                v14 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                v2 = &g_4cf290;
                v5 = 1;
                v10 = 0;
                v6 = &v11;
                v7 = 1;
                v72 = a3.write_fmt(&v2);
                if (v72)
                    return v72.from();
            }
            break;
        default:
            memcpy(&v15, &v19, 16);
            *((int128_t *)&v13) = *((int128_t *)&v17);
            v22.next(&v11);
            if (v22 != 0x8000000000000000)
            {
                v1 += 258;
                v23 = v22;
                do
                {
                    v73 = v23;
                    v74 = uu_ls::write_os_str(a3, v24, v25);
                    if (v74)
                    {
                        v76 = v74.from();
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v73, v24);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v11);
                        return v76;
                    }
                    v31 = v1;
                    v32 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                    v2 = &g_4cf290;
                    v5 = 1;
                    v10 = 0;
                    v6 = &v31;
                    v7 = 1;
                    v75 = a3.write_fmt(&v2);
                    if (v75)
                    {
                        v76 = v75.from();
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v73, v24);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v11);
                        return v76;
                    }
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v73, v24);
                    v22.next(&v11);
                    v23 = v22;
                } while (v23 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v11);
            break;
        }
    }
    return 0;
}
