long long fish::tinyexpr::te_interp(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x55]
    char v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x2f]
    unsigned int v7;  // [bp-0x2c]
    char v8;  // [bp-0x18]
    unsigned long long v10;  // xmm0lq
    char v11;  // al
    unsigned long long v12;  // rcx
    void* v13;  // rdx

    v2.new(a1, a2);
    v2.eval();
    if (*((int *)&v2) == 5)
    {
        a0->field_0 = v10;
        a0->field_10 = 10;
        return a0;
    }
    if (v5 == 10)
    {
        v11 = 3;
        v12 = *((long long *)&v8);
        v13 = 0;
    }
    else
    {
        v12 = v3;
        v13 = v4;
        v0 = *((int *)&v6);
        v1 = v7;
    }
    a0->field_0 = v12;
    a0->field_8 = v13;
    a0->field_10 = v11;
    *((unsigned int *)&a0->field_11[0]) = v0;
    *((unsigned int *)&a0->field_11[3]) = v1;
    return a0;
}
