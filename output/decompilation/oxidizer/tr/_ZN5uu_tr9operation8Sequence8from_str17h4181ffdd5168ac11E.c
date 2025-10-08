fn uu_tr::operation::Sequence::from_str(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x88]
    let v1: u128;  // [bp-0x88]
    let v2: u128;  // [bp-0x80]
    let v3: u128;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: struct32;  // [bp-0x60], Other Possible Types: u8
    let v6: u128;  // [bp-0x58]
    let v7: u128;  // [bp-0x48]
    let v8: u64;  // [bp-0x38]
    let v9: struct24;  // [bp-0x30]

    <nom::multi::Many0<F> as nom::internal::Parser<I>>::process(&v5, a1, a2);
    if *(&v5 as &i32) == 1 {
        v3 = v7;
        v1 = v6;
    } else {
        v4 = v8;
        v2 = v7;
        v0 = 3;
    }
    v9 = core::result::Result<T,E>::unwrap(&v0);
    v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    return core::iter::traits::iterator::Iterator::collect(a0, &v5);
}
