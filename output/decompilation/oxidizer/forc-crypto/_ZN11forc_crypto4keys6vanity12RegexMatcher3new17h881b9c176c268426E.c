fn forc_crypto::keys::vanity::RegexMatcher::new(a1: i128, a2: i64) -> Result<struct32, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct32, struct32>;  // [bp-0x98]
    let v1: u128;  // [bp-0x98]
    let v2: u64;  // [bp-0x88]
    let v3: u128;  // [bp-0x68]
    let v4: u64;  // [bp-0x58]
    let v5: alloc::string::String;  // [bp-0x48]
    let v6: alloc::string::String;  // [bp-0x30]
    let v7: alloc::string::String;  // [bp-0x28]

    v6 = a1;
    v7 = a2;
    v5 = format!("(?i){}", &v6);
    v1 = regex::regex::string::Regex::new(v5);
    v3 = *((&v0 as &char + 8) as &i128);
    v4 = 1;
    match v1 as u768 {
        Err(_) => {
            v2 = v4;
            v1 = v3;
            return struct16 {
                field_0: 0
                field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1 as u768)
            };
        },
        Ok(_) => {
            return Ok(struct32 {
                field_0: v0 as i64
                field_8: v3
                field_24: v4
            });
        },
    }
}
