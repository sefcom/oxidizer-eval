fn uu_shuf::NonrepeatingIterator::new(a0: void*, a1: void*, a2: u64, a3: void*) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rcx
    let v4: u64;  // rax

    v0 = v2;
    v3 = *(a1 as &i64);
    if a1[8] as i64 >= v3 && (v3 || a1[8] as i64 != -1 || (a1[16] as i8 & 1)) {
        a3 = core::cmp::Ord::min(a3, a1[8] as i64 - v3 + 1);
    }
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
    v4 = a1[16] as i64;
    *(&a0[80] as &u64) = v4;
    *(&a0[64] as &i128) = *(a1 as &i128);
    *(&a0[56] as &u64) = a2;
    *(&a0[48] as &void*) = a3;
    return v4;
}
