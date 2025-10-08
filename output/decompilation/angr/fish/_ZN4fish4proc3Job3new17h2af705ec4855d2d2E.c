long long fish::proc::Job::new(struct_0 *a0, unsigned long a1, struct_1 *a2)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    char v7;  // [bp-0x1c]
    void* v8;  // [bp-0x1b]
    unsigned short v9;  // [bp-0x13]
    char v10;  // [bp-0x11]
    unsigned short v11;  // [bp-0x10]
    char v12;  // [bp-0xe]
    unsigned long long v14;  // 4101

    v14 = atomic_exchange_add(&_ZN4fish4proc3Job3new20NEXT_INTERNAL_JOB_ID17h99c225d6e9aa2c5aE, 1);
    v11 = 0;
    v12 = 0;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    *((uint128_t *)&v5) = 0;
    v8 = 0;
    a0->field_45 = a1;
    a0->field_47 = (a1 & 4294967295) >> 16;
    a0->field_0 = a2->field_0;
    a0->field_10 = a2->field_10;
    a0->field_18 = 8;
    a0->field_20 = 0;
    a0->field_30 = v14;
    a0->field_38 = v6;
    a0->field_3c = v7;
    *((unsigned long long *)&(&a0->field_3c)[1]) = 0;
    *((unsigned short *)((char *)&a0->field_3d + 5)) = v9;
    *((char *)&a0->field_3d + 7) = v10;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return a0;
}
