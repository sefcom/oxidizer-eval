fn starship::init::StarshipPath::init(a0: i64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x48], Other Possible Types: u128
    let v1: Result<struct72, struct32>;  // [bp-0x40], Other Possible Types: struct56
    let v2: u64;  // [bp-0x38]
    let v3: Result<struct24, struct9>;  // [bp-0x28]
    let v5: struct19;  // rax

    v3 = which::which();
    if (((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char {
        v0 = std::env::current_exe();
        v5 = v0 as i64;
        if v5 == 0x8000000000000000 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v1
            };
        }
    } else {
        v2 = *((&v3 as &char + 16) as &i64);
        v0 = v3 as i128;
        v5 = v0 as i64;
    }
    return struct24 {
        field_0: v5
        field_8: v1
        field_16: v2
    };
}
