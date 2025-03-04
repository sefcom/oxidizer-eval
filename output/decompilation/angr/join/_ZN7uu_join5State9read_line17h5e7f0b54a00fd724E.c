long long uu_join::State::read_line::h5e7f0b54a00fd724(struct_0 *a0, unsigned long long a1[11])
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x70]
    unsigned long v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    unsigned long long v5;  // [sp-0x58]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    int v14;  // xmm0
    int v15;  // xmm1

    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d9dc488658bb76c(&v0, &a1[5]);
    v10 = *((long long *)&v0);
    if (v10 == 9223372036854775809)
    {
        a0->field_0 = 0x8000000000000000;
        return v10;
    }
    v11 = *((long long *)&v1);
    v12 = *((long long *)&v2);
    a1[10] = a1[10] + 1;
    if (v10 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v4;
        a0->field_0 = 9223372036854775809;
        return v10;
    }
    v3 = v10;
    v4 = v11;
    v5 = v12;
    uu_join::Line::new::h002fafd6b52f7c72(&v6, &v3, v13, a1[9]);
    v10 = *((long long *)&v7);
    if (v10 > a1[9])
        a1[9] = v10;
    v14 = *((int128_t *)&v6);
    v15 = *((int128_t *)&v7);
    a0->field_20 = *((int128_t *)&v8);
    *((void*)&a0->field_10) = v15;
    *((void*)&a0->field_0) = v14;
    return v10;
}
