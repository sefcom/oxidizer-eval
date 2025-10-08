long long fish::wcstringutil::wcs2string_callback(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    char v2[16];  // [bp-0xd8], Other Possible Types: uint128_t
    char v3[16];  // [bp-0xd8]
    uint128_t v4;  // [bp-0xc8]
    uint128_t v5;  // [bp-0xb8]
    uint128_t v6;  // [bp-0xa8]
    uint128_t v7;  // [bp-0x98]
    uint128_t v8;  // [bp-0x88]
    uint128_t v9;  // [bp-0x78]
    uint128_t v10;  // [bp-0x68]
    uint128_t v11;  // [bp-0x58]
    uint128_t v12;  // [bp-0x48]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned int v16;  // edx
    unsigned int v17;  // ebp
    unsigned int v18;  // ebp
    char v19;  // al
    unsigned long long v20;  // r8
    unsigned int v22;  // ebp
    char v23;  // dl
    unsigned long long v24;  // rsi
    unsigned long long v25;  // r8
    char v26;  // dl

    v12 = 0;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v2 = 0;
    v14 = (unsigned long long)fish::libc::MB_CUR_MAX();
    v0 = a0;
    v1 = a0 + a1 * 4;
    v15 = v0.next();
    if ((unsigned int)v15 == 2)
    {
        return v15;
    }
    else if (v14 == 1)
    {
        do
        {
            v18 = v17;
            v15.unwrap(v18, &g_14bd1b0);
            if (v18 != 64984)
            {
                v19 = fish::wchar::decode_byte_from_char(v18);
                v20 = &g_14e4768;
                if ((v19 & 1))
                    v20 = &g_14e4738;
                *((int *)&v3) = (!(v19 & 1) ? (0x100 <= v18 ? 63 : (char)v18) : (char)v16);
                fish::common::wcs2zstring::{{closure}}(a2, 0.index(1, &v3, 32, v20), a2);
            }
            v15 = v0.next();
            v16 = v16;
        } while ((unsigned int)v15 != 2);
        return v15;
    }
    else
    {
        do
        {
            v22 = v17;
            v15.unwrap(v22, &g_14bd1b0);
            if (v22 == 64984)
                continue;
            if ((fish::wchar::decode_byte_from_char(v22) & 1))
            {
                *(v2) = v23;
                v24 = 1;
                v25 = &g_14e4738;
                goto LABEL_14237ba;
            }
            else
            {
                v4 = 0;
                v2 = 0;
                v24 = wcrtomb(&v2, v22, &v5);
                if (v24 != -1)
                {
                    v25 = &g_14e4750;
LABEL_14237ba:
                    fish::common::wcs2zstring::{{closure}}(a2, 0.index(v24, v26, 32, v25), a2);
                }
                else
                {
                    fish::wcstringutil::wcs2string_bad_char(v22);
                    v12 = 0;
                    v11 = 0;
                    v10 = 0;
                    v9 = 0;
                    v8 = 0;
                    v7 = 0;
                    v6 = 0;
                    v5 = 0;
                }
            }
            v15 = v0.next();
            v17 = v23;
        } while ((unsigned int)v15 != 2);
        return v15;
    }
}
