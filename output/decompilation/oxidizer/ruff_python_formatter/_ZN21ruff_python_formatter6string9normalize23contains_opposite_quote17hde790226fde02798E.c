fn ruff_python_formatter::string::normalize::contains_opposite_quote(a0: core::option::Option<&str>, a1: u64, a2: u8) -> long long {
    let v0: struct17;  // [bp-0x48]
    let v2: u64;  // 4096
    let v3: u64;  // rdx
    let v5: core::option::Option<&str>;  // r12
    let v6: u64;  // r13
    let v7: u64;  // r15
    let v8: core::option::Option<&str>;  // rax
    let v9: struct21;  // al
    let v10: u8;  // r12b
    let v12: Result<struct88, struct32>;  // 4096
    let v13: i64;  // rdx
    let v15: core::option::Option<&str>;  // r13
    let v16: struct16;  // r15
    let v17: core::option::Option<&str>;  // rax
    let v18: u8;  // al
    let v22: u64;  // rcx

    if (a2 & 2) {
        return <&str as core::str::pattern::Pattern>::is_contained_in((!(a2 & 1) ? &g_48b635 : &g_48b632), a0, a1, v22);
    }
    if a2 > 63 {
        v5 = core::str::<impl str>::find(a0, a1, (a2 & 1) * 5 + 34);
    } else if !(a2 & 1) {
        if (core::str::<impl str>::find(a0, a1, 34) & 1) {
            v2 = a1;
            loop {
                v6 = v3;
                v7 = v3;
                v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v7, a0, v6) as u64;
                v0 = struct17 {
                    field_0: v8
                    field_8: v3 + v8
                    field_16: 0
                };
                v9 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v0);
                v5 = v5 & -0x100 | !(v9 & 1);
                if !(v9 & 1) {
                    break;
                }
                a0 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7 + 1, a0, v6) as u64;
                if !(core::str::<impl str>::find(a0, v2, 34) & 1) {
                    break;
                }
            }
        }
    } else {
        if (core::str::<impl str>::find(a0, a1, 39) & 1) {
            v12 = a1;
            loop {
                v15 = v13;
                v16 = v13;
                v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v16, a0, v15) as u64;
                v0 = struct17 {
                    field_0: v17
                    field_8: v13 + v17
                    field_16: 0
                };
                v18 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v0);
                v5 = v5 & -0x100 | !(v18 & 1);
                if !(v18 & 1) {
                    break;
                }
                a0 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16 + 1, a0, v15) as u64;
                if !(core::str::<impl str>::find(a0, v12, 39) & 1) {
                    break;
                }
            }
        }
    }
    return v5 as u32 & -0x100 | v10 & 1;
}
