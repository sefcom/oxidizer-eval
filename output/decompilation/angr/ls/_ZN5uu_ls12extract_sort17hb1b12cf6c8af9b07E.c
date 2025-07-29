long long uu_ls::extract_sort(unsigned long long a0)
{
    struct struct_0 v0[8];  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x38]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v1.try_get_one(a0, _ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE, g_6a0e00);
    v6 = _ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE.unwrap(g_6a0e00, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        if (!(char)v7.equal(v8, "nonehelpmsecNonecallshimSlimname", 4))
        {
            v9 = v7.equal(v8, "name", 4);
            if ((char)v9)
                return v9 & 0xffffffffffffff00 | 1;
            v10 = v7.equal(v8, "timeHashtip:", 4);
            if ((char)v10)
                return v10 & 0xffffffffffffff00 | 3;
            v11 = v7.equal(v8, "size", 4);
            if ((char)v11)
                return v11 & 0xffffffffffffff00 | 2;
            v12 = v7.equal(v8, "versionextensionwidthinternal error: entered unreachable code: Invalid field for --sort", 7);
            if ((char)v12)
                return v12 & 0xffffffffffffff00 | 4;
            v13 = v7.equal(v8, "extensionwidthinternal error: entered unreachable code: Invalid field for --sort", 9);
            if ((char)v13)
                return v13 & 0xffffffffffffff00 | 5;
            v14 = v7.equal(v8, "widthinternal error: entered unreachable code: Invalid field for --sort", 5);
            if (!(char)v14)
            {
                v1 = &g_69f0a8;
                v2 = 1;
                v3 = &v0[0].field_0;
                v4 = 0;
                core::panicking::panic_fmt(&v1, &g_69f0b8); /* do not return */
            }
            return v14 & 0xffffffffffffff00 | 6;
        }
    }
    else
    {
        v15 = a0.get_flag(_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE, g_6a15b8);
        if ((char)v15)
            return v15 & 0xffffffffffffff00 | 3;
        v16 = a0.get_flag(_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE, g_6a15a8);
        if ((char)v16)
        {
            return v16 & 0xffffffffffffff00 | 2;
        }
        else if (!(char)a0.get_flag(_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E, g_6a15c8))
        {
            v17 = a0.get_flag(_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E, g_6a15d8);
            if ((char)v17)
                return v17 & 0xffffffffffffff00 | 4;
            v18 = a0.get_flag(_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E, g_6a15e8);
            return v18 & 0xffffffffffffff00 | (char)v18 * 4 + 1;
        }
    }
    return 0;
}
