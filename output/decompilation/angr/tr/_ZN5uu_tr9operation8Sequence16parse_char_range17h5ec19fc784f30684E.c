long long uu_tr::operation::Sequence::parse_char_range::h5ec19fc784f30684(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x1f]
    unsigned long v5;  // [sp-0x18]
    unsigned long long v6;  // [sp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r8
    int v12;  // xmm0
    unsigned long long v13;  // rax

    v5 = "-' are in reverse collating sequence order";
    v6 = 1;
    nom::sequence::separated_pair::_$u7b$$u7b$closure$u7d$$u7d$::h10f375dd8b7b174e(&v0, &v5, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v12 = *((int128_t *)&v0);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v2);
        *((void*)&(&a0->field_0)[1]) = v12;
        v13 = 1;
    }
    else
    {
        v9 = v3;
        v10 = v4;
        v11 = 9223372036854775819;
        if ((char)v9 > (char)v10)
            v11 = 9223372036854775818;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v11;
        *((int *)&a0->field_18) = ((char)v9 > (char)v10 ? (unsigned int)v10 : (unsigned int)(((v9 & 4294967295 & 4294967295) * 0x100 & 4294967295) + ((v10 & 4294967295 & 4294967295) * 0x10000 & 4294967295) + 1));
        *((unsigned int *)((char *)&a0->field_18 + 4)) = v9;
        v13 = 0;
    }
    a0->field_0 = v13;
    return v13;
}
