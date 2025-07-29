long long uu_test::integers(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x48], Other Possible Types: char
    char v7;  // [bp-0x38]
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r12
    unsigned long long v11;  // r15
    unsigned long long v12;  // rax
    char v13;  // al
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // 4098
    unsigned long long v18;  // cc_dep2
    unsigned long long v19;  // cc_ndep
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // 4098
    unsigned long long v24;  // rax

    v0.try_from(a1, a2);
    if (!(v0 & 1))
    {
        core::num::<impl i128>::from_str_radix(&v0, v1, v2);
        if (!(!v0))
            goto LABEL_499f07;
        v8 = v2;
        v9 = *((long long *)&v3);
        v0.try_from(a3, a4);
        if (!(v0 & 1))
        {
            core::num::<impl i128>::from_str_radix(&v0, v1, v2);
            if (!v0)
            {
                v0.try_from(a5, a6);
                if ((v0 & 1))
                {
                    v0 = 1;
                    v1 = a5;
                    v2 = a6;
                    v3 = 1;
                    v22 = a0->field_8.spec_to_string(&v0);
                    a0->field_0 = 4;
                    return v22;
                }
                v4 = v2;
                v5 = *((long long *)&v3);
                v10 = v1;
                v11 = v2;
                v12 = v10.equal(v11, "-eq-ne-gt-ge-lt-le-ef-nt-ot", 3);
                if ((char)v12)
                {
                    v13 = !(v9 ^ v5) && !(v8 ^ v4);
                    v14 = v12 & 0xffffffffffffff00 | v13;
                }
                else
                {
                    v15 = v10.equal(v11, "-ne-gt-ge-lt-le-ef-nt-ot", 3);
                    if ((char)v15)
                    {
                        v13 = (v9 ^ v5) || (v8 ^ v4);
                        v14 = v15 & 0xffffffffffffff00 | v13;
                    }
                    else
                    {
                        v16 = v10.equal(v11, "-gt-ge-lt-le-ef-nt-ot", 3);
                        if ((char)v16)
                        {
                            v17 = v4;
                            v5 = v5 - v9 - (v17 < v8);
                            v18 = v9 ^ v17 < v8;
                            v19 = v17 < v8;
                            goto LABEL_49a08f;
                        }
                        else
                        {
                            v20 = v10.equal(v11, "-ge-lt-le-ef-nt-ot", 3);
                            if ((char)v20)
                            {
                                v13 = amd64g_calculate_condition(13, 16, v9, v5 ^ (unsigned long long)(char)(v8 < v4), (unsigned long long)(char)(v8 < v4));
                                v14 = v20 & 0xffffffffffffff00 | v13;
                            }
                            else
                            {
                                v16 = v10.equal(v11, "-lt-le-ef-nt-ot", 3);
                                if ((char)v16)
                                {
                                    v18 = v5 ^ v8 < v4;
                                    v19 = v8 < v4;
                                    v5 = v9;
LABEL_49a08f:
                                    v13 = amd64g_calculate_condition(12, 16, v5, v18, v19);
                                    v14 = v16 & 0xffffffffffffff00 | v13;
                                }
                                else
                                {
                                    v21 = v10.equal(v11, "-le-ef-nt-ot", 3);
                                    if (!(char)v21)
                                    {
                                        v0 = 1;
                                        v1 = a5;
                                        v2 = a6;
                                        v3 = 1;
                                        v22 = a0->field_8.spec_to_string(&v0);
                                        a0->field_0 = 4;
                                        return v22;
                                    }
                                    v23 = v4;
                                    v5 = v5 - v9 - (v23 < v8);
                                    v13 = amd64g_calculate_condition(13, 16, v5, v9 ^ (unsigned long long)(v23 < v8), (unsigned long long)(v23 < v8));
                                    v14 = v21 & 0xffffffffffffff00 | v13;
                                }
                            }
                        }
                    }
                }
                a0->field_8 = v13;
                a0->field_0 = 7;
                return v14;
            }
        }
        v0 = 1;
        v1 = a3;
        v2 = a4;
    }
    else
    {
LABEL_499f07:
        v0 = 1;
        v1 = a1;
        v2 = a2;
    }
    v3 = 1;
    v6.spec_to_string(&v0);
    v24 = *((long long *)&v7);
    a0->field_0 = 5;
    *((void*)&a0->field_8) = v6;
    a0->field_18 = v24;
    return v24;
}
