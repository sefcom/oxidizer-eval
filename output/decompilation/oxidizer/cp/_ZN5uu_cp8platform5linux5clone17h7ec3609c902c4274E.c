fn uu_cp::platform::linux::clone(a0: u64, a1: u64, a2: u64, a3: u64, a4: u32) -> long long {
    let v0: struct32;  // [bp-0x48]
    let v1: Result<struct4, struct8>;  // [bp-0x28]
    let v2: Result<struct4, struct8>;  // [bp-0x28]
    let v5: u64;  // r14

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
            v2 = std::fs::File::create(&v0 as u64);
            return v5;
        },
    }
}
