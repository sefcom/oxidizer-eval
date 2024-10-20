fn uu_ls::dired::calculate_subdired(a0: &struct_0, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v5: &u64;  // r15
    let v6: u64;  // rax
    let v7: &u64;  // rcx
    let v8: &u64;  // rdx

    v0 = v2;
    v3 = a0->field_10;
    v5 = a0->field_28;
    if v5 == a0->field_18 {
        alloc::raw_vec::RawVec<T,A>::grow_one(&a0->field_18);
    }
    v6 = (!v3 ? 2 : *((v3 * 16 + a0->field_8 - 8) as &i64) + 3) + (-0x100 | v5) * 2;
    v7 = a0->field_20;
    v8 = v5 * 16;
    *((v7 + v8) as &u64) = v6;
    *((v7 + v8 + 8) as &u64) = a1 + v6;
    a0->field_28 = v5 as &char + 1;
    return v6;
}
