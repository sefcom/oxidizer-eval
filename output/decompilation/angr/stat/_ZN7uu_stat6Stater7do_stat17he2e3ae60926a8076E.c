long long uu_stat::Stater::do_stat(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    int v0;  // [bp-0x228]
    unsigned long long v1;  // [bp-0x220]
    unsigned long long v2;  // [bp-0x218]
    char *v3;  // [bp-0x208], Other Possible Types: void*, unsigned long long
    unsigned long long v4;  // [bp-0x200]
    unsigned long long v5;  // [bp-0x1f8]
    char v6;  // [bp-0x1f0]
    char *v7;  // [bp-0x1e8]
    unsigned long long v8;  // [bp-0x1e0]
    char *v9;  // [bp-0x1d8]
    unsigned long long v10;  // [bp-0x1d0]
    char v11;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1b8]
    unsigned long long v13;  // [bp-0x1b0]
    unsigned long long v14;  // [bp-0x1a8]
    unsigned long long v15;  // [bp-0x1a0]
    char *v16;  // [bp-0x198], Other Possible Types: unsigned long long
    int v17;  // [bp-0x190], Other Possible Types: unsigned long long
    void* v18;  // [bp-0x188]
    char v19;  // [bp-0x170]
    char v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xf0]
    unsigned long long v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [bp-0xd8]
    char *v25;  // [bp-0xd0]
    unsigned long long v26;  // [bp-0xc8]
    void* v27;  // [bp-0xc0]
    unsigned long long v29;  // r14
    unsigned long long v30;  // rbx
    char v31;  // r12b
    unsigned long long v32;  // rdx
    unsigned int v33;  // ebx
    unsigned long long v34;  // rdx
    void* v35;  // rdi
    unsigned long long v36;  // r15
    unsigned long long v37;  // rdx
    unsigned long long v39;  // rcx
    unsigned long v40;  // rsi
    unsigned long long v41;  // r12
    unsigned long v42;  // rsi
    unsigned long v43;  // r13
    unsigned int v45;  // edx

    v20.from_utf8_lossy(a1, a2);
    v29 = v21;
    v30 = v22;
    if ((char)v29.eq(v30))
    {
        v31 = a0->field_61;
        if (v31)
        {
            v23 = uucore::util_name();
            v24 = v32;
            v3 = &v23;
            v4 = <&T as core::fmt::Display>::fmt;
            v14 = &g_519c28;
            v15 = 2;
            v18 = 0;
            v16 = &v3;
            v17 = 1;
            std::io::stdio::_eprint(&v14);
            v14 = &g_519fd0;
            v15 = 1;
            v16 = 8;
            *((uint128_t *)&v17) = 0;
            std::io::stdio::_eprint(&v14);
            v33 = 1;
        }
        else
        {
            std::fs::canonicalize(&(char)v14, "/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 10);
            if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
            {
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v14);
                (char)v14.to_vec("/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 10);
            }
            v2 = v16;
            *((int128_t *)&v0) = *((int128_t *)&v14);
            if ((v31 & 1))
                goto LABEL_47704d;
LABEL_477207:
            if (a0->field_60 || a3 && (char)v29.eq(v30))
                std::fs::metadata(&(char)v23, &(char)v0);
            else
                std::fs::symlink_metadata(&(char)v23, &(char)v0);
            if ((int)v23 == 2)
            {
                v11 = v24;
                v3 = uucore::util_name();
                v4 = v37;
                v7 = &v3;
                v8 = <&T as core::fmt::Display>::fmt;
                v14 = &g_519c28;
                v15 = 2;
                v18 = 0;
                v16 = &v7;
                v17 = 1;
                std::io::stdio::_eprint(&v14);
                v3 = 0;
                v4 = v29;
                v5 = v30;
                v6 = 1;
                v7 = &v3;
                v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &v11;
                v10 = <std::io::error::Error as core::fmt::Display>::fmt;
                v14 = &g_51a010;
                v15 = 3;
                v18 = 0;
                v16 = &v7;
                v17 = 2;
                std::io::stdio::_eprint(&v14);
                core::ptr::drop_in_place<std::io::error::Error>(&v11);
LABEL_477365:
                v33 = 1;
                goto LABEL_47736a;
            }
            else
            {
                v13 = v29;
                memcpy(&(char)v14, &(char)v23, 176);
                v39 = ((*((int *)&v19) - 0x2000 & 0xb000) ? 24 : 48);
                if (a0->field_62)
                    v39 = 24;
                v40 = *((long long *)&a0->padding_0[8 + v39]);
                v41 = *((long long *)&a0->padding_0[8 + v39]) + *((long long *)&a0->padding_0[16 + v39]) * 40;
                do
                {
                    v42 = v40;
                    v43 = v42 + 40;
                    if (v42 == v41)
                    {
                        v43 = v42;
                        if (v42 != v41)
                            continue;
                    }
                    else
                    {
                        if (v42 == v41)
                            goto LABEL_47745d;
                        else
                            goto LABEL_47742d;
                    }
LABEL_47742d:
                    v40 = v43;
                } while (!((char)a0.process_token_files(v42, &(char)v14, v13, v30, &(char)v0, *((int *)&v19), a0->field_62) & 1));
                v33 = v45;
LABEL_47736a:
                core::ptr::drop_in_place<std::ffi::os_str::OsString>((long long)v0, v1);
            }
        }
    }
    else
    {
        (char)v14.to_vec(a1, a2);
        v2 = v16;
        *((int128_t *)&v0) = *((int128_t *)&v14);
        if (!(a0->field_61 & 1))
            goto LABEL_477207;
LABEL_47704d:
        uucore::features::fsext::statfs(&(char)v14, v1, v2);
        if ((int)v14 == 1)
        {
            v12 = v17;
            memcpy(&v11, &v15, 16);
            v3 = uucore::util_name();
            v4 = v34;
            v7 = &v3;
            v8 = <&T as core::fmt::Display>::fmt;
            v23 = &g_519c28;
            v24 = 2;
            v27 = 0;
            v25 = &v7;
            v26 = 1;
            std::io::stdio::_eprint(&v23);
            v3 = 0;
            v4 = v29;
            v5 = v30;
            v6 = 1;
            v7 = &v3;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v9 = &v11;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v23 = &g_519fe0;
            v24 = 3;
            v27 = 0;
            v25 = &v7;
            v26 = 2;
            std::io::stdio::_eprint(&v23);
            core::ptr::drop_in_place<alloc::string::String>(&v11);
            goto LABEL_477365;
        }
        else
        {
            v35 = a0->field_20;
            for (v36 = a0->field_28 * 40; v36; v35 += 40)
            {
                v36 -= 40;
                uu_stat::process_token_filesystem(v35, &v15, v29, v30);
            }
LABEL_47745d:
            core::ptr::drop_in_place<std::ffi::os_str::OsString>((long long)v0, v1);
            v33 = 0;
        }
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
    return v33;
}
