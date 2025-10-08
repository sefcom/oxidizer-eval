long long uu_join::State::reset(struct_0 *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi
    void* v4;  // rsi

    v0 = v2;
    v3 = a0->field_8;
    v4 = a0->field_10;
    a0->field_10 = 0;
    core::ptr::drop_in_place<[uu_join::Line]>(v3, v4);
    if (!((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63)))
        return a0.push(a1);
    return 0;
}
