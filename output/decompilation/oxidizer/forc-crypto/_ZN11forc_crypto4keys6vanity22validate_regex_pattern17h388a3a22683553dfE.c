fn forc_crypto::keys::vanity::validate_regex_pattern(a0: u64, a1: void*, a2: u32) -> int {
    let v0: void*;  // [bp-0xc8]
    let v1: struct24;  // [bp-0xb8]
    let v2: struct32;  // [bp-0xa8]
    let v3: Result<struct32, struct32>;  // [bp-0xa0]
    let v4: struct24;  // [bp-0x98]
    let v5: struct32;  // [bp-0x88]
    let v6: alloc::string::String;  // [bp-0x80]
    let v7: alloc::string::String;  // [bp-0x28]
    let v9: u64;  // rax
    let v10: core::result::Result<usize, std::io::error::Error>;  // rax

    v0 = a1;
    if a2 > 128 {
        v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, "Regex pattern too long: max 128 characters");
        return struct8 {
            field_0: 1
        };
    }
    v6 = format!("(?i){}", &v0);
    v3 = regex::regex::string::Regex::new(v6);
    match v3 {
        Err(_) => {
            v2 = v5;
            v1 = v4;
            v7 = format!("Invalid regex pattern: {}", &v1);
            return struct32 {
                field_0: 1
                field_8: *(&v7.vec.buf.inner.cap as &i128)
                field_24: v7.vec.len
            };
        },
        Ok(_) => {
            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, v0, a2) as u64;
            return struct8 {
                field_0: 0
            };
        },
    }
}
