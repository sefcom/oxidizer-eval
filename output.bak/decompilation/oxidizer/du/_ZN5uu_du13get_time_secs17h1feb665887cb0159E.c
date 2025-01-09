fn uu_du::get_time_secs(a0: &Result<struct24, struct8>, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x20]
    let v6: u64;  // 4102

    if a1 && a1 != 1 {
        v6 = a2[6];
        v0 = 3;
        if !v6 {
            return struct32 {
                field_0: v0
                field_8: v7
                field_16: v8
            };
        }
        return Err(struct8 {
            field_0: v5
        });
    }
    return Err(struct8 {
        field_0: v4
    });
}
