fn uu_pr::recreate_arguments(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: Option<struct24>;  // [bp-0x150], Other Possible Types: struct16, struct32
    let v1: struct32;  // [bp-0x150]
    let v2: u64;  // [bp-0x140]
    let v3: void*;  // [bp-0x138]
    let v4: i64;  // [bp-0x130], Other Possible Types: u64
    let v5: u8;  // [bp-0x128]
    let v6: struct16;  // [bp-0x120]
    let v7: u8;  // [bp-0x120]
    let v8: struct48;  // [bp-0xf8]
    let v9: struct40;  // [bp-0xf8]
    let v10: struct32;  // [bp-0xc0]
    let v11: struct32;  // [bp-0xa0]
    let v12: u8;  // [bp-0x80]
    let v13: struct32;  // [bp-0x68]
    let v14: alloc::string::String;  // [bp-0x48]
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // rbp
    let v19: u64;  // rax
    let v20: iNone;  // xmm0

    v0 = regex::regex::string::Regex::new("^[-+]\\d+.*");
    v13 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\\d*$");
    v10 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^-n\\s*$");
    v11 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, a1, a2);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v16 = itertools::Itertools::find_position(&v0, &v11);
    if v17 {
        v18 = v16 + 1;
        if v18 < a2 {
            v19 = v18 * 3;
            v0 = struct16 {
                field_24: 0
                field_32: *((a1 + v19 * 8 + 8) as &i64)
            };
            v2 = *((a1 + v19 * 8 + 16) as &i64);
            v3 = 0;
            v4 = v2;
            v5 = 1;
            regex_automata::util::search::Input::set_span(&v0, v2);
            v20 = *(&v0.field_0 as &i128);
            v8 = struct48 {
                field_0: v20
                field_16: *(&v2 as &i128)
                field_32: *(&v4 as &i128)
            };
            v0 = regex_automata::meta::regex::Regex::search_half(v10.field_0, v10.field_8, &v8);
            if let None = v0 {
                alloc::vec::Vec<T,A>::remove(&v12, &v7, v18);
                v9 = <uu_pr::NumberingMode as core::default::Default>::default();
                v14 = format!("{}", &v9 as u8);
                v6 = alloc::vec::Vec<T,A>::insert(v18, &v14, "src/uu/pr/src/pr.rs");
                v6 = alloc::vec::Vec<T,A>::insert(v16 + 2, &v12, "src/uu/pr/src/pr.rs");
            }
        }
    }
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1, &v6);
    v4 = &v13;
    core::iter::traits::iterator::Iterator::collect(a0, &v1);
    return a0;
}
