long long uu_join::State::reset::ha78a7acf49b2e745(struct_0 *a0, struct_2 *a1)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    uint128_t v3[3];  // r15
    unsigned long long v4;  // r12
    struct_3 *v5;  // r13
    unsigned long long v6;  // r12
    unsigned long long v8;  // rax
    int v9;  // xmm0
    int v10;  // xmm1

    v0 = v2;
    v3 = a0->field_8;
    v4 = a0->field_10;
    a0->field_10 = 0;
    if (v4)
    {
        v5 = &v3[2];
        do
        {
            v6 = v4;
            if (v5->field_0)
                __rust_dealloc(v5->field_-8);
            if (v5->field_-18)
                __rust_dealloc(v5->field_-20);
            v5 = &v5[1].field_-18;
        } while (v6 != 1);
    }
    v8 = 0x8000000000000000;
    if (a1->field_0 == 0x8000000000000000)
        return 0x8000000000000000;
    if (!a0->field_0)
    {
        v8 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9dacef1e57bdbe14(a0);
        v3 = a0->field_8;
    }
    v9 = *((int128_t *)&a1->field_0);
    v10 = a1->field_10;
    v3[2] = a1->field_20;
    *((void*)&v3[1]) = v10;
    *((void*)&v3[0]) = v9;
    a0->field_10 = 1;
    return v8;
}
