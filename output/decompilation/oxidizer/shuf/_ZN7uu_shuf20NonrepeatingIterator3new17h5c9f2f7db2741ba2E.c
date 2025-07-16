fn uu_shuf::NonrepeatingIterator::new(a1: i64, a2: i64, a3: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rcx

    v0 = v2;
    v3 = *(a1 as &i64);
    if *((a1 + 8) as &i64) >= v3 && (v3 || *((a1 + 8) as &i64) != -1) {
        a3 = core::cmp::min_by(a3, *((a1 + 8) as &i64) - v3 + 1);
    }
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
    *((a0 + 80) as &i64) = *((a1 + 16) as &i64);
    *((a0 + 64) as &i128) = *(a1 as &i128);
    *((a0 + 56) as &u64) = a2;
    *((a0 + 48) as &void*) = a3;
    return a0;
}
