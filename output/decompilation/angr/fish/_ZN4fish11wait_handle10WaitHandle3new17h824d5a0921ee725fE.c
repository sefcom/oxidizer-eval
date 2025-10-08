long long fish::wait_handle::WaitHandle::new(unsigned int a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    int v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x10]
    unsigned int v6;  // [bp-0x8]

    v0 = 1;
    v1 = 1;
    *((uint128_t *)&v2) = a2->field_0;
    v3 = a2->field_10;
    v4 = a1;
    v5 = 0;
    v6 = a0;
    return v0.new();
}
