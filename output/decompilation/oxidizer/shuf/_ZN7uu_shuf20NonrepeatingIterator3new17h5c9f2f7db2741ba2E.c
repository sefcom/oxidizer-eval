fn uu_shuf::NonrepeatingIterator::new(a0: &struct48, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: void*;  // r12
    let v4: u64;  // rcx
    let v5: u64;  // rsi
    let v6: u128;  // xmm0
    let v7: u256;  // ymm0

    v0 = v2;
    v3 = a3;
    v4 = *(a1);
    v5 = a1[1];
    if v5 < v4 {
        v3 = 0;
    } else if v4 || v5 != -1 {
        v3 = core::cmp::min_by(a3, v5 - v4 + 1);
    }
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
    a0[2].field_32 = a1[2];
    v6 = *(&a1 as &i128);
    *(&a0[2].field_0 as &u128) = v6;
    a0[1].field_40 = a2;
    a0[1].field_32 = v3;
    return v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
}
