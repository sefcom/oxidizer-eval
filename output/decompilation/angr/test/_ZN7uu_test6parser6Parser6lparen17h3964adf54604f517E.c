void uu_test::parser::Parser::lparen(struct_0 *a0, void* a1)
{
    void* v0;  // [bp-0x150], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x148]
    char *v2;  // [bp-0x140]
    unsigned long v3;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x118]
    void* v6;  // [bp-0x110], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0x108]
    unsigned long v8;  // [bp-0xf8]
    char *v9;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v10;  // [bp-0xe8]
    char v11;  // [bp-0xc8]
    void* v12;  // [bp-0xc0]
    unsigned long v13;  // [bp-0xb8]
    int v14;  // [bp-0xb0], Other Possible Types: char
    unsigned long v15;  // [bp-0xa0]
    unsigned long long v16[1][5];  // [bp-0x98]
    unsigned long long v17[1][5];  // [bp-0x70]
    unsigned long long v18[1][5];  // [bp-0x48]
    unsigned long v20;  // r12
    int v21;  // xmm0

    v0.clone(a1 + 24);
    v5 = 3;
    v11.collect(&v0);
    switch (v13)
    {
    case 0:
        v0 = 0;
        v9.into_literal(&v0);
        v6.literal(a1, &v9);
        goto LABEL_457b0b;
    case 1:
        v6 = v12;
        v9 = &v6;
        v10 = <&T as core::fmt::Display>::fmt;
        v0 = &g_417330;
        v1 = 1;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        v14.map_or_else(&v0);
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v15;
        *((void*)&(&a0->field_0)[1]) = v14;
        a0->field_0 = 3;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
        return;
    case 2:
        if (*((int *)v6) == 4)
        {
            if ((long long)v6[40] != 3)
                goto LABEL_457ae1;
            if ((char)(long long)v6[56].eq((long long)v6[64]))
                goto LABEL_4579f5;
            if (!(char)(long long)v6[56].eq((long long)v6[64]))
                goto LABEL_457ae1;
LABEL_457a98:
            v17.next_token(a1);
            v0.literal(a1, &v17);
            if (v0 != 7)
            {
                *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
                *((void*)&(&a0->field_0)[1]) = v21;
                a0->field_0 = v0;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
                return;
            }
            v0.expect(a1);
            break;
        }
        else
        {
            if ((long long)v6[40] == 3 && (char)(long long)v6[56].eq((long long)v6[64]))
                goto LABEL_457a98;
            goto LABEL_457b26;
        }
    case 3:
        v20 = *((long long *)v6);
        if (v20 == 4)
        {
            if ((int)v6[40] != 3 || !(char)(long long)v6[56].eq((long long)v6[64]))
                goto LABEL_457a24;
LABEL_4579f5:
            v0 = 0;
            v9.into_literal(&v0);
            v6.literal(a1, &v9);
            goto LABEL_457b0b;
        }
        if ((unsigned int)v20 == 5 && (int)v6[80] == 3 && (char)(long long)v6[96].eq((long long)v6[104]))
        {
            v16.next_token(a1);
            a1.uop(&v16);
            v0.expect(a1);
            break;
        }
        else
        {
LABEL_457a24:
            if ((long long)v6[40] != 3)
            {
                if ((int)(long long)v6[40] != 4)
                    goto LABEL_457adb;
                if ((unsigned int)v20 != 4)
                    goto LABEL_457b26;
                v18.next_token(a1);
                v0.literal(a1, &v18);
                if (v0 != 7)
                {
                    *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
                    *((void*)&(&a0->field_0)[1]) = v21;
                    a0->field_0 = v0;
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
                    return;
                }
                v0.expect(a1);
                break;
            }
            else
            {
                if ((char)(long long)v6[56].eq((long long)v6[64]))
                    goto LABEL_457a98;
LABEL_457adb:
                if ((unsigned int)v20 == 4)
                {
LABEL_457ae1:
                    v0 = 0;
                    v9.into_literal(&v0);
                    v6.literal(a1, &v9);
LABEL_457b0b:
                    if (v6 == 7)
                    {
                        a0->field_0 = 7;
                        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
                        return;
                    }
                    *((unsigned long *)((char *)&a0->field_8 + 8)) = v8;
                    *((void*)&(&a0->field_0)[1]) = v7;
                    a0->field_0 = v6;
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
                    return;
                }
                goto LABEL_457b26;
            }
        }
    default:
LABEL_457b26:
        v0.expr(a1);
        if (v0 != 7)
        {
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
            *((void*)&(&a0->field_0)[1]) = v21;
            a0->field_0 = v0;
            core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
            return;
        }
        v0.expect(a1);
    }
    if (v0 != 7)
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
        *((void*)&(&a0->field_0)[1]) = v21;
        a0->field_0 = v0;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
        return;
    }
    a0->field_0 = 7;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
    return;
}
