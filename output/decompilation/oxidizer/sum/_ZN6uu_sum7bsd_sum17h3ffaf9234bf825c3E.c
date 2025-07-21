fn uu_sum::bsd_sum(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x1040]
    let v1: struct16;  // [bp-0x1040]
    let v2: void*;  // [bp-0x1030]
    let v4: void*;  // r13
    let v6: u32;  // rdx

    v2 = 0;
    memset(&v2, 0, 0x1000);
    loop {
        if *((a1 + 24) as &i64)(a0, &v2, 0x1000) as i64 || !v6 {
            break;
        }
        v1 = struct16 {
            field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, &v2, "src/uu/sum/src/sum.rs")
            field_8: v6 + v0
        };
        do { } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1));
    }
    return (v4 >> 10) + 1 - ((v4 as u32 & 1023) < 1);
}
