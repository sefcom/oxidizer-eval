long long uu_fmt::linebreak::restart_active_breaks::h2b91feff430673ac(struct_2 *a0, struct_1 *a1, unsigned long long a2, unsigned int a3, char a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x38]
    struct_0 *v1;  // [bp+0x8]
    char v2;  // [bp+0x10]
    char v3;  // [bp+0x18]
    struct_0 *v4;  // rax
    unsigned int v5;  // ymm0
    char v6;  // bpl
    unsigned long long v9;  // rax

    v4 = v1;
    v5 = 0xbf800000;
    if (a4)
    {
        v6 = 0;
    }
    else
    {
        v0 = v4->field_28;
        v6 = 0;
        v9 = v0;
        if (*((long long *)&v2) + a3 + uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(a1, v4, a3, 0) + v9 - a1->field_30 <= *((long long *)&v3) - a3)
        {
            v4 = v1;
            v5 = 0xbf800000;
        }
        else
        {
            v6 = 1;
            v5 = 0x3f800000;
            v4 = v1;
        }
    }
    a0->field_0 = a5;
    a0->field_8 = v4;
    a0->field_24 = v6;
    a0->field_10 = 0;
    a0->field_20 = v5;
    a0->field_18 = a2 + v9;
    a0->field_25 = v6 ^ 1;
    return v4;
}
