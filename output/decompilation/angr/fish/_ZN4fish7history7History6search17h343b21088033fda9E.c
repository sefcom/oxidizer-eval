long long fish::history::History::search(unsigned long long *a0, char a1, unsigned long long a2[2], unsigned long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, char a7, char a8, char a9, struct_0 *a10, unsigned long long a11[3])
{
    char v0;  // [bp-0x103]
    char v1;  // [bp-0x102]
    char v2;  // [bp-0x101]
    void* v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    void* v8;  // [bp-0xd0]
    unsigned long v9;  // [bp-0xc8]
    unsigned long v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long v12;  // [bp-0xb0]
    char v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    char *v16;  // [bp-0x80]
    char *v17;  // [bp-0x78]
    char *v18;  // [bp-0x70]
    char *v19;  // [bp-0x68]
    char *v20;  // [bp-0x60]
    unsigned long v21;  // [bp-0x58]
    char *v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v25[2];  // r15
    unsigned long v26;  // r12
    unsigned long long v27[2];  // r15
    unsigned long long v28;  // cc_ndep
    unsigned long long v29;  // cc_ndep
    unsigned long long v30[2];  // r15
    unsigned long long v31;  // 4097
    unsigned long long v32;  // cc_ndep
    unsigned long v34;  // cc_ndep

    v25 = a2;
    v14 = a4;
    v15 = a5;
    v1 = a8;
    v2 = a9;
    v11 = a6;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v0 = 0;
    v16 = &v11;
    v17 = &v14;
    v18 = &v1;
    v19 = &v2;
    v20 = &v6;
    v21 = a11[1];
    v22 = &v0;
    v9 = a11[1];
    if (a3)
    {
        v26 = *(a0);
        v10 = a10->field_0;
        v27 = v25;
        while (true)
        {
            v29 = v28;
            v30 = v27;
            if (!v30[1])
            {
                a11[2].append("S", 44);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v6);
                return 0;
            }
            v31 = atomic_fetch_add(v26);
            v32 = _ccall(20, v30[1], 0, v29);
            if ((char)_ccall(14, 24, v31 + 1, 0, _ccall(20, v30[1], 0, v29)))
                break;
            v12 = v26;
            v3.to_vec(v30[0], v30[1]);
            v24 = v5;
            memcpy(&v23, &v3, 16);
            fish::history::do_1_history_search(v26, a1, &v23, a7, &v16, v10, a10->field_8);
            v27 = v30 + 1;
            v28 = v32;
            if (v27 == &v25[a3])
                goto LABEL_13c3cf0;
        }
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(a0)) + 1, 0, _ccall(20, a3, 0, v34))))
    {
        v3 = 0;
        v4 = 4;
        v5 = 0;
        fish::history::do_1_history_search(*(a0), 7, &v3, 0, &v16, a10->field_0, a10->field_8);
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20725186()
    }
LABEL_13c3cf0:
    v3.into_iter(&v6);
    v13.next_back(&v3);
    if (!((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63)))
    {
        do
        {
            if (v0)
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                break;
            }
            if (!(char)v9.append(&v13))
                v0 = 1;
            v13.next_back(&v3);
        } while (*((long long *)&v13) != 0x8000000000000000);
    }
    return (unsigned long long)core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>>(&v3) & 0xffffffffffffff00 | 1;
}
