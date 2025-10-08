double fish::complete::Completer::new(long long a0, long long a1, long long a2)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    void* v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x20]
    unsigned long v8;  // rbp
    unsigned long long v9;  // rax
    int v10;  // xmm1
    unsigned long v11;  // rdx

    v8 = a2;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = a1->field_30;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v9 = std::thread::local::LocalKey<T>::with();
    a0->field_38 = a1;
    a0->field_70 = v8;
    a0->field_72 = (v8 & 4294967295) >> 16;
    v10 = *((int128_t *)&v5);
    a0->field_0 = *((int128_t *)&v3);
    *((void*)&a0->field_10) = v10;
    a0->field_20 = *((int128_t *)&v0);
    a0->field_30 = 0;
    a0->field_40 = g_14bd810;
    a0->field_50 = g_14bd820;
    a0->field_60 = v9;
    a0->field_68 = v11;
    return (unsigned long long)g_14bd820;
}
