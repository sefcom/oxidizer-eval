long long fish::threads::Debounce::perform_with_completion(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x78]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    int v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]

    fish::threads::assert_is_main_thread();
    v5 = a1->field_50;
    *((uint128_t *)&v4) = a1->field_40;
    *((uint128_t *)&v3) = a1->field_30;
    *((uint128_t *)&v2) = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v6 = a2;
    return a0.perform_inner(v0.new(), &g_14e3130);
}
