fn uu_expand::next_tabstop(a0: i64, a1: i64, a2: i448, a3: i8) -> long long {
    let v0: struct16;  // [sp-0x38], Other Possible Types: u64
    let v1: struct56;  // [bp-0x28]
    let v3: u64;  // r12
    let v4: u64;  // rcx
    let v5: i64;  // rax
    let v6: u64;  // rdx
    let v7: u64;  // rdx
    let v9: u64;  // rcx

    v1 = a2;
    if a3 {
        v3 = a1 - 1;
        if a3 != 1 {
            v0 = struct16 {
                field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
                field_8: v0 + v7 * 8
            };
            v0 = struct16 {
                field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
                field_8: v0.field_0 + v7 * 8
            };
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
            return v9 - a2;
        }
        v0 = struct16 {
            field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
            field_8: v0 + v6 * 8
        };
        v0 = struct16 {
            field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/expand/src/expand.rs")
            field_8: v0.field_0 + v6 * 8
        };
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
    } else if a1 != 1 {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 8
        };
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 8
        };
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
        return 1;
    }
    return (!(a2 | v4) >> 32 ? v4 - ((((0 CONCAT a2) % v4) as u64 CONCAT ((0 CONCAT a2) / v4) as u64) >> 64) : v4 - (((0 CONCAT a2 as u32) % (v4 & 4294967295) CONCAT (0 CONCAT a2 as u32) / (v4 & 4294967295)) >> 32));
}
