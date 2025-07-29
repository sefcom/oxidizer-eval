fn backdoorautomater::sanitizer::sanitize_port(a1: &struct24) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x98]
    let v1: struct24;  // [bp-0x98]
    let v2: alloc::string::String;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: struct32;  // [bp-0x68]
    let v5: u128;  // [bp-0x48]
    let v6: struct24;  // [bp-0x38]
    let v8: i64;  // r15
    let v9: u64;  // r12
    let v10: u64;  // r13
    let v13: u64;  // rbp
    let v14: &str;  // rax:rdx
    let v15: core::result::Result<u16, core::num::error::ParseIntError>;  // rax:rax

    v0 = regex::regex::string::Regex::new("[^0-9]+");
    v8 = &v0;
    v4 = core::result::Result<T,E>::unwrap(&v0, "src/sanitizer.rs");
    v9 = *((a1 + 8) as &i64);
    v10 = *((a1 + 16) as &i64);
    if !regex::regex::string::Regex::is_match_at(v4.field_0 as i64, *((&v4.field_0 as &char + 8) as &i64), v9, v10) {
        v14 = core::str::<impl str>::trim_matches(v9, v10);
        v15 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v14.data_ptr, v14.length) as u128;
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("Error ! Given port is invalid ! \n");
        v6 = v1.field_16;
        v5 = *(&v1.field_0 as &i128);
        v2 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v5, v9, v10);
        v13 = core::result::Result<T,E>::expect(v15 as u64, v3, v2.vec.len);
        v8 = &v2;
        if v13 && v13 != 65535 {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        }
    }
    *((v8 + 8) as &i64) = 1;
    *((v8 + 16) as &i64) = 8;
    *((v8 + 24) as &i128) = 0;
    core::panicking::panic_fmt(v8); /* do not return */
}
