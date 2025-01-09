fn uu_shuf::NonrepeatingIterator::produce(a0: &struct32) -> u64 {
    let v0: struct8;  // [sp-0x80], Other Possible Types: struct24, i192
    let v1: struct17;  // [sp-0x68], Other Possible Types: struct32, i144
    let v3: struct8;  // [bp-0x48]
    let v4: struct17;  // [sp-0x40]
    let v6: i64;  // r12
    let v7: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rax

    if *(a0 as &i64) {
        v6 = a0 + 64;
        do {
            v1 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v6);
            v9 = rand::rng::Rng::gen_range(*((a0 + 56) as &i64), &v1);
        } while (hashbrown::map::HashMap<K,V,S,A>::insert(a0, v9));
        v10 = *((a0 + 72) as &i64);
        v11 = v10 - *((a0 + 64) as &i64);
        v12 = v11 + 1;
        if !(amd64g_calculate_condition(5, 24, v11 + 1, 0, (v10 < *((a0 + 64) as &i64)) as u8 as u64) as char) {
            v12 = -1;
        }
        v4 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v6);
        v3 = struct8 {
            field_0: a0
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
        if *((&v0 as &char + 16) as &i64) >= *((a0 + 48) as &i64) {
            v1 = <[T] as rand::seq::SliceRandom>::partial_shuffle(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a0 + 56, *((a0 + 48) as &i64));
            v0 = alloc::vec::Vec<T,A>::truncate(*((a0 + 48) as &i64));
            return struct32 {
                field_0: 0
                field_8: v1
                field_24: v2
            };
        }
        core::panicking::panic("assertion failed: remaining.len() >= self.remaining_count", "src/uu/shuf/src/shuf.rs"); /* do not return */
    }
    v7 = *((a0 + 24) as &i64);
    if !v7 {
        core::option::unwrap_failed("src/uu/shuf/src/shuf.rs"); /* do not return */
    }
    *((a0 + 24) as &i64) = v7 - 1;
    v9 = *((*((a0 + 16) as &i64) + v7 * 8 - 8) as &i64);
}
