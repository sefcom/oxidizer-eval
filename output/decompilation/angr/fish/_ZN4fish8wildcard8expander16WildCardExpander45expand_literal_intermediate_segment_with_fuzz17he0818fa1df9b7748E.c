long long fish::wildcard::expander::WildCardExpander::expand_literal_intermediate_segment_with_fuzz(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5, unsigned int *a6, unsigned long long a7, unsigned long long a8, unsigned long long a9)
{
    char v0;  // [bp-0xac]
    char v1;  // [bp-0xab]
    char v2;  // [bp-0xaa]
    char v3;  // [bp-0xa9]
    char v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v5[3];  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    int v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    void* v15;  // r12
    unsigned long long v16;  // rax
    char *v17;  // rbx
    unsigned long long v18[3];  // rdx
    char v19;  // al
    char v20;  // cl
    struct_2 *v21;  // r13
    unsigned long long v22;  // r14
    struct_2 *v23;  // rax
    struct_2 *v24;  // r15
    unsigned long v25;  // rax
    unsigned int v26;  // eax
    unsigned long long v27;  // rax

    v13 = a5;
    v14 = a4;
    v15 = a3;
    v16 = a0.interrupted_or_overflowed();
    if ((char)v16)
        return v16;
    v17 = &v4;
    while (true)
    {
        v4 = v15.next();
        v5[0] = v18;
        if (v4 == 2 || ((char)v4 & 1))
            break;
        core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(v17);
        if (!v18[1].eq(v18[2], "...", 1) && !v18[1].eq(v18[2], "..", 2))
        {
            v19 = fish::wcstringutil::string_fuzzy_match_string(v14, v13, v18[1], v18[2], 0);
            if (v19 != 3)
            {
                v20 = v19;
                v2 = v19;
                v3 = (char)v18;
                if ((char)v18 || v20)
                {
                    v1 = v20;
                    v0 = (char)v18;
                    if (v18.is_dir())
                    {
                        v4.to_vec(a8, a9);
                        (char)v7.add(&v4, v18[1], v18[2]);
                        v10.add(&(char)v7, "/", 1);
                        v4.to_vec(a1, a2);
                        v9 = v6;
                        *((int128_t *)&v7) = *((int128_t *)&v4);
                        v4.add(&(char)v7, v18[1], v18[2]);
                        (char)v7.add(&v4, "/", 1);
                        a0.expand(v8, v9, a6, a7, v11, v12, 1);
                        v21 = a0->field_80->field_10.index_mut(a0->field_80->field_10, a0->field_80->field_8, a0->field_80->field_10, &g_14e4ef8);
                        if (!!v21 && !!v18)
                        {
                            v22 = 0x38 * v18 + (char *)v21;
                            v23 = &v21[1].padding_0[4];
                            while (true)
                            {
                                v24 = v23;
                                v25 = v21->field_32;
                                if (!((char)v25 & 2))
                                {
                                    v21->field_32 = (unsigned short)v25 | 2;
                                    v21.prepend_token_prefix(v11, v12);
                                }
                                v26 = v2.rank();
                                if (v26 > (int)v21->field_30.rank())
                                {
                                    v21->field_30 = v1;
                                    v21->field_31 = v0;
                                }
                                v23 = &v24[1].padding_0[4];
                                if (v24 == v22)
                                    v23 = v24;
                                if (v24 == v22)
                                    break;
                                v21 = v24;
                                if (!v24)
                                    break;
                            }
                        }
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                    }
                }
            }
        }
        v27 = a0.interrupted_or_overflowed();
        v17 = &v4;
        if ((char)v27)
            return v27;
    }
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v4);
}
