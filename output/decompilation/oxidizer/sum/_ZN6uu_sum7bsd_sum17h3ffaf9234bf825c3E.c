fn uu_sum::bsd_sum(a0: u32, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x1040]
    let v1: u64;  // [sp-0x1038]
    let v2: void*;  // [sp-0x1030]
    let v4: u64;  // r15
    let v7: u64;  // r13
    let v8: u64;  // r13
    let v9: u64;  // rdx
    let v10: struct8;  // rax
    let v11: u64;  // r13

    v2 = 0;
    v4 = 0;
    memset(&v2, 0, 0x1000);
    v7 = 0;
    loop {
        v8 = v7;
        if !(!a1->field_18()) || !(v9) {
            break;
        }
        v0 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v9, &v2, "src/uu/sum/src/sum.rs");
        v1 = v9 + v0;
        loop {
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v7 = v11;
            if !v10 {
                break;
            }
            v4 = (v4 & -0x10000 | __ROR__(v4, 1)) + *(v10 as &i8) & 4294967295;
        }
    }
    return (v8 >> 10) - -1 - ((v8 & 1023) < 1);
}
