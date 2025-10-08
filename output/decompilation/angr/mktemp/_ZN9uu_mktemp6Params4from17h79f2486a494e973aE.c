long long uu_mktemp::Params::from(void* a0, struct_0 *a1)
{
    void* v0;  // [bp-0x1a8], Other Possible Types: char *, int
    unsigned long long v1;  // [bp-0x1a0]
    void* v2;  // [bp-0x198], Other Possible Types: char *, unsigned long
    unsigned long long v3;  // [bp-0x190]
    unsigned long v4;  // [bp-0x188]
    unsigned long v5;  // [bp-0x180]
    void* v6;  // [bp-0x178]
    int v7;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long long
    unsigned int v8;  // [bp-0x178]
    void* v9;  // [bp-0x178]
    char v10;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x170]
    char *v12;  // [bp-0x168], Other Possible Types: void*, unsigned long
    int v13;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x158]
    void* v15;  // [bp-0x150]
    int v16;  // [bp-0x148], Other Possible Types: char
    unsigned long long v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x128]
    unsigned long long v19;  // [bp-0x120]
    void* v20;  // [bp-0x118]
    int v21;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x108]
    unsigned long long v23;  // [bp-0x100]
    int v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xf0]
    unsigned long v26;  // [bp-0xe8]
    char v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd0]
    unsigned long long v29;  // [bp-0xc8]
    int v30;  // [bp-0xb8], Other Possible Types: char
    void* v31;  // [bp-0xa8]
    char v32;  // [bp-0xa0]
    unsigned long long v33;  // [bp-0x98]
    void* v34;  // [bp-0x90]
    void* v35;  // [bp-0x88]
    int v36;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v37;  // [bp-0x78]
    void* v38;  // [bp-0x70]
    unsigned long long v39;  // [bp-0x68]
    void* v40;  // [bp-0x60]
    char v41;  // [bp-0x58]
    unsigned long long v42;  // [bp-0x50]
    unsigned long long v43;  // [bp-0x48]
    unsigned long long v44;  // [bp-0x40]
    unsigned long long v45;  // [bp-0x38]
    unsigned long long v47;  // rbp
    unsigned long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rdi
    unsigned long long v51;  // r13
    unsigned long long v52;  // rax
    unsigned long long v53;  // r12
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rax
    char v56;  // r14b
    unsigned long long v57;  // r14
    void* v58;  // r12
    char v59;  // r13b
    unsigned long long v60;  // rax
    void* v61;  // rcx
    void* v62;  // rdx
    void* v63;  // rax
    unsigned long long v64;  // rax
    void* v65;  // rax
    unsigned long long v66;  // rax
    char v67;  // bpl
    unsigned long v68;  // rax

    v5 = &a1->field_28;
    v19 = a1->field_28;
    v47 = a1->field_0[1];
    v48 = a1->field_8;
    if (!((char)(((0 ^ a1->field_28) & (0 ^ -(a1->field_28))) >> 63)))
    {
        v8 = 0;
        v48 = a1->field_8;
        v49 = ::0x4619c0::core::char::methods::encode_utf8_raw(88, &v8);
        if (!(char)core::slice::<impl [T]>::ends_with(v47, a1->field_8, v49))
        {
            *((unsigned long long *)&a0[8]) = 9223372036854775809;
            *((unsigned long long [2])&a0[16]) = a1->field_0;
            *((unsigned long long *)&a0[32]) = a1->field_8;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&a1->field_10);
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v5);
            return a0;
        }
    }
    v4 = v48;
    uu_mktemp::find_last_contiguous_block_of_xs(&v41, v47, v48);
    if (*((int *)&v41) == 1)
    {
        v50 = v42;
        v18 = v43;
        v26 = *((long long *)((char *)&a1->field_18 + 8));
        *((int128_t *)&v24) = *((int128_t *)&a1->field_10);
        v51 = (long long)v24;
        if (v51 != 0x8000000000000000)
        {
            v6.clone(v25, v26);
            *((int128_t *)&v0) = *((int128_t *)&v10);
            if (v6 == 0x8000000000000000)
                goto LABEL_464d4e;
            *((int128_t *)&v21) = (int128_t)v0;
            v20 = v6;
        }
        else
        {
LABEL_464d4e:
            v20 = 0;
            v21 = 1;
            v22 = 0;
        }
        v23 = v50;
        v52 = v50.get(v47, v4);
        if (!v52)
            core::str::slice_error_fail(v47, v4, 0, v23, &g_4f8fd0); /* do not return */
        v53 = v52;
        v6.join(v21, v22, v52, v54);
        memcpy(&(char)v0, &(char)v11, 16);
        v32.spec_to_string(&(char)v0);
        core::ptr::drop_in_place<std::path::PathBuf>(&v6);
        if (*((char *)&a1->field_38 + 11) && v53.is_contained_in(v54))
        {
            v55 = 9223372036854775811;
            goto LABEL_464f1b;
        }
        if (v51 != 0x8000000000000000 && (char)v53.is_absolute(v54))
        {
            v55 = 9223372036854775813;
LABEL_464f1b:
            *((unsigned long long *)&a0[8]) = v55;
            *((unsigned long long [2])&a0[16]) = a1->field_0;
            *((unsigned long long *)&a0[32]) = a1->field_8;
            *((unsigned long long *)a0) = 0x8000000000000000;
            v56 = 1;
            goto LABEL_4651f5;
        }
        else
        {
            v57 = v33;
            v58 = v34;
            v7 = 0;
            v59 = core::slice::<impl [T]>::ends_with(v57, v58, ::0x4619c0::core::char::methods::encode_utf8_raw(47, &v7));
            if (v59)
            {
                v31 = v34;
                memcpy(&v30, &v32, 16);
                v60 = 1;
                v61 = 0;
                v62 = 0;
            }
            else
            {
                v63 = v57.parent(v58);
                if (v63)
                {
                    v9 = v63;
                    v11 = v54;
                    (char)v0.spec_to_string(&v9);
                }
                else
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                }
                v64 = v57.file_name(v58);
                if (v64)
                {
                    core::str::converts::from_utf8(&v9, v64, v54);
                    if (((char)v9 & 1))
                        core::option::unwrap_failed(&g_4f8fe8); /* do not return */
                    v9.to_vec(v11, v12);
                    v61 = v9;
                    v60 = v11;
                    v62 = v12;
                }
                else
                {
                    v60 = 1;
                    v61 = 0;
                    v62 = 0;
                }
                v31 = v2;
                memcpy(&v30, &v0, 16);
            }
            v38 = v61;
            v39 = v60;
            v40 = v62;
            if (v19 == 0x8000000000000000)
            {
                v36 = 1;
                v37 = 0;
                v65 = 0;
            }
            else
            {
                v65 = v19;
                *((int128_t *)&v36) = *((int128_t *)&a1->field_30);
            }
            v35 = v65;
            v66 = v18.get(v47, v4);
            if (!v66)
                core::str::slice_error_fail(v47, v4, v18, v4, &g_4f9000); /* do not return */
            v44 = v66;
            v45 = v54;
            v0 = &v44;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &v35;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_41b210;
            v10 = 2;
            v14 = 0;
            v12 = &v0;
            v13 = 2;
            v41.map_or_else(&v7);
            memcpy(&v27, &v41, 16);
            v29 = v43;
            if (v28.is_contained_in(v43))
            {
                *((unsigned long long *)&a0[32]) = v29;
                *((int128_t *)&a0[16]) = *((int128_t *)&v27);
                *((unsigned long long *)&a0[8]) = 9223372036854775812;
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v35);
                core::ptr::drop_in_place<alloc::string::String>(&v38);
                core::ptr::drop_in_place<alloc::string::String>(&v30);
                v67 = 1;
                if (v59)
                    goto LABEL_465202;
LABEL_4651f5:
                core::ptr::drop_in_place<alloc::string::String>(&v32);
LABEL_465202:
                core::ptr::drop_in_place<std::path::PathBuf>(&v20);
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v24);
                if (v56)
                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v5);
                if (!v67)
                    return a0;
            }
            else
            {
                v12 = v31;
                v7 = v30;
                v15 = v40;
                *((int128_t *)&v13) = *((int128_t *)&v38);
                v17 = v29;
                memcpy(&v16, &v27, 16);
                *((unsigned long long *)&a0[64]) = v29;
                a0[48] = v16;
                *(a0) = v30;
                *((unsigned long long *)&a0[32]) = 0;
                *((void* *)&a0[40]) = v15;
                *((int128_t *)&a0[16]) = *((int128_t *)&v12);
                *((unsigned long long *)&a0[72]) = v18 - v23;
                core::ptr::drop_in_place<alloc::string::String>(&v35);
                if (!v59)
                    core::ptr::drop_in_place<alloc::string::String>(&v32);
                core::ptr::drop_in_place<std::path::PathBuf>(&v20);
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v24);
            }
        }
    }
    else
    {
        if (v19 == 0x8000000000000000)
        {
            v2 = a1->field_8;
            *((unsigned long long [2])&v0) = a1->field_0;
        }
        else
        {
            v68 = v4;
            v10 = v47 + v68;
            v12 = v68;
            (char)v0.collect(&v6);
        }
        *((unsigned long *)&a0[32]) = v2;
        *((int128_t *)&a0[16]) = (int128_t)v0;
        *((unsigned long long *)&a0[8]) = 9223372036854775810;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&a1->field_10);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v5);
        if (v19 == 0x8000000000000000)
            return a0;
    }
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return a0;
}
