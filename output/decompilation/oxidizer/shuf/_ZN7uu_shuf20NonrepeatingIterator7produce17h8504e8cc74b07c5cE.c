fn uu_shuf::NonrepeatingIterator::produce() -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x80], Other Possible Types: struct8
    let v1: u32;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: struct16;  // [bp-0x58]
    let v4: i64;  // [bp-0x48]
    let v5: struct17;  // [bp-0x40]
    let v7: u64;  // r12
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: struct17;  // [bp-0x68], Other Possible Types: struct32

    if *(a0 as &i64) {
        v7 = a0 + 64;
        do {
            v10 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v7);
        } while ((v9 = rand::rng::Rng::gen_range(*((a0 + 56) as &i64), &v10), hashbrown::map::HashMap<K,V,S,A>::insert(a0) as u8));
        if *((a0 + 24) as &i64) < (amd64g_calculate_condition(5, 24, *((a0 + 72) as &i64) - *((a0 + 64) as &i64) + 1, 0, (*((a0 + 72) as &i64) < *((a0 + 64) as &i64)) as u8 as u64) as char ? *((a0 + 72) as &i64) - *((a0 + 64) as &i64) + 1 : -1) >> 2 {
            return rand::rng::Rng::gen_range(*((a0 + 56) as &i64), &v10);
        }
        v5 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v7);
        v4 = a0;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v4);
        if v2 < *((a0 + 48) as &i64) {
            core::panicking::panic("assertion failed: remaining.len() >= self.remaining_count"); /* do not return */
        }
        v10 = <[T] as rand::seq::SliceRandom>::partial_shuffle(v1, v2, a0 + 56, *((a0 + 48) as &i64));
        v0 = alloc::vec::Vec<T,A>::truncate(*((a0 + 48) as &i64));
        v3 = v2;
        memcpy(&v10, &v0, 16);
        return struct40 {
            field_0: 0
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    } else {
        v8 = *((a0 + 24) as &i64);
        if !v8 {
            core::option::unwrap_failed(); /* do not return */
        }
        *((a0 + 24) as &u64) = v8 - 1;
        return *((*((a0 + 16) as &i64) + v8 * 8 - 8) as &i64);
    }
}
