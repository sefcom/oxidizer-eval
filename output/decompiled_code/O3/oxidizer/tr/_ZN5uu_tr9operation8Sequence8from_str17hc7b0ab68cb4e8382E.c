fn uu_tr::operation::Sequence::from_str(a0: &Option<struct24>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x89]
    let v1: i128;  // [bp-0x88]
    let v2: i128;  // [bp-0x80]
    let v3: i128;  // [bp-0x78]
    let v4: i64;  // [sp-0x70]
    let v5: i192;  // [sp-0x68], Other Possible Types: struct48, struct24
    let v6: i256;  // [sp-0x38], Other Possible Types: struct32
    let v8: i128;  // xmm0

    v5 = nom::multi::many0::{{closure}}(&v0, a1, a2);
    if v5 {
        v8 = *((&v5 as &char + 8) as &i128);
        v3 = *((&v5 as &char + 24) as &i128);
        v1 = v8;
    } else {
        v4 = *((&v5 as &char + 40) as &i64);
        v2 = *((&v5 as &char + 24) as &i128);
        v1 = 3;
    }
    v5 = core::result::Result<T,E>::unwrap(&v1);
    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    return core::iter::adapters::try_process(a0, &v6);
}
