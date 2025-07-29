long long uu_join::State::reset(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x28]
    unsigned long long v4;  // rdi
    void* v5;  // rsi
    unsigned long long v6;  // rax

    v4 = a0->field_8;
    v5 = a0->field_10;
    a0->field_10 = 0;
    v6 = (unsigned long long)core::ptr::drop_in_place<[uu_join::Line]>(v4, v5);
    if (*((long long *)&a1->field_0) == 0x8000000000000000)
        return v6;
    *((uint128_t *)&v2) = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
    return a0.push(&v0);
}
