void uu_cp::copydir::copy_direntry(struct_4 *a0, unsigned long long a1, struct_2 *a2, struct_5 *a3, unsigned long a4, unsigned int a5, unsigned long long a6, unsigned long long a7)
{
    int v0;  // [bp-0x248]
    unsigned long long v1;  // [bp-0x240]
    unsigned long v2;  // [bp-0x238]
    unsigned int v3;  // [bp-0x22c]
    int v4;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x218]
    int v6;  // [bp-0x208]
    unsigned long v7;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0x1f8]
    char *v9;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x1e0]
    char *v11;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v12;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1c0]
    int v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b0]
    unsigned long v17;  // [bp-0x1a8]
    int v18;  // [bp-0x198], Other Possible Types: char *, char
    unsigned long long v19;  // [bp-0x190]
    char *v20;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x180]
    unsigned long long v22;  // [bp-0x178]
    unsigned long long v23;  // [bp-0x170]
    unsigned long long v24;  // [bp-0x168]
    struct_1 *v25;  // [bp-0x160], Other Possible Types: char
    char v26;  // [bp-0x150]
    char v27;  // [bp-0x148], Other Possible Types: unsigned long long
    int v28;  // [bp-0x148]
    unsigned long long v29;  // [bp-0x140]
    int v30;  // [bp-0x138], Other Possible Types: char *, unsigned long
    unsigned long long v31;  // [bp-0x130]
    int v32;  // [bp-0x128], Other Possible Types: void*, unsigned long long
    char v33;  // [bp-0x120]
    unsigned long long v34;  // [bp-0x118]
    char *v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    int v37;  // [bp-0x80], Other Possible Types: char
    int v38;  // [bp-0x70]
    int v39;  // [bp-0x60]
    unsigned long long v40;  // [bp-0x50]
    char v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x38]
    unsigned long v43;  // rsi
    int v44;  // xmm0
    int v45;  // xmm1
    struct_3 *v46;  // r13
    unsigned int v47;  // eax
    int v48;  // xmm0
    struct_1 *v49;  // rdx
    int v51;  // xmm0
    int v52;  // xmm1

    v3 = a5;
    v43 = a2->field_10;
    v2 = a2->field_10;
    *((uint128_t *)&v0) = a2->field_0;
    v17 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v15) = *((int128_t *)&(&a2->field_10)[1]);
    v8 = a2->field_30;
    *((int128_t *)&v6) = *((int128_t *)&a2->field_28);
    if ((char)v1.is_symlink(v43) && !a3->field_59)
    {
        uu_cp::copy_link(a0, v1, v2, v7, v8, a4);
        goto LABEL_4e4eec;
    }
    if ((char)v1.is_dir(v2))
    {
        std::fs::metadata(&v27, v7, v8);
        ::0x4e3960::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v27, v29);
        if (!((unsigned int)v27 == 2))
            goto LABEL_4e49b7;
        if (*((char *)&a2->field_30 + 8))
        {
            uucore::mods::locale::get_message(&v27, "cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 54);
            *((unsigned long *)&a0->field_8[16]) = v30;
            *((int128_t *)&a0->field_8[0]) = *((int128_t *)&v27);
            *((unsigned long long *)&a0->field_0) = 9223372036854775811;
            goto LABEL_4e4eec;
        }
        else
        {
            uu_cp::copydir::build_dir(&v27, &(char)v6, 0, *((int *)&a3->field_48), a3->padding_49[1], v1, v2);
            if (v27 == 9223372036854775820)
            {
                if (a3->field_60)
                {
                    uu_cp::context_for(&v37, v16, v17, v7, v8);
                    v9 = &v37;
                    v10 = <alloc::string::String as core::fmt::Display>::fmt;
                    v27 = &g_5fbb18;
                    v29 = 2;
                    v32 = 0;
                    v30 = &v9;
                    v31 = 1;
                    std::io::stdio::_print(&v27);
                    ::0x4e35a0::core::ptr::drop_in_place<alloc::string::String>(&v37);
                }
                *((unsigned long long *)&a0->field_0) = 9223372036854775820;
                goto LABEL_4e4eec;
            }
            else
            {
                v44 = *((int128_t *)&v29);
                v45 = *((int128_t *)&v31);
                *((int128_t *)&a0->field_18[0]) = *((int128_t *)&v33);
                *((void*)&a0->field_8[16]) = v45;
                *((void*)&a0->field_8[0]) = v44;
                *((unsigned long long *)&a0->field_0) = v27;
                goto LABEL_4e4eec;
            }
        }
    }
