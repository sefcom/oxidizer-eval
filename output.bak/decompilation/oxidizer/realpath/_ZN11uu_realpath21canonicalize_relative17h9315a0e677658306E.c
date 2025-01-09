fn uu_realpath::canonicalize_relative(a0: &Result<struct24, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x68]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i72;  // [sp-0x50], Other Possible Types: Result<struct24, struct8>, struct9
    let v4: i64;  // [sp-0x38]
    let v5: i8;  // [sp-0x30]
    let v7: i64;  // rax
    let v8: i64;  // r14

    v3 = uucore::features::fs::canonicalize(a1, a2, a3, a4);
    v7 = v3;
    v8 = *((&v3 as &char + 8) as &i64);
    match v3 {
        Err(_) => {
            *((a0 + 8) as &i64) = v1;
            *(a0 as &i64) = 0x8000000000000000;
        },
        Ok(_) => {
            v0 = v7;
            v1 = v8;
            v2 = *((&v3 as &char + 16) as &i64);
            if !(a3 as i8 == 1 && !std::path::Path::is_dir(v1, v2) as i8) {
                return Ok(struct24 {
                    field_0: v0
                    field_8: v9
                    field_16: v2
                });
            }
            v3 = std::fs::read_dir(v1, v2);
            if v5 != 2 {
                v4 = v3;
                v5 = *((&v3 as &char + 8) as &i8);
            } else {
                *((a0 + 8) as &i64) = v4;
                *(a0 as &i64) = 0x8000000000000000;
            }
        },
    }
}
