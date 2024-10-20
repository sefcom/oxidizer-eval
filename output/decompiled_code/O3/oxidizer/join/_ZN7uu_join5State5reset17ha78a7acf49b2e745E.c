fn uu_join::State::reset(a0: void*, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: &u64;  // r15
    let v4: u64;  // r12
    let v5: &struct_1;  // r13
    let v6: u64;  // r12
    let v8: u64;  // rax
    let v9: u128;  // xmm0
    let v10: u128;  // xmm1

    v0 = v2;
    v3 = a0[1];
    v4 = a0[2];
    a0[2] = 0;
    if v4 {
        v5 = v3 + 4;
        do {
            v6 = v4;
            v5 += 6;
        } while (v6 != 1);
    }
    v8 = 0x8000000000000000;
    if a1->field_0 == 0x8000000000000000 {
        return 0x8000000000000000;
    }
    if !*(a0) {
        v8 = alloc::raw_vec::RawVec<T,A>::grow_one(a0);
        v3 = a0[1];
    }
    v9 = *(&a1->field_0 as &i128);
    v10 = a1->field_10;
    v3[4] = a1->field_20;
    v3[2] = v10;
    *(v3) = v9;
    a0[2] = 1;
    return v8;
}
