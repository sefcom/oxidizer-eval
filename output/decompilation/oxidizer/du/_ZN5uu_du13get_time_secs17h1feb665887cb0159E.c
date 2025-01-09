fn uu_du::get_time_secs(a0: &Result<struct24, struct8>, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x20]
    let v5: u64;  // 4102
    let v6: u256;  // ymm0

    if a1 && a1 != 1 {
        v5 = a2[6];
        v0 = 3;
        if !v5 {
            return struct32 {
                field_0: v0
                field_8: v7
                field_16: v8
            };
        }
        return v6;
    }
    return Err(struct8 {
        field_0: v4
    });
}
