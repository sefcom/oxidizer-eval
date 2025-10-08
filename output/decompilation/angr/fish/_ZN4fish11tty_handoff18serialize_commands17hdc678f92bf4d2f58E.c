long long fish::tty_handoff::serialize_commands(struct_0 *a0)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned int v4;  // [bp-0x78]
    unsigned short v5;  // [bp-0x74]
    char v6;  // [bp-0x6f]
    unsigned int v7;  // [bp-0x6b]
    char v8;  // [bp-0x60]
    int v9;  // [bp-0x48]
    int v10;  // [bp-0x38]
    unsigned long v11;  // [bp-0x28]
    unsigned long long v13;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0xffffffff00000000;
    v4 = 0;
    v5 = 773;
    v6 = 3;
    v7 = 0;
    v11 = a0->field_20;
    *((uint128_t *)&v10) = a0->field_10;
    *((uint128_t *)&v9) = a0->field_0;
    v8.next(&v9);
    if (v8 != 45)
    {
        do
        {
            v0.write_command(&v8);
            v8.next(&v9);
        } while (v8 != 45);
    }
    v13 = 1.from_slice(0);
    core::ptr::drop_in_place<fish::io::BufferElement>(v0, 1);
    return v13;
}
