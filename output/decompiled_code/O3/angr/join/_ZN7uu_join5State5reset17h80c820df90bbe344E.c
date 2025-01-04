long long uu_join::State::reset::h80c820df90bbe344(unsigned long long a0[3], struct_0 *a1, unsigned long a2)
{
    int v0;  // [sp-0x48]
    int v1;  // [sp-0x38]
    int v2;  // [sp-0x28]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v4 = a0[1];
    v5 = a0[2];
    a0[2] = 0;
    v6 = core::ptr::drop_in_place$LT$$u5b$uu_join..Line$u5d$$GT$::h7063c6a704fef728(v4, v5);
    if (a1->field_0 != 0x8000000000000000)
    {
        *((uint128_t *)&v2) = a1->field_20;
        *((uint128_t *)&v1) = a1->field_10;
        *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
        v6 = alloc::vec::Vec$LT$T$C$A$GT$::push::h8d118758e449cd1f(a0, &v0, v7);
        return v6;
    }
    return v6;
}
