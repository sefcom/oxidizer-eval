fn uu_pr::recreate_arguments(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x188], Other Possible Types: struct16, struct24
    let v1: struct16;  // [sp-0x150]
    let v2: struct16;  // [sp-0x150], Other Possible Types: int, struct24
    let v3: struct24;  // [sp-0x128]
    let v4: String;  // [sp-0x110]
    let v5: struct32;  // [sp-0xf8]
    let v6: String;  // [sp-0xd8]
    let v7: struct32;  // [sp-0xc0]
    let v8: struct40;  // [sp-0xa0]
    let v9: struct32;  // [sp-0x78]
    let v10: struct32;  // [sp-0x58]
    let v11: i64;  // [sp-0x38]
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rbp

    v0 = regex::regex::string::Regex::new("^[-+]\d+.*");
    v9 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\d*$");
    v5 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^-n\s*$");
    v7 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v13 = itertools::Itertools::find_position(&v0, &v7);
    if v14 {
        v15 = v13 + 1;
        if v15 < a2 && !regex::regex::string::Regex::is_match_at(v5.field_0, v5.field_8 as i64, *((a1 + v15 * 24 + 8) as &i64), *((a1 + v15 * 24 + 16) as &i64)) as i8 {
            v3 = alloc::vec::Vec<T,A>::remove(&v2, v15, "src/uu/pr/src/pr.rs");
            v8 = <uu_pr::NumberingMode as core::default::Default>::default();
            v4 = format!("{}", &v8);
            v6 = v4;
            v1 = alloc::vec::Vec<T,A>::insert(v15, &v6);
            v0 = v3;
            v2 = alloc::vec::Vec<T,A>::insert(v13 + 2, &v0);
        }
    }
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
    v11 = &v9;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v10);
    return a0;
}
