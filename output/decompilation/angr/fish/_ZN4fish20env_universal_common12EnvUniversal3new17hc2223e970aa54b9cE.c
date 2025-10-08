long long fish::env_universal_common::EnvUniversal::new(struct_0 *a0)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    int v7;  // [bp-0x48], Other Possible Types: char
    int v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx
    int v14;  // xmm2

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v11 = <alloc::ffi::c_str::CString as core::default::Default>::default();
    v12 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v4) = g_14bd820;
    *((uint128_t *)&v3) = g_14bd810;
    v5 = v12;
    v6 = v13;
    v7.default();
    *((int128_t *)((char *)&a0->field_68 + 8)) = *((int128_t *)&v9);
    *((void*)((char *)&a0->field_58 + 8)) = v8;
    *((void*)((char *)&a0->field_48 + 8)) = v7;
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    a0->field_18 = v11;
    a0->field_20 = v13;
    v14 = *((int128_t *)&v5);
    *((void*)&(&a0->field_20)[1]) = v3;
    *((void*)((char *)&a0->field_28 + 8)) = v4;
    *((void*)((char *)&a0->field_38 + 8)) = v14;
    *((unsigned long long *)((char *)&a0->field_78 + 8)) = 1;
    *((char *)&a0->field_b0 + 8) = 1;
    *((unsigned long long *)&a0->field_b0) = 0x8000000000000000;
    *((uint128_t *)&a0->field_88) = 340282366920938463463374607431768211455;
    a0->field_90 = 170141183460469231750134047789593657343;
    a0->field_a0 = 0x80000000000000008000000000000000;
    return a0;
}
