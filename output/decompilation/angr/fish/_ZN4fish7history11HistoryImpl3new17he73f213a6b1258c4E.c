double fish::history::HistoryImpl::new(long long a0, long long a1)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    int v3;  // [bp-0x58]
    int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    void* v7;  // [bp-0x28]
    char v8;  // [bp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v10 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v4) = g_14bd820;
    *((uint128_t *)&v3) = g_14bd810;
    v5 = v10;
    v6 = v11;
    v7 = 0;
    v12 = std::time::SystemTime::now();
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = a1->field_10;
    *((uint128_t *)&(&a0->padding_20)[1]) = a1->field_0;
    *((int128_t *)&a0->field_38) = *((int128_t *)&v0);
    *((unsigned long long *)&a0->field_40) = 0;
    *((unsigned long long *)&a0->field_a0) = 0;
    *((char *)&a0->field_d8 + 12) = 0;
    *((unsigned int *)((char *)&a0->field_d8 + 8)) = 0;
    a0->field_90 = *((int128_t *)&v5);
    *((void*)&a0->field_80) = v4;
    *((void*)&a0->field_70) = v3;
    a0->field_0 = *((int128_t *)&v7);
    a0->field_10 = *((long long *)&v8);
    *((unsigned long long *)((char *)&a0->field_c8 + 8)) = 0x8000000000000000;
    *((uint128_t *)((char *)&a0->field_b8 + 8)) = 0x80000000000000008000000000000000;
    *((uint128_t *)&(&a0->field_b0)[1]) = 170141183460469231750134047789593657343;
    *((uint128_t *)((char *)&a0->field_a0 + 8)) = 340282366920938463463374607431768211455;
    a0->field_60 = v12;
    *((unsigned int *)&a0->field_68) = v11;
    *((unsigned long long *)&a0->field_d8) = 0;
    a0->field_18 = 0;
    *((char *)&a0->field_d8 + 13) = 0;
    *((unsigned long long *)((char *)&a0->field_40 + 8)) = 0;
    a0->field_50 = 8;
    a0->field_58 = 0;
    return 18446744073709551615;
}
