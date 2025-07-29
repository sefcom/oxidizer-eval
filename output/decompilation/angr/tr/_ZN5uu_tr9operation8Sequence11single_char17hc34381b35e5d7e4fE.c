long long uu_tr::operation::Sequence::single_char(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    int v2;  // [bp-0x38]
    char *v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x20]
    unsigned long v6;  // rax

    v0 = nom::bytes::take(1);
    v1.process(&v0, a1, a2);
    if ((v1 & 1))
    {
        *((int128_t *)&a0->field_8[8]) = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v2;
        return &(char)v2;
    }
    else if (*((long long *)&v4))
    {
        v6 = *(v3);
        *((void*)&a0->field_8[0]) = v2;
        a0->field_8[16] = v6;
        *((unsigned long long *)&a0->field_0) = 3;
        return v6;
    }
    else
    {
        core::panicking::panic_bounds_check(0, 0, &g_591338); /* do not return */
    }
}
