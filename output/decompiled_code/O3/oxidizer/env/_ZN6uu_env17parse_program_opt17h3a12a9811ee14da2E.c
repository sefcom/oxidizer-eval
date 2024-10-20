fn uu_env::parse_program_opt(a0: &struct_1, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &u64;  // rbx
    let v4: &u64;  // rax
    let v5: &u64;  // rbx
    let v6: void*;  // rax
    let v7: &u64;  // rax
    let v8: &u64;  // rcx

    v0 = v2;
    if !a0->field_99 {
        v4 = __rust_alloc(39, &g_0);
        v5 = v4;
        *((v4 + &g_10) as &i128) = 43077655853743613898504753636649037357;
        *(&v4 as &i128) = 59983875595245035792596970883632750947;
        *((&v5[3] as &char + 7) as &i64) = 7236828773846311712;
        v6 = __rust_alloc(32, &g_8);
        *(v6 as &i64) = 39;
        *((v6 + &g_8) as &&u64) = v5;
        *((v6 + &g_10) as &i64) = 39;
        *((v6 + &g_18) as &i32) = 125;
        return v6;
    }
    v3 = a0->field_58;
    if v3 == a0->field_48 {
        alloc::raw_vec::RawVec<T,A>::grow_one(&a0->field_48);
    }
    v7 = a0->field_50;
    v8 = v3 * &g_10;
    *((v7 + v8) as &u64) = a1;
    *(v7 + v8 + &g_8 as &u8) = a2;
    *(&a0->field_58 as &unsigned long) = v3 + &g_0;
    return &g_0;
}
