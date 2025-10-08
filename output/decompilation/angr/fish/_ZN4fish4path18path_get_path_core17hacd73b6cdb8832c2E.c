long long fish::path::path_get_path_core(void* a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0xc0]
    unsigned int v1;  // [bp-0xbc]
    unsigned int v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb8]
    int v4;  // [bp-0xb8]
    void* v5;  // [bp-0xa8]
    int v6;  // [bp-0xa8], Other Possible Types: void*
    unsigned int v7;  // [bp-0xa0]
    unsigned int v8;  // [bp-0x9c]
    int v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long v11;  // [bp-0x88]
    void* v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    void* v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    char *v16;  // [bp-0x60]
    int v17;  // [bp-0x58]
    int v18;  // [bp-0x58]
    int v19;  // [bp-0x58]
    void* v20;  // [bp-0x48]
    unsigned long long v21;  // [bp-0x38]
    void* v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm1
    unsigned int v26;  // eax
    unsigned int v27;  // edx
    char *v28;  // rdi
    int v29;  // xmm0
    void* v30;  // r13
    unsigned long long v31;  // rdx

    v15 = 8589934593;
    v12 = 0;
    v13 = 4;
    v14 = 0;
    if (!a2)
    {
        *((void* *)&a0[16]) = v14;
        *((unsigned long long *)&a0[24]) = 8589934593;
        *((void* *)a0) = v12;
        *((unsigned long long *)&a0[8]) = 4;
        return v12;
    }
    v2 = 0;
    v23 = v2.slice_contains(a1, a2);
    if ((char)v23)
    {
        v24 = *((int128_t *)&v12);
        v25 = *((int128_t *)&v14);
    }
    else
    {
        v3 = 47;
        v23 = v3.slice_contains(a1, a2);
        if ((char)v23)
        {
            v26 = fish::path::path_get_path_core::{{closure}}(a1, a2);
            v3.to_vec(a1, a2);
            *((void* *)&a0[16]) = v6;
            *(a0) = v4;
            *((unsigned int *)&a0[24]) = v26 & 1;
            *((unsigned int *)&a0[28]) = v27;
            v28 = &v12;
            return (unsigned long long)core::ptr::drop_in_place<fish::path::BaseDirectory>(v28);
        }
        v29 = *((int128_t *)&v12);
        *((int128_t *)&v6) = *((int128_t *)&v14);
        v24 = v29;
        if (a4)
        {
            v1 = v7;
            v0 = v8;
            v21 = a4 * 24;
            v30 = 0;
            v16 = &v24;
            do
            {
                v23 = *((long long *)(8 + a3 + (char *)v30)).index(*((long long *)(16 + a3 + (char *)v30)));
                v18 = v17;
                if (v31)
                {
                    v17.to_vec(v23, a2);
                    v11 = v20;
                    v9 = v17;
                    fish::path::append_path_component(&(char)v9, a1, a2);
                    if (!((char)fish::path::path_get_path_core::{{closure}}(v10, v11) & 1))
                    {
                        *((unsigned long *)&a0[16]) = v11;
                        *((int128_t *)a0) = (int128_t)v9;
                        *((unsigned int *)&a0[24]) = 0;
                        v28 = &v24;
                        return (unsigned long long)core::ptr::drop_in_place<fish::path::BaseDirectory>(&v24);
                    }
                    else if ((unsigned int)v31 == 2 || !((char)v1 & 1) || v0 != 2 || (int)fish::wutil::waccess(fish::wutil::wdirname(v10, v11), v31, 1))
                    {
                        v23 = (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v9);
                    }
                    else
                    {
                        v20 = v11;
                        memcpy(&v18, &v9, 16);
                        core::ptr::drop_in_place<fish::path::BaseDirectory>(&v24);
                        v23 = v20;
                        v5 = v23;
                        v24 = v19;
                        v7 = 1;
                        v8 = v31;
                        v1 = 1;
                        v0 = v31;
                        v18 = v19;
                    }
                }
                v30 += 24;
            } while (v21 != v30);
        }
        v25 = (int128_t)v6;
    }
    a0[16] = v25;
    *(a0) = v24;
    return v23;
}
