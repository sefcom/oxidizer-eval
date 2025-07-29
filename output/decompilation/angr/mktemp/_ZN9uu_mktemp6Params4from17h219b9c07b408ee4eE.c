long long uu_mktemp::Params::from(struct_2 *a0, struct_0 *a1)
{
    struct_1 *v0;  // [bp-0x1a8]
    unsigned long v1;  // [bp-0x1a0]
    char *v2;  // [bp-0x198], Other Possible Types: int
    void* v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    void* v5;  // [bp-0x188], Other Possible Types: char *, unsigned long
    unsigned long long v6;  // [bp-0x180]
    int v7;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long, unsigned long long
    unsigned int v8;  // [bp-0x178]
    unsigned long long v9;  // [bp-0x178]
    unsigned int v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x178]
    char v12;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x170]
    char *v14;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    int v15;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v16;  // [bp-0x158]
    unsigned long long v17;  // [bp-0x150]
    int v18;  // [bp-0x148], Other Possible Types: char
    unsigned long long v19;  // [bp-0x138]
    char v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x120]
    unsigned long long v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x110]
    void* v24;  // [bp-0x108]
    int v25;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v26;  // [bp-0xf8]
    char v27;  // [bp-0xf0]
    unsigned long long v28;  // [bp-0xe8]
    unsigned long long v29;  // [bp-0xe0]
    unsigned long long v30;  // [bp-0xd8]
    int v31;  // [bp-0xc8]
    unsigned long v32;  // [bp-0xb8]
    void* v33;  // [bp-0xa8]
    int v34;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x90]
    unsigned long long v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x80]
    int v39;  // [bp-0x78], Other Possible Types: char
    unsigned long long v40;  // [bp-0x68]
    unsigned long long v41;  // [bp-0x58]
    unsigned long long v42;  // [bp-0x50]
    char v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    void* v46;  // 4117
    struct_1 *v47;  // 4096
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdx
    struct_1 *v50;  // rbx
    unsigned long long v51;  // rdi
    struct_2 *v52;  // rbx
    unsigned long long v53;  // rax
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rax
    char v56;  // r12b
    unsigned long long v57;  // rax
    void* v58;  // rcx
    void* v59;  // rdx
    struct_1 *v60;  // 4096
    unsigned long long v61;  // rbx
    unsigned long long v62;  // rbp
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    struct_1 *v66;  // rbx
    void* v67;  // rax
    unsigned long long v68;  // r14
    unsigned long long v69;  // rax
    char v70;  // r13b

    v1 = &a1->field_28;
    v46 = a1->field_28;
    v47 = a1;
    if (!((char)(((0 ^ v46) & (0 ^ -(v46))) >> 63)))
    {
        v7 = 0;
        v48 = ::0x4a7830::core::char::methods::encode_utf8_raw(88, &v7);
        v47 = v0;
        if (!(char)core::slice::<impl [T]>::ends_with(*((long long *)&a1->padding_1[7]), a1->field_10, v48, v49))
        {
            a0->field_20 = v0->field_10;
            a0->field_10 = *((int128_t *)&v0->field_0);
            *((unsigned long long *)&a0->padding_1[7]) = 9223372036854775809;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(&v0->field_10)[1]);
            ::0x4a6e00::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v1);
            return a0;
        }
    }
    v50 = v47;
    uu_mktemp::find_last_contiguous_block_of_xs(&v20, *((long long *)&v50->padding_1[7]), v50->field_10);
    if (!(v20 & 1))
    {
        if (*((long long *)v1) == 0x8000000000000000)
        {
            v5 = v50->field_10;
            *((int128_t *)&v2) = *((int128_t *)&v50->field_0);
        }
        else
        {
            v7 = *((long long *)&v50->padding_1[7]);
            v12 = *((long long *)&v50->padding_1[7]) + v50->field_10;
            v14 = v50->field_10;
            (char)v2.from_iter(&v7);
            v70 = 1;
        }
        a0->field_20 = v5;
        a0->field_10 = (int128_t)v2;
        *((unsigned long long *)&a0->padding_1[7]) = 9223372036854775810;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(&v50->field_10)[1]);
        goto LABEL_4a8f69;
    }
    v51 = v21;
    v23 = v22;
    v32 = *((long long *)((char *)&v50->field_18 + 8));
    *((int128_t *)&v31) = *((int128_t *)&(&v50->field_10)[1]);
    if ((long long)v31 != 0x8000000000000000)
    {
        v11.clone(&v31);
        *((int128_t *)&v2) = *((int128_t *)&v12);
        if (v11 == 0x8000000000000000)
            goto LABEL_4a8a50;
        v52 = a0;
        *((int128_t *)&v25) = (int128_t)v2;
        v24 = v11;
    }
    else
    {
LABEL_4a8a50:
        v52 = a0;
        v24 = 0;
        v25 = 1;
        v26 = 0;
    }
    v30 = v51;
    v53 = v51.get(*((long long *)&a1->padding_1[7]), a1->field_10);
    if (!v53)
        core::str::slice_error_fail(*((long long *)&a1->padding_1[7]), a1->field_10, 0, v30, &g_58cbd0); /* do not return */
    v54 = v53;
    v11.join(v25, v26, v53, v49);
    a0 = v52;
    memcpy(&(char)v3, &(char)v13, 16);
    v27.spec_to_string(&(char)v3);
    ::0x4a6560::core::ptr::drop_in_place<std::path::PathBuf>(&v11);
    if (*((char *)&v0->field_38 + 11) && v54.is_contained_in(v49))
    {
        v55 = 9223372036854775811;
        goto LABEL_4a8c20;
    }
    else
    {
        if ((long long)v31 != 0x8000000000000000 && (char)v54.is_absolute(v49))
        {
            v55 = 9223372036854775813;
LABEL_4a8c20:
            a0->field_20 = v0->field_10;
            a0->field_10 = *((int128_t *)&v0->field_0);
            *((unsigned long long *)&a0->padding_1[7]) = v55;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            v56 = 1;
        }
        else
        {
            v8 = 0;
            if ((char)core::slice::<impl [T]>::ends_with(v28, v29, ::0x4a7830::core::char::methods::encode_utf8_raw(47, &v8), v49))
            {
                v14 = v29;
                memcpy(&v8, &v27, 16);
                v57 = 1;
                v58 = 0;
                v59 = 0;
                v60 = a1;
            }
            else
            {
                v61 = v28;
                v62 = v29;
                v63 = v61.parent(v62);
                if (v63)
                {
                    v9 = v63;
                    v13 = v49;
                    (char)v3.spec_to_string(&v9);
                }
                else
                {
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                }
                v64 = v61.file_name(v62);
                if (v64)
                {
                    v9.try_from(v64, v49);
                    if (v10 == 1)
                        core::option::unwrap_failed(&g_58cbe8); /* do not return */
                    v9.to_vec(v13, v14);
                    v58 = v9;
                    v57 = v13;
                    v59 = v14;
                }
                else
                {
                    v57 = 1;
                    v58 = 0;
                    v59 = 0;
                }
                v14 = v5;
                memcpy(&v9, &(char)v3, 16);
                v60 = a1;
            }
            v66 = v60;
            v40 = v14;
            memcpy(&v39, &v9, 16);
            v36 = v58;
            v37 = v57;
            v38 = v59;
            v67 = *((long long *)v1);
            if (v67 == 0x8000000000000000)
            {
                v34 = 1;
                v35 = 0;
                v67 = 0;
            }
            else
            {
                *((int128_t *)&v34) = *((int128_t *)&v66->field_30);
            }
            v33 = v67;
            v68 = v66->field_10;
            v69 = v23.get(*((long long *)&v66->padding_1[7]), v68);
            if (!v69)
                core::str::slice_error_fail(*((long long *)&v66->padding_1[7]), v68, v23, v68, &g_58cc00); /* do not return */
            v41 = v69;
            v42 = v49;
            v2 = &v41;
            v4 = <&T as core::fmt::Display>::fmt;
            v5 = &v33;
            v6 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_431f40;
            v12 = 2;
            v16 = 0;
            v14 = &v2;
            v15 = 2;
            v43.map_or_else(&v7);
            memcpy(&v20, &v43, 16);
            v22 = *((long long *)&v44);
            if (!v21.is_contained_in(*((long long *)&v44)))
            {
                v14 = v40;
                v7 = v39;
                v17 = v38;
                *((int128_t *)&v15) = *((int128_t *)&v36);
                v19 = v22;
                memcpy(&v18, &v20, 16);
                a0->field_40 = v22;
                *((void*)&a0->field_30) = v18;
                *((void*)&a0->field_0) = v39;
                a0->field_20 = 0;
                a0->field_28 = v17;
                a0->field_10 = *((int128_t *)&v14);
                a0->field_48 = v23 - v30;
                ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v33);
                ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v27);
                ::0x4a6560::core::ptr::drop_in_place<std::path::PathBuf>(&v24);
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v31);
                ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(v50);
                return a0;
            }
            a0->field_20 = v22;
            a0->field_10 = *((int128_t *)&v20);
            *((unsigned long long *)&a0->padding_1[7]) = 9223372036854775812;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v33);
            ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v36);
            ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v39);
            v70 = 1;
            if (0)
                goto LABEL_4a8f46;
        }
        ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v27);
LABEL_4a8f46:
        ::0x4a6560::core::ptr::drop_in_place<std::path::PathBuf>(&v24);
        v50 = a1;
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v31);
        if (!v56)
            goto LABEL_4a8f73;
LABEL_4a8f69:
        ::0x4a6e00::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v1);
LABEL_4a8f73:
        if (!v70)
            return a0;
        ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(v50);
        return a0;
    }
}
