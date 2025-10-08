long long fish::path::path_apply_cdpath(struct_2 *a0, unsigned int *a1, unsigned long long a2, unsigned int *a3, unsigned long long a4, unsigned long long a5, struct_1 *a6)
{
    int v0;  // [bp-0x128], Other Possible Types: char, unsigned long, unsigned long long
    int v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    void* v3;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned int *v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    void* v6;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xf0]
    unsigned int *v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned int v10;  // [bp-0xd8]
    int v11;  // [bp-0xd8]
    int v12;  // [bp-0xd8]
    void* v13;  // [bp-0xc8]
    void* v14;  // [bp-0xb8]
    int v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    void* v17;  // [bp-0xa8]
    int v18;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v19;  // [bp-0x90]
    void* v20;  // [bp-0x88]
    void* v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x58]
    void* v23;  // [bp-0x50]
    char v24;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x40]
    int v26;  // [bp-0x38]
    unsigned int v27;  // eax
    unsigned int *v28;  // 4096
    unsigned long long v29;  // 4096
    unsigned int v30;  // edx
    unsigned long long v32;  // r14
    unsigned int *v33;  // r15
    unsigned int v34;  // eax
    unsigned int v35;  // ecx
    int v36;  // xmm0

    v8 = a1;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v4 = a1;
    v5 = &a1[a2];
    v27 = v4.next();
    v28 = a1;
    v29 = a2;
    if (v27 != 2)
    {
        v27.unwrap(v30, &g_14bd1b0);
        v28 = v8;
        v29 = v9;
        if (v30 != 47)
            goto LABEL_13efccd;
        v4.to_vec(v8, v9);
        v3 = v6;
        memcpy(&v0, &v4, 16);
        v21.push(&v0, &g_14df0d8);
    }
    else
    {
LABEL_13efccd:
        v32 = v29;
        v33 = v28;
        if (!v33.starts_with(v32, ".", 2) && !v8.starts_with(a2, ".", 3))
        {
            v4 = &".";
            v5 = 1;
            v6 = ".";
            v7 = 2;
            if (v8.slice_contains(&v4, 2))
                goto LABEL_13efd49;
            v18 = 0;
            v19 = 8;
            v20 = 0;
            a6->field_18(&v0, a5, "C", 6);
            if (v0)
            {
                v4.to_vec(v0 + 16, v2);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v18);
                v20 = v6;
                *((int128_t *)&v18) = *((int128_t *)&v4);
                core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
            }
            v4.to_vec(".", 1);
            v3 = v6;
            *((int128_t *)&v0) = *((int128_t *)&v4);
            v18.push(&v0, &g_14df090);
            v4.into_iter(&v18);
            v24.next(&v4);
            if (!((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63)))
            {
                do
                {
                    v14 = 0;
                    v16 = 4;
                    v17 = 0;
                    v0 = v25;
                    v2 = v0 + (long long)v26 * 4;
                    v34 = v0.next();
                    v35 = 0x110000;
                    if (v34 != 2)
                    {
                        v34.unwrap(v30, &g_14bd1b0);
                        v35 = v30;
                    }
                    v10 = v35;
                    if (!v10.slice_contains())
                    {
                        v0.to_vec(a3, a4);
                        v13 = v3;
                        memcpy(&v10, &v0, 16);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
                        v17 = v13;
                        v15 = v11;
                        v14.push(47);
                    }
                    v14.spec_extend(v0, v2);
                    fish::expand::expand_tilde(&v14, a5, a6);
                    if (!v17)
                    {
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
                    }
                    else
                    {
                        fish::wutil::normalize_path(&v0, 4, v17, 1);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
                        v17 = v3;
                        v36 = *((int128_t *)&v0);
                        v15 = v36;
                        v13 = v17;
                        v12 = v36;
                        fish::path::append_path_component(&v12, v8, a2);
                        v3 = v13;
                        v1 = v12;
                        v21.push(&v0, &g_14df0a8);
                    }
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
                    v24.next(&v4);
                } while (v24 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
        }
        else
        {
LABEL_13efd49:
            fish::wutil::path_normalize_for_cd(&v4, a3, a4, v8, a2);
            v21.push(&v4, &g_14df0c0);
        }
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v21);
    return a0;
}
