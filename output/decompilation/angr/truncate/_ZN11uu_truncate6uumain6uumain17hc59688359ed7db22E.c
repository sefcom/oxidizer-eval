long long uu_truncate::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x679]
    unsigned long long v1;  // [bp-0x678]
    void* v2;  // [bp-0x670]
    int v3;  // [bp-0x668], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x660], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x658]
    char v6;  // [bp-0x650], Other Possible Types: unsigned long long
    char v7;  // [bp-0x648], Other Possible Types: unsigned long long
    char v8;  // [bp-0x644]
    unsigned long long v9;  // [bp-0x640]
    char v10;  // [bp-0x634]
    int v11;  // [bp-0x628]
    int v12;  // [bp-0x618], Other Possible Types: char
    char v13;  // [bp-0x608]
    int v14;  // [bp-0x5c8], Other Possible Types: void*, char, unsigned long long
    int v15;  // [bp-0x5c0], Other Possible Types: char
    unsigned long long v16;  // [bp-0x5b8]
    unsigned int v17;  // [bp-0x5b0]
    char v18;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x2f0]
    char v20;  // [bp-0x2ec]
    int v21;  // [bp-0x2dc]
    int v22;  // [bp-0x2d0]
    unsigned int v24;  // ecx
    char v25;  // al
    char v26;  // r14b
    unsigned long long v27;  // rax
    unsigned long long v28;  // r12
    char v29;  // r15b
    unsigned long long v30;  // r14
    unsigned long long v31;  // rax
    unsigned long long v32;  // rbx

    uu_truncate::uu_app(&v14);
    v18.after_help(&v14);
    v6.try_get_matches_from(&v18, a0, a1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return (unsigned int)uu_truncate::uumain::uumain::{{closure}}(*((long long *)&v7)).from();
    v24 = *((int *)&v7);
    memcpy(&v20, &v8, 16);
    *((int128_t *)&v21) = *((int128_t *)&v10);
    v22 = v11;
    v18 = v6;
    v19 = v24;
    v14.try_get_many(&v18, _ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE, g_4e4018);
    v13.unwrap(_ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE, g_4e4018, &v14);
    if (*((long long *)&v13))
    {
        v14.collect(&v13);
        *((int128_t *)&v3) = *((int128_t *)&v15);
        v2 = v14;
        if (!v4)
            goto LABEL_45215c;
        v25 = v18.get_flag(_ZN11uu_truncate7options9IO_BLOCKS17h060e566275d81ce7E, g_4e3fd8);
        v26 = v18.get_flag(_ZN11uu_truncate7options9NO_CREATE17h6f1c12c51793c0daE, g_4e3fe8);
        v14.try_get_one(&v18, _ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E, g_4e3ff8);
        v27 = _ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E.unwrap(g_4e3ff8, &v14);
        v28 = 0x8000000000000000;
        v0 = v25;
        if (v27)
        {
            v14.clone(v27);
            v29 = v26;
            v30 = v14;
            v1 = *((long long *)&v15);
            v5 = v16;
        }
        else
        {
            v29 = v26;
            v30 = 0x8000000000000000;
        }
        v14.try_get_one(&v18, _ZN11uu_truncate7options4SIZE17h76f346e109a09105E, g_4e4008);
        v31 = _ZN11uu_truncate7options4SIZE17h76f346e109a09105E.unwrap(g_4e4008, &v14);
        if (v31)
        {
            v14.clone(v31);
            v28 = v14;
            memcpy(&v12, &v15, 16);
        }
        v6 = v30;
        v7 = v1;
        v9 = v5;
        v14 = v28;
        v15 = v12;
        v32 = uu_truncate::truncate(v29, v0, &v6, &v14, v3, v4);
    }
    else
    {
        v2 = 0;
        v3 = 8;
        v4 = 0;
LABEL_45215c:
        v6.to_vec("missing file operandSIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000", 20);
        v16 = v9;
        *((int128_t *)&v14) = *((int128_t *)&v6);
        v17 = 1;
        v32 = v14.new();
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
    return v32;
}
