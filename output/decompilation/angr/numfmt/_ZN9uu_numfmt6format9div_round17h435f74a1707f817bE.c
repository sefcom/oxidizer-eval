long long uu_numfmt::format::div_round(char a0)
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp-0x1]
    unsigned long v3;  // rax
    unsigned long v4;  // xmm0lq
    unsigned long v5;  // xmm1lq

    v0 = v3;
    v1 = a0;
    if ((((char)(CmpF(0x4024000000000000, 9223372036854775807 & (unsigned long long)(DivV(v4, v5))) & 69) | (char)((CmpF(0x4024000000000000, 9223372036854775807 & (unsigned long long)(DivV(v4, v5))) & 69) >> 6)) & 1) != 1)
        v1.round();
    else
        v1.round();
    return v0;
}
