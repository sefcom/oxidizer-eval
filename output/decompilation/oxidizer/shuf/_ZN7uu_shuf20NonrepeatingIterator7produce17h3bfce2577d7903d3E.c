fn uu_shuf::NonrepeatingIterator::produce(a0: void*) -> long long {
    let v0: u8;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: struct17;  // [bp-0x48]
    let v5: u64;  // r12
    let v6: u64;  // rax
    let v7: i64;  // rax
    let v8: void*;  // [bp-0x50], Other Possible Types: struct17

    if !*(a0 as &i64) {
        v7 = a0[24] as i64;
        core::option::unwrap(v7);
        *(&a0[24] as &unsigned long) = v7 - 1;
        return *((a0[16] as i64 + v7 * 8 - 8) as &i64);
    }
    v5 = a0 + 64;
    do {
        v8 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v5);
        v6 = rand::rng::Rng::random_range(a0[56] as i64, &v8, "src/uu/shuf/src/shuf.rs");
    } while (hashbrown::map::HashMap<K,V,S,A>::insert(a0, v6));
    if a0[24] as i64 < (_ccall(5, 24, a0[72] as i64 - a0[64] as i64 + 1, 0, (a0[72] as i64 < a0[64] as i64) as u8 as u64) as char ? a0[72] as i64 - a0[64] as i64 + 1 : -1) >> 2 {
        return v6;
    }
    v3 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v5);
    v8 = a0;
    core::iter::traits::iterator::Iterator::collect(&v0, &v8);
    if v2 < a0[48] as i64 {
        core::panicking::panic("assertion failed: remaining.len() >= self.remaining_count"); /* do not return */
    }
    <[T] as rand::seq::slice::SliceRandom>::partial_shuffle(&v8, v1, v2, a0 + 56, a0[48] as i64);
    return struct32 {
        field_0: 0
        field_8: *(&v0 as &i128)
        field_24: v2
    };
}
