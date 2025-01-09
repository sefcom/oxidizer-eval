fn uu_pr::recreate_arguments(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x188], Other Possible Types: struct32, struct24, struct16
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: struct16;  // [sp-0x150], Other Possible Types: i192, struct24
    let v4: i64;  // [sp-0x138]
    let v5: i64;  // [sp-0x130]
    let v6: struct24;  // [sp-0x128]
    let v7: i8;  // [bp-0x110]
    let v8: i256;  // [sp-0xf8], Other Possible Types: struct32
    let v9: i192;  // [sp-0xd8]
    let v10: struct32;  // [sp-0xc0], Other Possible Types: i256
    let v11: struct40;  // [sp-0xa0], Other Possible Types: i320
    let v12: struct32;  // [sp-0x78], Other Possible Types: i256
    let v13: i256;  // [sp-0x58], Other Possible Types: struct32
    let v14: i64;  // [sp-0x38]
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v18: i64;  // rbp

    v0 = regex::regex::string::Regex::new("^[-+]\\d+.*");
    v12 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\\d*$");
    v8 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^-n\\s*$");
    v10 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v16 = itertools::Itertools::find_position(&v0, &v10);
    if v17 {
        v18 = v16 + 1;
        if v18 < a2 && !regex::regex::string::Regex::is_match_at(v8, *((&v8 as &char + 8) as &i64), *((a1 + v18 * 24 + 8) as &i64), *((a1 + v18 * 24 + 16) as &i64)) as i8 {
            v6 = alloc::vec::Vec<T,A>::remove(&v3, v18, "src/uu/pr/src/pr.rs");
            v11 = <uu_pr::NumberingMode as core::default::Default>::default();
            v4 = &v11;
            v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: &g_466c10
                field_16: &v4
            };
            v2 = 0;
            v1 = 1;
            core::option::Option<T>::map_or_else();
            v9 = v7;
            v3 = alloc::vec::Vec<T,A>::insert(v18, &v9);
            v0 = v6;
            v3 = alloc::vec::Vec<T,A>::insert(v16 + 2, &v0);
        }
    }
    v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v14 = &v12;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v13);
    return a0;
}
