fn uu_tr::operation::Sequence::from_str(a1: i64, a2: i64) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x89]
    let v1: u64;  // [bp-0x88]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x80]
    let v4: u128;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: struct48;  // [bp-0x68], Other Possible Types: struct24
    let v7: u128;  // [bp-0x60]
    let v8: u128;  // [bp-0x50]
    let v9: u64;  // [bp-0x40]
    let v10: struct32;  // [bp-0x38]
    let v12: u64;  // rdi

    v6 = nom::multi::many0::{{closure}}(&v0, a0, a1);
    if v6.field_0 {
        v4 = v8;
        v2 = v7;
    } else {
        v5 = v9;
        v3 = v8;
        v1 = 3;
    }
    v6 = core::result::Result<T,E>::unwrap(&v2);
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    core::iter::adapters::try_process(v12, &v10);
    return;
}
