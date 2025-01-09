fn uu_pr::recreate_arguments(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i256;  // [sp-0x188], Other Possible Types: struct32, struct24, struct16
    let v1: i64;  // [sp-0x180]
    let v2: i64;  // [sp-0x178]
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [sp-0x168]
    let v5: struct16;  // [sp-0x150], Other Possible Types: i192, struct24
    let v6: i64;  // [sp-0x138]
    let v7: i64;  // [sp-0x130]
    let v8: struct24;  // [sp-0x128]
    let v11: struct32;  // [sp-0xf8], Other Possible Types: i256
    let v12: struct24;  // [bp-0xd8]
    let v13: i256;  // [sp-0xc0], Other Possible Types: struct32
    let v14: i320;  // [sp-0xa0], Other Possible Types: struct40
    let v15: struct32;  // [sp-0x78], Other Possible Types: i256
    let v16: i256;  // [sp-0x58], Other Possible Types: struct32
    let v17: i64;  // [sp-0x38]
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rbp

    v0 = regex::regex::string::Regex::new("^[-+]\\d+.*");
    v15 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\\d*$");
    v11 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^-n\\s*$");
    v13 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v19 = itertools::Itertools::find_position(&v0, &v13);
    if !v20 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v17 = &v15;
        alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v16);
        return a0;
    }
    v21 = v19 + 1;
    if v21 < a2 && !regex::regex::string::Regex::is_match_at(v11, *((&v11 as &char + 8) as &i64), *((a1 + v21 * 24 + 8) as &i64), *((a1 + v21 * 24 + 16) as &i64)) as i8 {
        v8 = alloc::vec::Vec<T,A>::remove(&v5, v21, "src/uu/pr/src/pr.rs");
        v14 = <uu_pr::NumberingMode as core::default::Default>::default();
        v6 = &v14;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v0 = &g_466c10;
        v1 = 1;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        *(&v12.field_0 as &struct24) = struct24 {
            field_0: v9
            field_16: v10
        };
        v5 = alloc::vec::Vec<T,A>::insert(v21, &v12);
        *(&v0.field_0 as &struct24) = struct24 {
            field_0: v8
            field_16: *((&v8 as &char + 16) as &i64)
        };
        v5 = alloc::vec::Vec<T,A>::insert(v19 + 2, &v0);
    }
}
