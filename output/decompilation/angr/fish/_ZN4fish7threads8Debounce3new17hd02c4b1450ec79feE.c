long long fish::threads::Debounce::new(struct_0 *a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x50]
    char v3;  // [bp-0x4c]
    void* v4;  // [bp-0x48]
    void* v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned int v8;  // [bp-0x20]
    unsigned int v10;  // edx
    unsigned long long v11;  // rax

    v0 = 1;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 1;
    v7 = std::time::Instant::now();
    v8 = v10;
    v11 = v0.new();
    a0->field_8 = a1;
    a0->field_10 = a2;
    a0->field_0 = v11;
    return a0;
}
