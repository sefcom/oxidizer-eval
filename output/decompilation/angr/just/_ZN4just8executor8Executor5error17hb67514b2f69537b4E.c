long long just::executor::Executor::error(struct_0 *a0, struct_3 *a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    int v0;  // [bp-0x80]
    int v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x60]
    int v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x38]
    struct_1 *v9;  // r13
    unsigned long long v10[3];  // rbx
    unsigned long long v11;  // rbp

    v7 = a2;
    if (a1->field_0)
    {
        if (a1->field_10)
        {
            (char)v1.to_vec(a1->field_10, a1->field_18);
            v6 = v2;
            v4 = v1;
        }
        else
        {
            v5 = 0x8000000000000000;
        }
        (char)v1.to_vec(a1->field_0, a1->field_8);
        *((unsigned long long *)((char *)&a0->field_38 + 8)) = v2;
        *((void*)&(&a0->field_30)[1]) = v1;
        a0->field_30 = v6;
        *((void*)&a0->field_20) = v4;
        a0->field_8 = a2;
        a0->field_10 = a3;
        a0->field_18 = v3;
        a0->field_0 = 43;
        return a4;
    }
    else
    {
        v9 = a1->field_8;
        (char)v1.clone(v9 + 1);
        v10 = v9->field_8;
        for (v11 = v9->field_10 * 48; v11; v10 += 2)
        {
            (char)v1.push(32);
            v11 -= 48;
            (char)v1.spec_extend(v10[1], v10[2] + v10[1]);
        }
        a0->field_30 = v2;
        *((void*)&a0->field_20) = v0;
        a0->field_8 = a2;
        a0->field_10 = a3;
        a0->field_18 = v3;
        a0->field_0 = 41;
        return a4;
    }
}
