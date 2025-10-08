long long bat::vscreen::Attributes::update_with_sgr(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb0]
    char v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98]
    unsigned long v4;  // [bp-0x90]
    unsigned long v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x80]
    void* v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned short v10;  // [bp-0x38]
    unsigned long long v12;  // rax
    unsigned long v13;  // r12
    unsigned long v14;  // r13
    char *v15;  // r15
    unsigned long v16;  // rsi
    unsigned long v17;  // r15

    v9.into_searcher(59, a1, a2);
    v7 = 0;
    v8 = a2;
    v10 = 1;
    a0->padding_d8[32] = 1;
    v12 = v7.next();
    if ((char)v12 == 2)
        return v12;
    v6 = (char *)&a0->field_90 + 8;
    v5 = &a0->padding_a8[8];
    v13 = &a0->field_88;
    v14 = &(&a0->padding_18)[1];
    v3 = &a0->padding_18;
    v4 = &a0->padding_18[24];
    v15 = &v1;
    do
    {
        if (((char)v12 & 1))
            goto LABEL_844cd0;
        v16 = (unsigned int)v12 >> 16;
        switch ((v16 & 65535) * 0x1000000000000)
        {
        case 0:
LABEL_844cd0:
            a0.sgr_reset();
        case 1:
            v15.to_vec(&g_48066c, 4);
            core::ptr::drop_in_place<alloc::string::String>(v14);
            *((unsigned long long *)(v14 + 16)) = v2;
            *((void*)v14) = v0;
            continue;
        case 2:
            v15.to_vec(&g_4817dc, 4);
            core::ptr::drop_in_place<alloc::string::String>(v13);
            *((unsigned long long *)(v13 + 16)) = v2;
            *((void*)v13) = v0;
            continue;
        case 3:
            v15.to_vec(&g_4802a8, 4);
            v17 = v5;
            goto LABEL_844e51;
        case 4:
            v15.to_vec(&g_480bb4, 4);
            v17 = v6;
            goto LABEL_844e51;
        case 22:
            *((unsigned long long *)((char *)&a0->field_78 + 8)) = 0;
            *((unsigned long long *)&a0->field_90) = 0;
            continue;
        case 23:
            *((unsigned long long *)&a0->field_c0) = 0;
            continue;
        case 24:
            *((unsigned long long *)&a0->padding_a8[0]) = 0;
            continue;
        default:
            if ((unsigned int)(v12 - 0x1e0000) < 0xa0000)
            {
                v15.parse_color(v16, &v7);
                core::ptr::drop_in_place<alloc::string::String>(a0);
                a0->field_10 = v2;
                *((void*)&a0->field_0) = v0;
                continue;
            }
            else
            {
                if ((unsigned int)(v12 - 0x280000) < 0xa0000)
                {
LABEL_844e1f:
                    v15.parse_color(v16, &v7);
                    v17 = v3;
                    goto LABEL_844e51;
                }
                if (((unsigned int)v12 & 0xfffe0000) == 0x3a0000)
                {
                    v15.parse_color(v16, &v7);
                    v17 = v4;
LABEL_844e51:
                    core::ptr::drop_in_place<alloc::string::String>(v17);
                    *((unsigned long long *)(v17 + 16)) = v2;
                    *((void*)v17) = v0;
                    v15 = &v1;
                    break;
                }
                else if ((unsigned int)(v12 - &g_5a0000) >= 0x80000)
                {
                    if (v12 - &g_640000 >= 0x80000)
                        continue;
                    goto LABEL_844e1f;
                }
            }
        }
        v12 = v7.next();
    } while ((char)v12 != 2);
    return v12;
}
