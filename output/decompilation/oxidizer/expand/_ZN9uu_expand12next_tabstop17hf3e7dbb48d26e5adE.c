fn uu_expand::next_tabstop(a0: i64, a1: u32, a2: u64, a3: u8) -> long long {
    let v0: struct712;  // [bp-0x38], Other Possible Types: struct16
    let v1: u64;  // [bp-0x28]
    let v3: u64;  // r12
    let v4: u64;  // rdx
    let v5: i64;  // rax
    let v6: core::fmt::rt::Argument;  // rcx
    let v7: u64;  // rdx
    let v9: i64;  // rcx

    v1 = a2;
    if a3 {
        v3 = a1 - 1;
        if a3 == 1 {
            v0 = struct16 {
                field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
                field_8: v0 + v4 * 8
            };
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
        } else {
            v0 = struct16 {
                field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
                field_8: v0 + v7 * 8
            };
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
        }
        return v9 - a2;
    } else if a1 != 1 {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 8
        };
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
        return 1;
    } else {
        return v6 - (!(a2 | v6) >> 32 ? ((0 CONCAT a2) % v6 as u128 CONCAT (0 CONCAT a2) / v6 as u128) >> 64 : (((0 CONCAT a2) % (v6 & 4294967295)) as u32 CONCAT ((0 CONCAT a2) / (v6 & 4294967295)) as u32) >> 32);
    }
}
