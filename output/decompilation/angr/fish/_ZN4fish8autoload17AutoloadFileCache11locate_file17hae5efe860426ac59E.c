long long fish::autoload::AutoloadFileCache::locate_file(void* a0, unsigned long long a1[3], unsigned long a2, unsigned int *a3, unsigned long a4, char a5, char a6)
{
    int v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    void* v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    int v5;  // [bp-0x100], Other Possible Types: char
    unsigned long long v6;  // [bp-0xf0]
    int v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xc8]
    int v10;  // [bp-0xc0], Other Possible Types: char
    char v11;  // [bp-0xb0]
    char v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x90]
    int v14;  // [bp-0x88], Other Possible Types: char
    unsigned long long v15;  // [bp-0x78]
    int v16;  // [bp-0x70]
    int v17;  // [bp-0x60]
    int v18;  // [bp-0x58]
    char v19;  // [bp-0x50]
    unsigned long v20;  // [bp-0x48]
    unsigned long long v21;  // [bp-0x40]
    unsigned long long v22[3];  // r15
    unsigned long long v23;  // r12
    void* v24;  // rbx
    unsigned long long v25[3];  // r15
    char v26;  // bl
    unsigned long long v27[3];  // r15
    unsigned long long v28[3];  // r15
    void* v29;  // r13

    if (!a4)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        return 9223372036854775809;
    }
    else if (*(a3))
    {
        v22 = a1;
        v23 = a2 * 3;
        v4 = &a3[a4];
        if (a5 == 2)
        {
            if (a2)
            {
                v3 = a0;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, a1[1], a1[2]);
                v7 = v5;
                v0 = v5;
                v2 = v6;
                (char)v0.push(47);
                (char)v0.spec_extend(a3, v4);
                (char)v0.extend(".fish/", "/");
                fish::wutil::fileid::file_id_for_path(&v10, v1, v2);
                if (!v10.eq(&g_9f9ad0))
                {
                    v15 = v2;
                    memcpy(&v14, &v0, 16);
                    v21 = v13;
                    memcpy(&v19, &v12, 16);
                    *((int128_t *)&v17) = *((int128_t *)&v11);
                    v16 = v10;
                    *(v3) = v14;
                    *((unsigned long long *)&v3[16]) = v15;
                    *((long long *)&v3[24]) = (long long)v16;
                    *((int128_t *)&v3[32]) = (int128_t)(&v16)[8];
                    v3[48] = v18;
                    *((unsigned long *)&v3[64]) = v20;
                    *((unsigned long long *)&v3[72]) = v21;
                    return v21;
                }
                v24 = 0;
                while (v23 * 8 - 24 != v24)
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, *((long long *)(a1 + v24 + 32)), *((long long *)(a1 + v24 + 40)));
                    v8 = v6;
                    v7 = v5;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                    v2 = v8;
                    v0 = v7;
                    (char)v0.push(47);
                    (char)v0.spec_extend(a3, v4);
                    (char)v0.extend(".fish/", "/");
                    fish::wutil::fileid::file_id_for_path(&v10, v1, v2);
                    v24 += 24;
                    if (!v10.eq(&g_9f9ad0))
                    {
                        v15 = v2;
                        memcpy(&v14, &v0, 16);
                        v21 = v13;
                        memcpy(&v19, &v12, 16);
                        *((int128_t *)&v17) = *((int128_t *)&v11);
                        v16 = v10;
                        *(v3) = v14;
                        *((unsigned long long *)&v3[16]) = v15;
                        *((long long *)&v3[24]) = (long long)v16;
                        *((int128_t *)&v3[32]) = (int128_t)(&v16)[8];
                        v3[48] = v18;
                        *((unsigned long *)&v3[64]) = v20;
                        *((unsigned long long *)&v3[72]) = v21;
                        return v21;
                    }
                }
            }
            else
            {
                *((unsigned long long *)a0) = 9223372036854775809;
                return 9223372036854775809;
            }
        }
        else
        {
            if ((a5 & 1))
            {
                v3 = a0;
                v25 = v22;
                do
                {
                    do
                    {
                        v27 = v25;
                        if (v27 == &v22[v23])
                        {
                            *((unsigned long long *)v3) = 9223372036854775809;
                            if ((v26 & 1))
                                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                            return 9223372036854775809;
                        }
                        v25 = v27 + 1;
                    } while (a6 != v27[1].ends_with(v27[2], "/", 22));
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v28[2], v28[1]);
                    v8 = v6;
                    v7 = v5;
                    if ((v26 & 1))
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                    v2 = v8;
                    v0 = v7;
                    (char)v0.push(47);
                    (char)v0.spec_extend(a3, v4);
                    (char)v0.extend(".fish/", "/");
                    fish::wutil::fileid::file_id_for_path(&v10, v1, v2);
                    v26 = 1;
                    v25 = v28;
                } while (v10.eq(&g_9f9ad0));
                v15 = v2;
                memcpy(&v14, &v0, 16);
                v21 = v13;
                memcpy(&v19, &v12, 16);
                *((int128_t *)&v17) = *((int128_t *)&v11);
                v16 = v10;
                *(v3) = v14;
                *((unsigned long long *)&v3[16]) = v15;
                *((long long *)&v3[24]) = (long long)v16;
                *((int128_t *)&v3[32]) = (int128_t)(&v16)[8];
                v3[48] = v18;
                *((unsigned long *)&v3[64]) = v20;
                *((unsigned long long *)&v3[72]) = v21;
                return v21;
            }
            else if (a2)
            {
                v3 = a0;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v5, a1[1], a1[2]);
                v7 = v5;
                v0 = v5;
                v2 = v6;
                (char)v0.push(47);
                (char)v0.spec_extend(a3, v4);
                (char)v0.extend(".fish/", "/");
                fish::wutil::fileid::file_id_for_path(&v10, v1, v2);
                if (!v10.eq(&g_9f9ad0))
                {
                    v15 = v2;
                    memcpy(&v14, &v0, 16);
                    v21 = v13;
                    memcpy(&v19, &v12, 16);
                    *((int128_t *)&v17) = *((int128_t *)&v11);
                    v16 = v10;
                    *(v3) = v14;
                    *((unsigned long long *)&v3[16]) = v15;
                    *((long long *)&v3[24]) = (long long)v16;
                    *((int128_t *)&v3[32]) = (int128_t)(&v16)[8];
                    v3[48] = v18;
                    *((unsigned long *)&v3[64]) = v20;
                    *((unsigned long long *)&v3[72]) = v21;
                    return v21;
                }
                v9 = v23 * 8 - 24;
                v29 = 0;
                while (v9 != v29)
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v5, *((long long *)(a1 + v29 + 32)), *((long long *)(a1 + v29 + 40)));
                    v8 = v6;
                    v7 = v5;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                    v2 = v8;
                    v0 = v7;
                    (char)v0.push(47);
                    (char)v0.spec_extend(a3, v4);
                    (char)v0.extend(".fish/", "/");
                    fish::wutil::fileid::file_id_for_path(&v10, v1, v2);
                    v29 += 24;
                    if (!v10.eq(&g_9f9ad0))
                    {
                        v15 = v2;
                        memcpy(&v14, &v0, 16);
                        v21 = v13;
                        memcpy(&v19, &v12, 16);
                        *((int128_t *)&v17) = *((int128_t *)&v11);
                        v16 = v10;
                        *(v3) = v14;
                        *((unsigned long long *)&v3[16]) = v15;
                        *((long long *)&v3[24]) = (long long)v16;
                        *((int128_t *)&v3[32]) = (int128_t)(&v16)[8];
                        v3[48] = v18;
                        *((unsigned long *)&v3[64]) = v20;
                        *((unsigned long long *)&v3[72]) = v21;
                        return v21;
                    }
                }
            }
            else
            {
                *((unsigned long long *)a0) = 9223372036854775809;
                return 9223372036854775809;
            }
        }
        *((unsigned long long *)v3) = 9223372036854775809;
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
    }
    else
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        return 9223372036854775809;
    }
}
