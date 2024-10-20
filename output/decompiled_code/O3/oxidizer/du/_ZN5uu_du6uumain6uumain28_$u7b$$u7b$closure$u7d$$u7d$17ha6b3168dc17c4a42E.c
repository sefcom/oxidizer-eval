fn uu_du::uumain::uumain::{{closure}}(a0: i64, a1: &&struct_0) -> u64 {
    let v0: u64;  // [sp-0x38], Other Possible Types: Enum
    let v1: u64;  // [sp-0x30], Other Possible Types: &u128
    let v2: u64;  // [sp-0x28], Other Possible Types: &u128
    let v3: u32;  // [sp-0x20]
    let v5: &u128;  // rax
    let v6: &u64;  // rax
    let v7: u128;  // xmm0
    let v8: &&struct_0;  // rax

    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(25, 0);
    v5 = v2;
    *((v5 as &char + 9) as &i128) = 61665774523509445202524672366277191796;
    *(v5) = 43056500982154326645638188281685963344;
    v3 = 1;
    v0 = v1;
    v1 = v5;
    v2 = 25;
    v6 = __rust_alloc(32, 8);
    v7 = *(&v0 as &i128);
    *(&v6[2] as &i128) = *(&v2 as &i128);
    *(v6) = v7;
    if *(a1) {
        v8();
    }
    return v6;
}
