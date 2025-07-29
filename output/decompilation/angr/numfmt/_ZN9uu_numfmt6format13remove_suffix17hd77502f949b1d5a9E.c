long long uu_numfmt::format::remove_suffix(unsigned long long a0[2], char a1, char a2, unsigned long a3)
{
    char v0;  // [bp-0x139]
    char *v1;  // [bp-0x138], Other Possible Types: char
    int v2;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x130]
    char *v4;  // [bp-0x128], Other Possible Types: unsigned long long
    char v5;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x118]
    unsigned long long v7;  // [bp-0x110]
    char v8;  // [bp-0x108], Other Possible Types: unsigned long long
    int v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0x100]
    int v11;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    unsigned long long v12;  // [bp-0xf0]
    int v13;  // [bp-0xe8], Other Possible Types: void*
    char v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xc8]
    unsigned long long v16;  // [bp-0xc0]
    unsigned long long v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xb0]
    int v19;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v20;  // [bp-0x98]
    int v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x78]
    int v23;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x60]
    struct struct_0 v25[8];  // [bp-0x58]
    unsigned long v26;  // [bp-0x50]
    char v27;  // [bp-0x48]
    unsigned long long v28;  // [bp-0x38]
    char v29;  // [bp-0x30]
    char v30;  // [bp-0x20]
    unsigned long v32;  // xmm0lq
    unsigned long v33;  // r8
    unsigned int v34;  // eax
    unsigned long long v35[2];  // rbx
    int v36;  // xmm1
    int v37;  // xmm2
    unsigned long long v38;  // rsi
    int v39;  // xmm1
    int v40;  // xmm2

    if (a2 == 2)
    {
        a0[1] = v32;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v33 = ((a3 - 2 & 4294967295 & 255) < 4 ? a3 - 2 & 4294967295 : 2);
    v34 = v33;
    if ((a2 & 1))
    {
        if (!(char)v33)
        {
            goto (long long)(g_417224[a1] + (char *)&g_417224[0]);
        }
        else if (v34 == 2 && ((char)a3 & 1))
        {
            goto (long long)(g_417224[a1] + (char *)&g_417224[0]);
        }
LABEL_4ad2b6:
        if ((char)a3 != 5)
            return uucore::mods::locale::get_message(a0, "numfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 40);
        v35 = a0;
        v0 = a1;
        (char)v2.to_vec("numbersuffixnumfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 6);
        (char)v9.spec_to_string(&v32);
        v22 = v4;
        memcpy(&v21, &v2, 16);
        *((int128_t *)&v23) = (int128_t)v9;
        v24 = v11;
        (char)v9.to_vec("suffixnumfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 6);
        v20 = v11;
        memcpy(&(char)v19, &(char)v9, 16);
        *((int *)&v25[0]) = ((a2 & 1) ? "inumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to" : 1);
        v26 = a2 & 1;
        v1 = &v0;
        v3 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
        v4 = &v25[0].field_0;
        v5 = <&T as core::fmt::Display>::fmt;
        v8 = &g_4151a8;
        v10 = 2;
        v13 = 0;
        v11 = &v1;
        v12 = 2;
        v29.map_or_else(&v8);
        v2 = v19;
        v4 = v20;
        memcpy(&v5, &v29, 16);
        v7 = *((long long *)&v30);
        v39 = *((int128_t *)&v22);
        v40 = (int128_t)(&v23)[8];
        v9 = v21;
        v11 = v39;
        v13 = v40;
        v17 = v6;
        v18 = v7;
        v15 = v4;
        v16 = v5;
        memcpy(&v14, &v2, 16);
        v1.from_iter(&v8);
        v38 = "numfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to";
    }
    else
    {
        if ((v33 & 255) < 2)
            goto (long long)(g_417204[a1] + (char *)&g_417204[0]);
        if (!(v34 == 2))
            goto LABEL_4ad2b6;
        if (((char)a3 & 1))
        {
            v35 = a0;
            v25->field_0 = a1;
            v1.to_vec("numbersuffixnumfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 6);
            v8.spec_to_string(&v32);
            v22 = v4;
            memcpy(&v21, &v2, 16);
            *((int128_t *)&v23) = *((int128_t *)&v8);
            v24 = v11;
            v8.to_vec("suffixnumfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 6);
            v20 = v11;
            memcpy(&v19, &v8, 16);
            *((unsigned long long **)&v2) = &(unsigned long long)v25;
            v3 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
            *((unsigned long long **)&v9) = &g_415500;
            v10 = 1;
            v13 = 0;
            v11 = &(unsigned long long)v2;
            v12 = 1;
            v27.map_or_else(&(unsigned long long)v9);
            v2 = v19;
            v4 = v20;
            memcpy(&v5, &v27, 16);
            v7 = v28;
            v36 = *((int128_t *)&v22);
            v37 = (int128_t)(&v23)[8];
            v9 = v21;
            v11 = v36;
            v13 = v37;
            v17 = v6;
            v18 = v7;
            v15 = v4;
            v16 = v5;
            memcpy(&v14, &v2, 16);
            (unsigned long long)v2.from_iter(&(unsigned long long)v9);
            v38 = "numfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to";
        }
        else
        {
            goto (long long)(g_417224[a1] + (char *)&g_417224[0]);
        }
    }
    return uucore::mods::locale::get_message_with_args(v35, v38, 29, &v1);
}
