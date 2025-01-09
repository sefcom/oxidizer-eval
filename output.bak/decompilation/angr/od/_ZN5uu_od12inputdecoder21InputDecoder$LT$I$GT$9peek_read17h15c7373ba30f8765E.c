long long uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(struct_0 *a0, unsigned long long a1[7])
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx

    _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..peekreader..PeekRead$GT$::peek_read::h4ebaa1be718ea78e(&v0, a1[3], a1[1], a1[2], a1[4]);
    if (*((long long *)&v0))
    {
        a1 = *((long long *)&v1);
    }
    else
    {
        v4 = *((long long *)&v1);
        v5 = *((long long *)&v2);
        a1[5] = v4;
        a1[6] = v5;
        a0->field_8 = v4;
        a0->field_10 = v5;
    }
    a0->field_0 = a1;
    a0->field_18 = 3;
    return a0;
}
