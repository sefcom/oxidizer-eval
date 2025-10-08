long long fd::exec::CommandBuilder::finish(struct_0 *a0)
{
    unsigned long long v0[2];  // [bp-0x1e0]
    unsigned int v1;  // [bp-0x1dc]
    unsigned long v2;  // [bp-0x1d8]
    char v3;  // [bp-0x1d0]
    char v4;  // [bp-0xf8]
    unsigned long v6;  // r14
    unsigned long v7;  // rdx

    if (!a0->field_138)
        return 0;
    v6 = &a0->field_50;
    if (((char)v6.try_args(a0->field_40, a0->field_48) & 1))
        return v7;
    v0.status(v6);
    if (v0 == 1)
        return v2;
    if (v1)
        a0->field_148 = 4;
    v0.new_command(a0->field_28, a0->field_30);
    if ((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63))
        return v2;
    ::libc.so.0::memcpy(&v4, &v3, 216);
    core::ptr::drop_in_place<argmax::Command>(v6);
    a0->field_50 = v0[0];
    a0->field_58 = v2;
    ::libc.so.0::memcpy(&a0->padding_60, &v4, 216);
    a0->field_138 = 0;
    return 0;
}
