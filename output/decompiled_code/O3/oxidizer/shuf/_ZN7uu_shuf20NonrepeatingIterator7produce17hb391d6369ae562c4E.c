fn uu_shuf::NonrepeatingIterator::produce(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct8;  // [sp-0x80], Other Possible Types: struct24, i192
    let v1: i136;  // [sp-0x68], Other Possible Types: struct32, struct17
    let v2: i64;  // [sp-0x58]
    let v3: struct8;  // [bp-0x48]
    let v4: struct17;  // [sp-0x40]
    let v6: i64;  // r12
    let v7: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rcx
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax

    if *(a0 as &i64) {
        v6 = a0 + 64;
        do {
            v1 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v6);
            v11 = rand::rng::Rng::gen_range(*((a0 + 56) as &i64), &v1, v9, v10);
        } while (hashbrown::map::HashMap<K,V,S,A>::insert(a0, v11) as i8);
        v12 = *((a0 + 72) as &i64);
        v13 = v12 - *((a0 + 64) as &i64);
        v14 = v13 + 1;
        if !(amd64g_calculate_condition(5, 24, v13 + 1, 0, (v12 < *((a0 + 64) as &i64)) as u8 as u64) as char) {
            v14 = -1;
        }
        if *((a0 + 24) as &i64) < v14 >> 2 {
            return v11;
        }
        v4 = <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v6);
        v3 = struct8 {
            field_0: a0
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3, v9);
        if *((&v0 as &char + 16) as &i64) >= *((a0 + 48) as &i64) {
            v1 = <[T] as rand::seq::SliceRandom>::partial_shuffle(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a0 + 56, *((a0 + 48) as &i64));
            v0 = alloc::vec::Vec<T,A>::truncate(*((a0 + 48) as &i64));
            v1.field_16 = (stack_base)[112] as i64;
            v1 = v0;
            *(a0 as &i64) = 0;
            *((a0 + 8) as &i128) = v1;
            *((a0 + 24) as &i64) = v2;
            return v11;
        }
        core::panicking::panic(); /* do not return */
    } else {
        v7 = *((a0 + 24) as &i64);
        if v7 {
            *((a0 + 24) as &i64) = v7 - 1;
            v11 = *((*((a0 + 16) as &i64) + v7 * 8 - 8) as &i64);
            return v11;
        }
        core::option::unwrap_failed(); /* do not return */
    }
}
