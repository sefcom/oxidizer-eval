fn uu_du::birth_u64(a0: i64) -> long long {
    let v0: core::result::Result<core::time::Duration, std::time::SystemTimeError>;  // [bp-0x28], Other Possible Types: u8
    let v1: i8;  // [bp-0x20]
    let v2: u64;  // [bp-0x10]
    let v3: u32;  // [bp-0x8]
    let v5: core::result::Result<std::time::SystemTime, std::io::error::Error>;  // rax:rdx

    v5 = std::fs::Metadata::created(&v0);
    if *(&v1 as &i32) == 0x3b9aca00 {
        return 0;
    }
    v2 = v0;
    v3 = *(&v1 as &i32);
    v0 = std::time::SystemTime::duration_since(&v2, None, None);
    match v0 {
        Ok(_) => {
            return 1;
        },
        Err(_) => {
            return 0;
        },
    }
}
