fn flealib::fleaserver::remove_newline_characters(a0: u64, a1: void*, a2: u32) -> void {
    let v0: struct24;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u32;  // [bp-0x48]
    let v3: u8;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v5: u32;  // [bp-0x30]
    let v6: struct16;  // [bp-0x28]
    let v8: u64;  // r14
    let v9: u64;  // r15
    let v10: u32;  // rdx

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
    alloc::str::<impl str>::replace(&v3, v1, v2, 10);
    alloc::str::<impl str>::replace(&v0, v4, v5, 13);
    v8 = v1;
    v9 = v2;
    v6 = struct16 {
        field_0: v8
        field_8: v8 + v9
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v6) {
        core::option::unwrap_failed(); /* do not return */
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v10, v8, v9, "flealib/src/fleaserver.rs"), a2);
    return;
}
