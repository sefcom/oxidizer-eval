long long uu_od::inputdecoder::InputDecoder<I>::peek_read(struct_0 *a0, unsigned long long a1[7])
{
    char v0;  // [bp-0x28]
    unsigned long long v1[7];  // [bp-0x20], Other Possible Types: unsigned long
    char v2;  // [bp-0x18]
    unsigned long long v4[7];  // r14
    char v5;  // al
    unsigned long long v6;  // rdx

    v4 = a1;
    v0.peek_read(a1[3], a1[1], a1[2], a1[4]);
    if ((v0 & 1))
    {
        v5 = 3;
        v4 = v1;
    }
    else
    {
        v6 = *((long long *)&v2);
        a1[5] = v1;
        a1[6] = v6;
        a0->field_8 = v1;
        a0->field_10 = v6;
    }
    a0->field_0 = &v4[0];
    a0->field_18 = v5;
    return a0;
}
