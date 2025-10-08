fn zoxide::db::stream::Stream::filter_by_keywords(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: struct16;  // [bp-0x40]
    let v5: u64;  // r12
    let v6: u64;  // rbp
    let v7: u64;  // r14
    let v8: u64;  // rbx
    let v9: u64;  // rdx
    let v11: core::option::Option<&str>;  // rax
    let v12: core::option::Option<&str>;  // rax
    let v13: void*;  // r12
    let v14: u64;  // rdx
    let v15: u64;  // rbx
    let v16: u64;  // r14
    let v17: u64;  // rax

    if !a1 {
        return a0 & 4294967295;
    }
    v5 = a1 * 3;
    v6 = a0 + v5 * 8 - 24;
    v0 = zoxide::util::to_lowercase(a2, a3);
    v7 = v1;
    v8 = v2;
    if (core::str::<impl str>::rfind(v7, v8, v6) & 1) {
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((v5 * 8 + a0 - 8) as &i64) + v9, v7, v8) as u64;
        if !core::str::pattern::Pattern::is_contained_in(v11, v9) {
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v9, v7, v8) as u64;
            v3 = struct16 {
                field_0: a0
                field_8: v6
            };
            v13 = 0;
            loop {
                v15 = v14;
                v16 = v12;
                v17 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v3);
                a0 = a0 & -0x100 | !v17;
                if !v17 || !(core::str::<impl str>::rfind(v16, v15, v17) & 1) {
                    break;
                }
                v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v9, v16, v15) as u64;
            }
        }
    }
    return a0 & 4294967295;
}
