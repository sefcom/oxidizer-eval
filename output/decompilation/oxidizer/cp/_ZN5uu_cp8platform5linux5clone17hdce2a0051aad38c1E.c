fn uu_cp::platform::linux::clone(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> long long {
    let v0: u256;  // [bp-0x48]
    let v1: Result<struct4, struct8>;  // [bp-0x28]
    let v2: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x28]
    let v5: core::result::Result<(), std::io::error::Error>;  // r14

    v0 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v1 = std::fs::File::open(&v0);
    match v1 {
        Err(_) => {
            return *((&v1 as &char + 8) as &i64);
        },
        Ok(_) => {
            v2 = std::fs::File::create(&v0 as u64, a2);
            return v5;
        },
    }
}
