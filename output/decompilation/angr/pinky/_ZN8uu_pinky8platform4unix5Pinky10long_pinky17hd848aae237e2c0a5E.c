long long uu_pinky::platform::unix::Pinky::long_pinky(struct_0 *a0)
{
    char v0;  // [bp-0x1eb]
    char v1;  // [bp-0x1ea]
    char v2;  // [bp-0x1e9]
    char *v3;  // [bp-0x1e8]
    char *v4;  // [bp-0x1e8], Other Possible Types: int
    unsigned long long v5;  // [bp-0x1e0]
    unsigned long long v6;  // [sp-0x1d8]
    unsigned long long v7;  // [sp-0x1c8]
    int v8;  // [bp-0x1c8]
    unsigned long long v9;  // [bp-0x1c0]
    char *v10;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1b0]
    void* v13;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1a0]
    unsigned int v15;  // [bp-0x198]
    int v16;  // [bp-0x194]
    void* v17;  // [bp-0x188]
    int v18;  // [bp-0x180]
    unsigned long long v19[3];  // [bp-0x170], Other Possible Types: char
    int v20;  // [bp-0x168]
    unsigned long long v21;  // [bp-0x160]
    void* v22;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x150]
    int v24;  // [bp-0x148]
    void* v25;  // [bp-0x140]
    char v26;  // [bp-0x138], Other Possible Types: unsigned long long
    int v27;  // [bp-0x138]
    unsigned long long v28;  // [bp-0x130]
    char *v29;  // [bp-0x128], Other Possible Types: unsigned long long
    int v30;  // [bp-0x128]
    unsigned long long v31;  // [bp-0x120]
    int v32;  // [bp-0x120]
    unsigned long long v33;  // [bp-0x118]
    int v34;  // [bp-0x118]
    unsigned long long v35;  // [bp-0x110]
    int v36;  // [bp-0x108]
    int v37;  // [bp-0xf8]
    void* v38;  // [bp-0xf0]
    int v39;  // [bp-0xe8]
    int v40;  // [bp-0xd8]
    char v41;  // [bp-0xc8]
    char *v42;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v43;  // [bp-0xa8]
    int v44;  // [bp-0xa0]
    int v45;  // [bp-0x90]
    int v46;  // [bp-0x80]
    int v47;  // [bp-0x70]
    int v48;  // [bp-0x60]
    int v49;  // [bp-0x50]
    char v50;  // [bp-0x40]
    unsigned long long v52;  // rax
    unsigned long long v53;  // rbx
    char *v54;  // r14
    char *v55;  // r12
    unsigned long long v56;  // rbx
    unsigned long long v57;  // rax
    uint256_t v58;  // ymm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // ymm0, Other Possible Types: uint256_t
    void* v62;  // rax
    unsigned long long v63;  // rax
    int v64;  // xmm0
    unsigned int v65;  // r14d
    int v66;  // xmm0
    unsigned int v67;  // r14d
    unsigned long v68;  // rbx
    unsigned long long v69;  // [bp-0x180]
    void* v70;  // [bp-0x178]
    void* v71;  // [bp-0x168]
    unsigned long long v72;  // [bp-0x148]
    int v74;  // ymm0, Other Possible Types: uint256_t

    v52 = a0->field_10;
    if (!v52)
        return v52;
    v2 = a0->field_1e;
    v1 = a0->field_1b;
    v0 = a0->field_1c;
    v53 = v52 * 24;
    v54 = &v42;
    v55 = &v26;
    do
    {
        v56 = v53;
        v42 = &v19;
        v43 = <&T as core::fmt::Display>::fmt;
        v26 = &g_4f9090;
        v28 = 2;
        v33 = &g_41a8a0;
        v35 = 1;
        v29 = v54;
        v31 = 1;
        std::io::stdio::_print(v55);
        v54.locate(v19[1], v19[2]);
        if (v42 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(v54);
            v26 = &g_4f9080;
            v28 = 1;
            v29 = 8;
            v74 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((uint128_t *)&v32) = 0;
            v57 = std::io::stdio::_print(v55);
        }
        v58 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v50);
        memcpy(&v41, &v50, 16);
        v59 = v49;
        v40 = v59;
        memcpy(&v39, &v48, 16);
        v37 = v47;
        v60 = *((int128_t *)&v42);
        v61 = (((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v36 = v46;
        v34 = v45;
        v30 = v44;
        v27 = v60;
        uu_pinky::platform::unix::gecos_to_fullname(&v7, v55);
        if (v7 == 0x8000000000000000)
        {
            v71 = 0;
            v21 = 1;
            v22 = 0;
            v62 = v38;
            if (v38 == 0x8000000000000000)
                goto LABEL_463c61;
            goto LABEL_463c0d;
        }
        else
        {
            v22 = v10;
            v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v7);
            *((int128_t *)&v20) = *((int128_t *)&v7);
            v62 = v38;
            if (v38 != 0x8000000000000000)
            {
LABEL_463c0d:
                v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v18 = v39;
                goto LABEL_463c78;
            }
            else
            {
LABEL_463c61:
                v69 = 1;
                v70 = 0;
                v62 = 0;
LABEL_463c78:
                v17 = v62;
                v63 = (long long)v36;
                if (v63 == 0x8000000000000000)
                {
                    v72 = 1;
                    v25 = 0;
                    v63 = 0;
                }
                else
                {
                    v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v36)[8];
                    *((int128_t *)&v24) = (int128_t)(&v36)[8];
                }
                v23 = v63;
                v3 = &v71;
                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_4f9020;
                v9 = 2;
                v13 = 0;
                v10 = &v3;
                v12 = 1;
                std::io::stdio::_print(&v7);
                if ((v2 & 1))
                {
                    v4 = &v17;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v7 = &g_4f90b0;
                    v9 = 1;
                    v13 = &g_41a8e0;
                    v14 = 1;
                    v10 = &v4;
                    v11 = 1;
                    std::io::stdio::_print(&v7);
                    v3 = &v23;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v7 = &g_4f9040;
                    v9 = 2;
                    v13 = 0;
                    v10 = &v3;
                    v12 = 1;
                    std::io::stdio::_print(&v7);
                }
                if ((v1 & 1))
                {
                    (unsigned long long)v8.to_vec(v69, v70);
                    v6 = v10;
                    v64 = *((int128_t *)&v7);
                    v4 = v64;
                    (unsigned long long)v4.push(".project\n       February", 8);
                    v10 = v6;
                    v61 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v4;
                    *((int128_t *)&v8) = (int128_t)v4;
                    v15.open(&(unsigned long long)v8);
                    if (v15 == 1)
                    {
                        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v15);
                    }
                    else
                    {
                        v65 = (int)v16;
                        v7 = &g_4f9060;
                        v9 = 1;
                        v10 = 8;
                        v61 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v11) = 0;
                        std::io::stdio::_print(&v7);
                        uu_pinky::platform::unix::read_to_console(v65);
                    }
                }
                if ((v0 & 1))
                {
                    v7.to_vec(v69, v70);
                    v6 = v10;
                    v66 = (int128_t)v8;
                    v4 = v66;
                    (unsigned long long)v4.push(".plan(uutils coreutils) 0.0.30Displays brief user information on Unix-based systems{} [OPTION]... [USER]...long_formatproduce long format output for the specified USERsomit_home_diromit the user's home directory and shell in long formatomit_project_fileomi", 5);
                    v10 = v6;
                    v61 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v4;
                    memcpy(&v7, &(unsigned long long)v4, 16);
                    v15.open(&v7);
                    if (v15 == 1)
                    {
                        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v15);
                    }
                    else
                    {
                        v67 = (int)v16;
                        v7 = &g_4f9070;
                        v9 = 1;
                        v10 = 8;
                        v61 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v11) = 0;
                        std::io::stdio::_print(&v7);
                        uu_pinky::platform::unix::read_to_console(v67);
                    }
                }
                v7 = &g_4f8f70;
                v9 = 1;
                v10 = 8;
                v74 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((uint128_t *)&v11) = 0;
                std::io::stdio::_print(&v7);
                core::ptr::drop_in_place<alloc::string::String>(&v23);
                core::ptr::drop_in_place<alloc::string::String>(&v17);
                core::ptr::drop_in_place<alloc::string::String>(&v71);
                core::ptr::drop_in_place<alloc::string::String>(&v26);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v31);
                v57 = (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v40);
            }
        }
        v68 = v56 - 24;
        v54 = &v42;
        v55 = &v26;
        v53 = v68;
    } while (v56 != 24);
    return v57;
}
