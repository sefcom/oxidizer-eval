long long fish::input_common::InputEventQueuer::parse_escape_sequence(void* a0, unsigned long long a1, struct_0 *a2, char *a3)
{
    unsigned int v0;  // [bp-0x78]
    char v1;  // [bp-0x74]
    unsigned int v2;  // [bp-0x70]
    char v3;  // [bp-0x70], Other Possible Types: unsigned int
    char v4;  // [bp-0x6c]
    unsigned long long v5;  // [bp-0x6a]
    unsigned short v6;  // [bp-0x62]
    unsigned int v7;  // [bp-0x60]
    char v8;  // [bp-0x5c]
    int v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x52]
    unsigned short v11;  // [bp-0x4a]
    unsigned long long v12;  // [bp-0x48]
    unsigned short v13;  // [bp-0x40]
    int v14;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned short v15;  // [bp-0x30]
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    int v19;  // xmm0
    unsigned long v20;  // rdx
    unsigned int v21;  // eax
    char v22;  // al
    unsigned long v23;  // rdx
    char v25;  // dl
    unsigned long long v26;  // rax
    char v29[16];  // rax
    int v30;  // xmm0

    v17 = a2->field_10;
    if (v17 >= 3)
        core::panicking::panic("assertion failed: buffer.len() <= 2", 35, &g_14db180); /* do not return */
    v18 = a1.try_readb(a2);
    if (!((char)v18 & 1))
    {
        *((unsigned long long *)a0) = 62722;
        *((unsigned long long *)&a0[8]) = 0;
        return v18;
    }
    v9 = v19;
    if (v17 == 2)
    {
        if ((char)v20 == 27)
        {
            v3.parse_escape_sequence(a1, a2, a3);
            if (v3 == 0x110000)
            {
                v1 = (char)(&v9)[4];
                v0 = (int)v9;
                v12 = v10;
                v13 = v11;
            }
            else
            {
                v7 = v3;
                v8 = v4;
                v14 = v5;
                v15 = v6;
                if ((char)v3.eq(&(char)v9))
                {
                    *((unsigned long long *)a0) = 62722;
                    *((unsigned long long *)&a0[8]) = 0;
                    return v18;
                }
                v1 = v8;
                v0 = v7;
                v12 = v14;
                v13 = v15;
                v22 = 1;
            }
            *((char *)&a0[4]) = v1;
            *((unsigned int *)a0) = v0;
            *((char *)&a0[5]) = v22;
            *((unsigned long long *)&a0[6]) = v12;
            *((unsigned short *)&a0[14]) = v13;
            return v13;
        }
        v21 = v20;
        if (v21 == 79)
            goto LABEL_13cbd37;
LABEL_13cbd1d:
        if (v21 == 91)
        {
            v3.parse_csi(a1, a2);
        }
        else
        {
            v26 = fish::key::canonicalize_control_char(v25);
            if ((unsigned int)v26 != 0x110000)
            {
                *((unsigned long long *)a0) = v26 | 0x10000000000;
                *((unsigned long long *)&a0[8]) = 0;
                return v26 | 0x10000000000;
            }
            *(a3) = 1;
            *((unsigned int *)a0) = 0x110000;
            return v26;
        }
    }
    else if ((char)v23 != 79)
    {
        v21 = v23;
        if (v21 != 80)
            goto LABEL_13cbd1d;
        v3.parse_dcs(a1, a2);
    }
    else
    {
LABEL_13cbd37:
        v3.parse_ss3(a1, a2);
    }
    v29 = &(char)v9;
    if (v2 != 0x110000)
        v29 = &v3;
    v30 = *(v29);
    v14 = v30;
    *(a0) = v30;
    return v29;
}
