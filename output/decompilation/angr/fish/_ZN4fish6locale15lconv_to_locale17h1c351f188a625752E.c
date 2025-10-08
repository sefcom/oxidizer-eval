void fish::locale::lconv_to_locale(struct_4 *a0, struct_0 *a1)
{
    char v1[2];  // rcx
    unsigned int v2;  // eax
    unsigned long v3;  // rdx
    char v4[2];  // rdx
    unsigned int v5;  // ecx
    unsigned int v6;  // r8d
    char v7[4];  // rdx
    unsigned int v8;  // edx
    char v9;  // r8b
    unsigned int v10;  // esi
    unsigned int v11;  // r9d
    unsigned int v12;  // r10d
    unsigned int v13;  // r10d

    v1 = a1->field_0;
    v2 = 46;
    if (v1)
    {
        v3 = v1[0];
        if ((char)v3 > 0)
            v2 = (!v1[1] ? (unsigned int)v3 & 255 : 46);
    }
    v4 = a1->field_8;
    v5 = 0x110000;
    if (v4)
    {
        v6 = v4[0];
        if (v6 > 0)
            v5 = (!v4[1] ? v6 & 255 : 0x110000);
    }
    v7 = a1->field_10;
    if (!a1->field_10)
        v7 = &g_9f6b7a[0];
    v8 = v7[0];
    v9 = 1;
    switch (v8)
    {
    case 0:
        break;
    case 127:
        v10 = 0;
        v8 = 0;
        v11 = 0;
        goto LABEL_13d646c;
    default:
        v10 = v7[1];
        switch (v10)
        {
        case 0:
            v13 = v8;
            v10 = v8;
            v11 = v8;
            a0->field_0 = v2;
            a0->field_4 = v5;
            *((unsigned long *)&a0->field_8) = v8 | v10 * 0x100 | v11 * 0x10000 | v13 * &g_1000000;
            a0->field_c = 1;
            return;
        case 127:
            v10 = 0;
            v11 = 0;
            break;
        default:
            v11 = v7[2];
            switch (v11)
            {
            case 0:
                v13 = v10;
                v11 = v10;
                break;
            case 127:
                v11 = 0;
                break;
            default:
                switch (v12)
                {
                case 0:
                    v13 = v11;
                    break;
                case 127:
LABEL_13d646c:
                    v9 = 0;
                    v13 = 0;
                    break;
                default:
                    v9 = 0;
                    v13 = v7[3];
                    break;
                }
            }
            a0->field_0 = v2;
            a0->field_4 = v5;
            *((unsigned long *)&a0->field_8) = v8 | v10 * 0x100 | v11 * 0x10000 | v13 * &g_1000000;
            a0->field_c = v9;
            return;
        }
    }
}
