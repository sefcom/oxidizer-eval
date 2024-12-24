long long uu_tr::operation::Sequence::parse_char_star::h49afe3e972353324(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long v4;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    unsigned long long v7;  // [sp-0x10]
    char v9;  // al
    unsigned long long v10;  // rax
    int v11;  // xmm0

    v4 = "[";
    v5 = 1;
    v6 = "*]";
    v7 = 2;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::h9c0428d285db1fb1(&v0, &v4, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v11 = *((int128_t *)&v0);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v2);
        *((void*)&(&a0->field_0)[1]) = v11;
        v10 = 1;
    }
    else
    {
        v9 = v3;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        *((long long *)((char *)&a0->field_8 + 8)) = 9223372036854775819;
        *((char *)&a0->field_18) = 2;
        *((char *)&a0->field_18 + 1) = v9;
        v10 = 0;
    }
    a0->field_0 = v10;
    return v10;
}
