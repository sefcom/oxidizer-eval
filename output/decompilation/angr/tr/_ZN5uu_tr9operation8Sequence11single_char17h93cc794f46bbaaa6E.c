long long uu_tr::operation::Sequence::single_char::h93cc794f46bbaaa6(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char *v5;  // rax
    int v6;  // xmm0

    nom::bytes::complete::take::_$u7b$$u7b$closure$u7d$$u7d$::h6d20bacba5a47d43(&v0, nom::bytes::complete::take::hb83f4516c7d13b17(1), a1, a2);
    if (*((long long *)&v0))
    {
        v6 = *((int128_t *)&v1);
        a0->field_8 = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v6;
        return &v1;
    }
    else if (!*((long long *)&v3))
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_52f420); /* do not return */
    }
    else
    {
        v5 = *((char *)*((long long *)&v2));
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        *((char *)&a0->field_8 + 8) = (char)v5;
        a0->field_0 = 3;
        return v5;
    }
}
