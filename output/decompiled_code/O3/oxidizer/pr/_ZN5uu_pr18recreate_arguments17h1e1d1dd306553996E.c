fn uu_pr::recreate_arguments(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x188], Other Possible Types: struct32, struct16
    let v1: i192;  // [sp-0x150], Other Possible Types: struct16, struct24
    let v2: struct24;  // [sp-0x128], Other Possible Types: i192
    let v3: i192;  // [sp-0x110]
    let v4: struct32;  // [sp-0xf8], Other Possible Types: i256
    let v5: i192;  // [bp-0xd8]
    let v6: struct32;  // [sp-0xc0], Other Possible Types: i256
    let v7: struct40;  // [sp-0xa0]
    let v8: i256;  // [sp-0x78], Other Possible Types: struct32
    let v9: i256;  // [sp-0x58], Other Possible Types: struct32
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // rcx
    let v13: i64;  // r8
    let v14: i64;  // r9
    let v15: i64;  // rax
    let v16: i64;  // rdx
    let v17: i64;  // rbp
    let v18: i64;  // rsi

    v0 = regex::regex::string::Regex::new("^[-+]\\d+.*", a3, a4, a5);
    v8 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\\d*$", v12, v13, v14);
    v4 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^-n\\s*$", v12, v13, v14);
    v6 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v15 = itertools::Itertools::find_position(&v0, &v6);
    if v16 {
        v17 = v15 + 1;
        if v17 < a2 && !regex::regex::string::Regex::is_match_at(v4, *((&v4 as &char + 8) as &i64), *((a1 + ((v17 << 1) + v17 << 3) + 8) as &i64), *((a1 + ((v17 << 1) + v17 << 3) + 16) as &i64)) as i8 {
            v2 = alloc::vec::Vec<T,A>::remove(&v1, v17, "src/uu/pr/src/pr.rs");
            v7 = <uu_pr::NumberingMode as core::default::Default>::default(v18, v16);
            v3 = format!("{:?}", &v7);
            v5 = v3;
            v1 = alloc::vec::Vec<T,A>::insert(v17, &v5);
            v0 = v2;
            v1 = alloc::vec::Vec<T,A>::insert(v15 + 2, &v0);
        }
    }
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    v10 = &v8;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v9);
    return a0;
}
