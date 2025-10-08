fn uu_split::number::FixedWidthNumber::increment(a0: i64) -> u64 {
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v3: u64;  // r14
    let v4: u8;  // al
    let v5: u64;  // rcx
    let v6: u64;  // rcx
    let v7: u64;  // rcx
    let v8: u8;  // dl

    v3 = *((a0 + 8) as &i64);
    if *((a0 + 16) as &i64) {
        v4 = *((a0 + 24) as &i8);
        v5 = *((a0 + 16) as &i64);
        v6 = v5;
        loop {
            v7 = v6;
            v8 = *((v3 + v7 - 1) as &i8);
            *((v3 + v7 - 1) as &u8) = v8 + 1;
            if v8 + 1 != v4 {
                break;
            }
            *((v3 + v7 - 1) as &i8) = 0;
            v6 = v7 - 1;
            if v7 == 1 {
                break;
            }
        }
    }
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v5, "src/uu/split/src/number.rs");
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v3, v5, v1, v0.len);
}
