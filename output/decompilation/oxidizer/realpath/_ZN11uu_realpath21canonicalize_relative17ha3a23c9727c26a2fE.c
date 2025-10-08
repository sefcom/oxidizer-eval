fn uu_realpath::canonicalize_relative(a1: i64, a2: i64, a3: i32, a4: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x58]
    let v1: struct9;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]

    uucore::features::fs::canonicalize(&v0, a1, a2, a3, a4);
    if (((0 ^ v0) & (0 ^ -(v0))) >> 63) as char {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v2
        };
    } else if a3 != 1 {
        return Ok(struct24 {
            field_0: v1.field_0
            field_8: v2
            field_16: v3
        });
    } else if !std::path::Path::is_dir(v2, v3) {
        v1 = std::fs::read_dir(v2, v3);
        if v1.field_8 != 2 {
            return Ok(struct24 {
                field_0: v1.field_0
                field_8: v2
                field_16: v3
            });
        }
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v1.field_0
        };
    } else {
        return Ok(struct24 {
            field_0: v1.field_0
            field_8: v2
            field_16: v3
        });
    }
}
