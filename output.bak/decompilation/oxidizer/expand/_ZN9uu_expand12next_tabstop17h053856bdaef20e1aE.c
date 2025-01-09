fn uu_expand::next_tabstop(a0: &u64, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [bp-0x38], Other Possible Types: struct16
    let v1: u64;  // [sp-0x30]
    let v2: u64;  // [sp-0x28]
    let v4: u64;  // rbx
    let v5: u64;  // r12
    let v6: u64;  // rcx
    let v7: &u64;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rdx
    let v10: u64;  // rcx
    let v12: u64;  // rsi
    let v13: u64;  // rcx

    v4 = a2;
    v2 = a2;
    if a3 {
        v5 = a1 - 1;
        if a3 != 1 {
            v0 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, a0, a1, "src/uu/expand/src/expand.rs");
            v1 = v0 + v9 * 8;
            v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v2);
            if !v7 && a1 {
                v12 = a0[1 + a1];
                if v12 {
                    v4 -= a0[2 + a1];
                    v13 = (!(v4 | v12) >> 32 ? (0 CONCAT v4) % v12 CONCAT (0 CONCAT v4) / v12 : ((0 CONCAT v4) % (v12 & 4294967295) CONCAT (0 CONCAT v4) / (v12 & 4294967295)) & 4294967295 & 4294967295);
                    v10 = v12 * (v13 + 1) - v4;
                    return v10;
                }
                core::panicking::panic_const::panic_const_div_by_zero("src/uu/expand/src/expand.rs"); /* do not return */
            }
        } else {
            v0 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, a0, a1, "src/uu/expand/src/expand.rs");
            v1 = v0 + v8 * 8;
            v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v2);
            if !v7 && a1 {
                v6 = a0[1 + a1];
                if v6 {
                    v10 = (!(v4 | v6) >> 32 ? v6 - (((0 CONCAT v4) % (v6 & 4294967295) CONCAT (0 CONCAT v4) / (v6 & 4294967295)) >> 32 & 4294967295) : v6 - (((0 CONCAT v4) % v6 CONCAT (0 CONCAT v4) / v6) >> 64));
                    return v10;
                }
                core::panicking::panic_const::panic_const_rem_by_zero("src/uu/expand/src/expand.rs"); /* do not return */
            }
        }
    } else if a1 != 1 {
        v0 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 8
        };
        v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v2);
        if !v7 {
            return 1;
        }
    } else if !*(a0) {
        core::panicking::panic_const::panic_const_rem_by_zero("src/uu/expand/src/expand.rs"); /* do not return */
    } else {
        return v10;
    }
    return v10;
}
