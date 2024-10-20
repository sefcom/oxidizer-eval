long long uu_env::parse_program_opt::h3a12a9811ee14da2(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long *v3;  // rbx
    uint128_t v4[2];  // rax
    uint128_t v5[2];  // rbx
    void* v6;  // rax
    unsigned long long *v7;  // rax
    unsigned long long *v8;  // rcx

    v0 = v2;
    if (a0->field_99)
    {
        v3 = a0->field_58;
        if (v3 == a0->field_48)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8ac3196adf40a594(&a0->field_48);
        v7 = a0->field_50;
        v8 = v3 * &g_10;
        *((unsigned long long *)(v7 + v8)) = a1;
        *((unsigned long long *)(v7 + v8 + (char *)&g_8)) = a2;
        a0->field_58 = v3 + &g_0;
        return &g_0;
    }
    else
    {
        v4 = __rust_alloc(39, 1);
        if (!v4)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v5 = v4;
        *((int128_t *)(v4 + &g_10)) = 43077655853743613898504753636649037357;
        v4[0] = 59983875595245035792596970883632750947;
        *((long long *)((char *)&v5[1] + 15)) = 7236828773846311712;
        v6 = __rust_alloc(32, 8);
        if (v6)
        {
            *((long long *)v6) = 39;
            *((uint128_t *[2])(v6 + &g_8)) = v5;
            *((long long *)(v6 + &g_10)) = 39;
            *((int *)(v6 + &g_18)) = 125;
            return v6;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