LABEL_4e49b7:
    if (!(char)v1.is_dir(v2))
    {
        v46 = &v37;
        uu_cp::copy_file(&v37, a1, v1, v2, v7, v8, a3, a4, a6, a7, 0);
        if (*((long long *)&v37) == 9223372036854775820)
        {
            v37.drop_in_place<core::result::Result<(),uu_cp::CpError>>();
            goto LABEL_4e4a33;
        }
        v34 = v40;
        v32 = v39;
        v30 = v38;
        v28 = v37;
        if (!(char)v3)
        {
            if (v27 != 9223372036854775810 || (char)v32.kind() != 1)
                goto LABEL_4e4eca;
            v47 = (unsigned int)v32.kind();
            (char)v9.to_vec("source: cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 6);
            v5 = v11;
            *((int128_t *)&v4) = *((int128_t *)&v9);
            v24 = 1;
            memcpy(&v25, &v15, 16);
            v26 = 1;
            v18.spec_to_string(&v24);
            v11 = v5;
            v48 = (int128_t)v4;
            *((int128_t *)&v12) = *((int128_t *)&v18);
            v14 = v20;
            v18 = v48;
            v20 = v11;
            v21 = v12;
            v22 = v13;
            v23 = v14;
            (char)v9.from_iter(&v18);
            uucore::mods::locale::get_message_with_args(&v18, "cp-error-cannot-open-for-readingcp-error-invalid-backup-argumentoverride the usual backup suffix", 32, &(char)v9);
            v35 = &v18;
            v36 = <alloc::string::String as core::fmt::Display>::fmt;
            v9 = &g_4390f0;
            v10 = 1;
            v13 = 0;
            v11 = &v35;
            v12 = 1;
            (char)v4.map_or_else(&v9);
            ::0x4e35a0::core::ptr::drop_in_place<alloc::string::String>(&v18);
            memcpy(&v41, &v4, 16);
            v42 = v5;
            v4 = v47.new(&v41);
            uucore::mods::error::set_exit_code(v49->field_58(v4));
            v24 = uucore::util_name();
            v25 = v49;
            v18 = &v24;
            v19 = <&T as core::fmt::Display>::fmt;
            v20 = &v4;
            v21 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v9 = &g_5fbb38;
            v10 = 3;
            v13 = 0;
            v11 = &v18;
            v12 = 2;
            std::io::stdio::_eprint(&v9);
            ::0x4e33e0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v4, v49);
            ::0x4e35b0::core::ptr::drop_in_place<std::io::error::Error>(v32);
            if (!(v27 == 9223372036854775810))
                goto LABEL_4e4f1d;
            goto LABEL_4e4e87;
        }
        if (!(char)v1.is_symlink(v2))
        {
            v46 = &v27;
LABEL_4e4eca:
            *((unsigned long long *)&a0->field_18[8]) = v46->field_30;
            v51 = v46->field_0;
            v52 = v46->field_10;
            *((uint128_t *)&a0->field_10) = v46->field_20;
            *((void*)&a0->field_8[8]) = v52;
            *((void*)&a0->field_0) = v51;
LABEL_4e4eec:
            ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
            ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v15);
        }
        else if (v27 == 9223372036854775810)
        {
            ::0x4e35b0::core::ptr::drop_in_place<std::io::error::Error>(v32);
LABEL_4e4e87:
            ::0x4e35a0::core::ptr::drop_in_place<alloc::string::String>(&v29);
            goto LABEL_4e4a33;
        }
        else
        {
LABEL_4e4f1d:
            ::0x4e3430::core::ptr::drop_in_place<uu_cp::CpError>(&v27);
            goto LABEL_4e4a33;
        }
    }
    else
    {
LABEL_4e4a33:
        *((unsigned long long *)&a0->field_0) = 9223372036854775820;
        ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
        ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v15);
    }
    ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
    return;
}
