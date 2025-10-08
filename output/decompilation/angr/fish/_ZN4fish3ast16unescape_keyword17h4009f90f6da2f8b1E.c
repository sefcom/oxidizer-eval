long long fish::ast::unescape_keyword(struct_0 *a0, char a1, void* a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x168]
    void* v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned int v5;  // eax
    unsigned int v6;  // edx
    unsigned int v7;  // r12d
    void* v8;  // cc_ndep
    char v9;  // bpl
    unsigned long v10;  // r12
    unsigned int v11;  // eax
    unsigned int v12;  // edx
    void* v14;  // rax
    void* v16;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v18;  // r12

    if (a1 == 1)
    {
        v1 = a2;
        v2 = a2 + a3 * 4;
        v5 = v1.next();
        if (v5 == 2)
        {
            a0->field_8 = a2;
            a0->field_10 = a3;
            a0->field_0 = 0x8000000000000000;
            return 0x8000000000000000;
        }
        v5.unwrap(v6, &g_14bd1b0);
        if ((char)fish::ast::is_keyword_char(v6))
        {
            do
            {
                if (!(v9 & 1))
                {
                    v10 = v7 - 34;
                    if ((unsigned int)v10 <= 58)
                    {
                        v0 = 288230376151711777;
                        v8 = 0;
                        if ((*((char *)&v0 + ((v10 & 63) >> 3)) >> ((char)v10 & 63 & 7) & 1))
                            goto LABEL_132ed20;
                    }
                    v11 = v1.next();
                    if (v11 == 2)
                    {
                        a0->field_8 = a2;
                        a0->field_10 = a3;
                        a0->field_0 = 0x8000000000000000;
                        return 0x8000000000000000;
                    }
                    v12 = v6;
                }
                else
                {
LABEL_132ed20:
                    v11 = v1.next();
                    if (v11 != 2)
                    {
                        v9 = 1;
                        v12 = v6;
                    }
                    else
                    {
                        fish::common::unescape_string(&v1, a2, a3, 0, 0);
                        if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                            v14 = 0;
                        else
                            v14 = v1;
                        v16 = v14;
                        if ((char)_ccall(1, 8, 0, v1, v8))
                        {
                            v17 = v2;
                            if (!((char)_ccall(1, 8, 0, v1, v8)))
                            {
                                a0->field_0 = v16;
                                a0->field_8 = v17;
                                a0->field_10 = 0;
                                return v16;
                            }
                        }
                        else
                        {
                            v17 = 4;
                            if (!((char)_ccall(1, 8, 0, v1, v8)))
                            {
                                a0->field_0 = v16;
                                a0->field_8 = 4;
                                a0->field_10 = 0;
                                return v16;
                            }
                        }
                        v18 = *((long long *)&v3);
                        a0->field_0 = v16;
                        a0->field_8 = v17;
                        a0->field_10 = v18;
                        return v16;
                    }
                }
                v7 = v12;
                v11.unwrap(v7, &g_14bd1b0);
            } while ((char)fish::ast::is_keyword_char(v7));
        }
    }
    a0->field_8 = 4;
    a0->field_10 = 0;
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
