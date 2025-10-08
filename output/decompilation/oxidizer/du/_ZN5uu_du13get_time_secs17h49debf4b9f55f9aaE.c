fn uu_du::get_time_secs(a1: i8, a2: i64) -> Result<struct24, struct8> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x20]
    let v1: struct44;  // [bp-0x18]
    let v2: i8;  // [bp-0x10]

    if !a1 {
        return Err(*((a2 + 112) as &i64));
    } else if a1 == 1 {
        return Err(*((a2 + 120) as &i64));
    } else {
        v0 = 3;
        if !(*((a2 + 48) as &i8) & 1) {
            return Ok(struct24 {
                field_0: v1
                field_8: *(&v2 as &i128)
            });
        }
        return Err(*((a2 + 56) as &i64));
    }
}
