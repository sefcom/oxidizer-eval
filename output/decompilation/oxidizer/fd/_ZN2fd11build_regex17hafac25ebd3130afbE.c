fn fd::build_regex(a0: i64, a1: i64, a2: u32) -> int {
    let v0: Result<struct32, struct32>;  // [bp-0xf8]
    let v1: u192;  // [bp-0xf0]
    let v2: struct24;  // [bp-0xd8]
    let v3: struct168;  // [bp-0xc0]
    let v4: i8;  // [bp-0x23]
    let v5: u8;  // [bp-0x21]
    let v7: struct24;  // xmm0

    v3 = regex::builders::string::RegexBuilder::new(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v4 = a2 ^ 1;
    v5 = 1;
    v0 = regex::builders::bytes::RegexBuilder::build(&v3, a2);
    match v0 {
        Err(_) => {
            v2 = v1;
            return struct16 {
                field_0: 0
                field_8: fd::build_regex::{{closure}}(&v2)
            };
        },
        Ok(_) => {
            v7 = v0 as i128;
            return struct32 {
                field_0: v7
                field_16: *((&v0 as &char + 16) as &i128)
            };
        },
    }
}
