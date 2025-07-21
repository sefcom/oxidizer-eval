fn uu_tail::follow::watch::Observer::add_bad_path() -> int {
    let v0: u8;  // [bp-0x18]
    let v2: i64;  // rdi
    let v3: u32;  // rsi
    let v4: u32;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // r8
    let v7: u8;  // r9b

    if !*((v2 + 140) as &i8) {
        return;
    } else if *((v2 + 142) as &i8) != 2 {
        uu_tail::follow::watch::Observer::add_path(v2, v3, v4, v5, v6, 0, *(&v0 as &i64), v7);
        return;
    } else {
        return;
    }
}
