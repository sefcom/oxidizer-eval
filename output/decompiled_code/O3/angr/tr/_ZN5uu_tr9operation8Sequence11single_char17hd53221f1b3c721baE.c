long long uu_tr::operation::Sequence::single_char::hd53221f1b3c721ba(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    unsigned long long v5;  // rax
    int v6;  // xmm0

    nom::bytes::complete::take::_$u7b$$u7b$closure$u7d$$u7d$::h6c3a86adea748804(&v0, nom::bytes::complete::take::h082840ed6d77548b(1), a1, a2);
    if (*((long long *)&v0))
    {
        v6 = *((int128_t *)&v1);
        a0->field_8 = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v6;
        return &v1;
    }
    else if (!*((long long *)&v3))
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    }
    else
    {
        v5 = *((char *)*((long long *)&v2));
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        *((char *)&a0->field_8 + 8) = v5;
        a0->field_0 = 3;
        return v5;
    }
}
