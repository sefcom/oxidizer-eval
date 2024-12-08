fn uu_sum::sysv_sum(a0: i64, a1: &struct_1) -> u64 {
    let v0: u64;  // [sp-0x1040]
    let v1: u64;  // [sp-0x1038]
    let v2: void*;  // [sp-0x1030]
    let v4: void*;  // rbx
    let v5: &&struct_0;  // r14
    let v6: void*;  // r15
    let v7: u64;  // rdx
    let v8: struct8;  // rax

    v2 = 0;
    v4 = 0;
    memset(&v2, 0, 0x1000);
    v5 = a1->field_18;
    for (v6 = 0; !v5() && v7; v6 += v7) {
        v0 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, &v2);
        v1 = v7 + v0;
        loop {
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v8 {
                break;
            }
            v4 = v4 + *(v8 as &i8) & 4294967295;
        }
    }
    return (v6 >> 9) - -1 - ((v6 as u32 & 511) < 1);
}
