fn uu_du::get_time_secs(a1: i8, a2: i64) -> Result<struct24, struct8> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v2: i8;  // [bp-0x10]
    let v4: u64;  // rax
    let v5: i64;  // rdi
    let v6: i64;  // rdi
    let v7: i64;  // rdi

    if a0 && a0 != 1 {
        v0 = 3;
        if *((a1 + 48) as &i64) {
            *((v6 + 8) as &i64) = *((a1 + 56) as &i64);
            *(v6 as &i64) = 5;
        } else {
            *((v7 + 16) as &i128) = *(&v2 as &i128);
            *(v7 as &i64) = 3;
            *((v7 + 8) as &u64) = v1;
        }
        return;
    }
    *((v5 + 8) as &u64) = v4;
    *(v5 as &i64) = 5;
    return;
}
