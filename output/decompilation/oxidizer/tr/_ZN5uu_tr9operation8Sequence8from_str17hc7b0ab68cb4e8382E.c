fn uu_tr::operation::Sequence::from_str(a0: &Option<struct24>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x89]
    let v1: iNone;  // [sp-0x88], Other Possible Types: unsigned long
    let v2: iNone;  // [bp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: Result<struct40, struct32>;  // [sp-0x68], Other Possible Types: struct24
    let v5: struct32;  // [sp-0x38]
    let v7: iNone;  // xmm0

    v4 = nom::multi::many0::{{closure}}(&v0, a1, a2);
    match v4 {
        Err(_) => {
            v7 = *((&v4 as &char + 8) as &i128);
            *(&v2 as &i128) = *((&v4 as &char + 24) as &i128);
            v1 = v7;
        },
        Ok(_) => {
            v3 = *((&v4 as &char + 40) as &i64);
            *(&v1 as &i128) = *((&v4 as &char + 24) as &i128);
            v1 = 3;
        },
    }
    v4 = core::result::Result<T,E>::unwrap(&v1);
    v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    return core::iter::adapters::try_process(a0, &v5);
}
