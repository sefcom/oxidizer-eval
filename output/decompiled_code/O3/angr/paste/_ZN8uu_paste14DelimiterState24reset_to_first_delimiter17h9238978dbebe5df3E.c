long long uu_paste::DelimiterState::reset_to_first_delimiter::h9238978dbebe5df3(struct_0 *a0)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned long long v2;  // [sp-0x8]
    unsigned long v4;  // rbx
    unsigned long long v5;  // rax
    int v6;  // xmm0

    if (a0->field_0 == 2)
    {
        v2 = v4;
        v5 = core::iter::adapters::cycle::Cycle$LT$I$GT$::new::hf1aa6bae6724cda9(&v0, a0->field_18, a0->field_20 * 16 + a0->field_18);
        v6 = *((int128_t *)&v0);
        *((int128_t *)((char *)&a0->field_28 + 8)) = *((int128_t *)&v1);
        *((void*)&(&a0->field_20)[1]) = v6;
        return v5;
    }
    return v5;
}
