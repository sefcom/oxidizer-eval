long long uu_cp::handle_existing_dest(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_1 *a5, char a6, unsigned long long a7)
{
    char v0;  // [bp-0x191]
    struct_0 *v1;  // [bp-0x190]
    int v2;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x178]
    int v5;  // [bp-0x170], Other Possible Types: char
    unsigned long long v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    char v8;  // [bp-0x158], Other Possible Types: unsigned long long
    int v9;  // [bp-0x158]
    char v10;  // [bp-0x150], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x148], Other Possible Types: int, unsigned long long
    char v12;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x138], Other Possible Types: int
    char v14;  // [bp-0x130]
    int v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x110]
    unsigned long long v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xf0]
    char *v22;  // [bp-0xe8], Other Possible Types: int
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [bp-0xd8]
    int v25;  // [bp-0xd0]
    unsigned long long v26;  // [bp-0xc0]
    int v27;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v28;  // [bp-0xa8]
    char v29;  // [bp-0xa0]
    unsigned long long v30;  // [bp-0x90]
    char v31;  // [bp-0x88]
    unsigned long long v32;  // [bp-0x80]
    unsigned long long v33;  // [bp-0x78]
    unsigned long long v34;  // [bp-0x70]
    unsigned long long v35;  // [bp-0x68]
    unsigned long long v36;  // [bp-0x60]
    char v37;  // [bp-0x58]
    unsigned long long v38;  // [bp-0x50]
    unsigned long long v39;  // [bp-0x48]
    unsigned long long v40;  // [bp-0x40]
    char v41;  // [bp-0x38]
    int v42;  // xmm3
    unsigned int v43;  // eax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    int v47;  // xmm3
    int v48;  // xmm0
    int v49;  // xmm1
    char *v50;  // rdi

    if ((char)uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, a6))
    {
        (char)v2.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
        v34 = 1;
        v35 = a1;
        v36 = a2;
        v37 = 1;
        v8.spec_to_string(&v34);
        v24 = v4;
        *((int128_t *)&v22) = *((int128_t *)&v2);
        *((int128_t *)&v25) = *((int128_t *)&v8);
        v26 = v11;
        v8.to_vec("destcyanSome of bolddumb", 4);
        v28 = v11;
        memcpy(&v27, &v8, 16);
        v38 = 1;
        v39 = a3;
        v40 = a4;
        v41 = 1;
        v8.spec_to_string(&v38);
        v4 = v28;
        v2 = v27;
        *((int128_t *)&v5) = *((int128_t *)&v8);
        v7 = v11;
        v42 = (int128_t)(&v25)[8];
        memcpy(&v8, &(char)v22, 16);
        *((int128_t *)&v11) = *((int128_t *)&v24);
        v13 = v42;
        v18 = v6;
        v19 = v7;
        v16 = v4;
        v17 = (long long)v5;
        v15 = v27;
        (char)v2.from_iter(&v8);
        uucore::mods::locale::get_message_with_args(&v1->field_8, "cp-error-same-filecannot stat ", 18, &(char)v2);
        v1->field_0 = 9223372036854775811;
        return 9223372036854775811;
    }
    v43 = a5->field_66;
    if (v43 != 1)
    {
        if (v43 != 2)
        {
            v8.verify(a5->field_54, a3, a4, a5->field_5f);
            if (v8 != 9223372036854775820)
            {
                v44 = *((int128_t *)&v10);
                v45 = *((int128_t *)&v12);
                *((int128_t *)&v1->field_20[8]) = *((int128_t *)&v14);
                *((void*)&v1->field_18) = v45;
                *((void*)&v1->field_8) = v44;
                v1->field_0 = v8;
                return v8;
            }
        }
        uucore::features::backup_control::get_backup_path(&v29, a5->field_65);
        v20 = 0x8000000000000000;
        v21 = *((long long *)&v29);
        if (*((long long *)&v29) != 0x8000000000000000)
        {
            memcpy(&v31, &v29, 16);
            v33 = v30;
            if ((char)uucore::features::fs::paths_refer_to_same_file(a1, a2, v32, v30, 1))
            {
                v8.to_vec("destcyanSome of bolddumb", 4);
                v4 = v11;
                *((int128_t *)&v2) = *((int128_t *)&v8);
                v34 = 1;
                v35 = a3;
                v36 = a4;
                v37 = 1;
                v8.spec_to_string(&v34);
                v24 = v4;
                *((int128_t *)&v22) = (int128_t)v2;
                *((int128_t *)&v25) = *((int128_t *)&v8);
                v26 = v11;
                v8.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
                v28 = v11;
                memcpy(&v27, &v8, 16);
                v38 = 1;
                v39 = a1;
                v40 = a2;
                v41 = 1;
                v8.spec_to_string(&v38);
                v4 = v28;
                v2 = v27;
                *((int128_t *)&v5) = *((int128_t *)&v8);
                v7 = v11;
                v46 = *((int128_t *)&v24);
                v47 = (int128_t)(&v25)[8];
                *((int128_t *)&v9) = (int128_t)v22;
                v11 = v46;
                v13 = v47;
                v18 = v6;
                v19 = v7;
                v16 = v4;
                v17 = (long long)v5;
                v15 = v27;
                (char)v2.from_iter(&v8);
                uucore::mods::locale::get_message_with_args(&v8, "cp-error-backing-up-destroy-sourcecp-error-same-filecannot stat ", 34, &(char)v2);
                *((unsigned long long *)&v1->field_18) = v11;
                *((int128_t *)&v1->field_8) = (int128_t)v9;
                v1->field_0 = 9223372036854775811;
                return (unsigned long long)::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(v50);
            }
            v0 = a3.is_symlink(a4);
            uu_cp::backup_dest(&v8, a3, a4, v32, v33, v0);
            memcpy(&(char)v2, &v10, 16);
            v4 = v12;
            if (v8 != 9223372036854775820)
            {
                *((long long *)&v1->field_20[16]) = (long long)v15;
                *((int128_t *)&v1->field_20[0]) = (int128_t)v13;
                *((unsigned long long *)&v1->field_18) = v4;
                *((int128_t *)&v1->field_8) = (int128_t)v2;
                v1->field_0 = v8;
                v50 = &v31;
                return (unsigned long long)::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(v50);
            }
            *((int128_t *)&v22) = (int128_t)v2;
            v24 = v4;
            ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
            ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v31);
            if (v0)
            {
                v1->field_0 = 9223372036854775820;
                return a0;
            }
        }
        uu_cp::delete_dest_if_needed_and_allowed(&v8, a1, a2, a3, a4, a5, a6, a7);
        if (v8 == 9223372036854775820)
        {
            *(a0) = 9223372036854775820;
            if (!(v21 == v20 & *((long long *)&v29) != v20))
                return 0x8000000000000000 | v21 == v20;
        }
        else
        {
            v48 = *((int128_t *)&v10);
            v49 = *((int128_t *)&v12);
            *((int128_t *)&v1->field_20[8]) = *((int128_t *)&v14);
            *((void*)&v1->field_18) = v49;
            *((void*)&v1->field_8) = v48;
            v1->field_0 = v8;
            if (v21 != v20)
            {
                return v20;
            }
            else if (*((long long *)&v29) == v20)
            {
                return v20;
            }
        }
        v50 = &v29;
        return (unsigned long long)::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v29);
    }
    else
    {
        if (a5->field_5f)
        {
            v2 = 1;
            v3 = a3;
            v4 = a4;
            v5 = 1;
            v22 = &v2;
            v23 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = &g_5fb830;
            v10 = 2;
            v13 = 0;
            v11 = &v22;
            v12 = 1;
            std::io::stdio::_print(&v8);
        }
        v1->field_0 = 9223372036854775815;
        v1->field_8 = 0;
        return a0;
    }
}
