long long uu_fmt::linebreak::restart_active_breaks(struct_1 *a0, struct_2 *a1, unsigned long long a2, unsigned int a3, char a4, unsigned long long a5, struct_0 *a6, unsigned long a7, unsigned long a8)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // ymm0
    unsigned long long v2;  // rax
    char v3;  // bpl

    v1 = 0xbf800000;
    if (!(a4 & 1))
    {
        v0 = a6->field_28;
        v2 = a1.compute_width(a6, a3, 0);
        if (a7 + a3 + v2 + v0 - a1->field_30 > a8 - a3)
        {
            a2 += v0;
            v3 = 1;
            v1 = 0x3f800000;
        }
        else
        {
            v1 = 0xbf800000;
        }
    }
    a0->field_0 = a5;
    a0->field_8 = a6;
    a0->field_24 = v3;
    a0->field_10 = 0;
    a0->field_20 = v1;
    a0->field_18 = a2;
    a0->field_25 = v3 ^ 1;
    return a6;
}
