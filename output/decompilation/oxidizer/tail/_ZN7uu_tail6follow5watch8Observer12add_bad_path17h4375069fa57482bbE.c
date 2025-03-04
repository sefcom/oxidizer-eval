fn uu_tail::follow::watch::Observer::add_bad_path() -> u32 {
    let v0: u8;  // [bp-0x18]
    let v1: u32;  // [sp-0x10]
    let v3: &u64;  // rdi
    let v4: u32;  // r9d
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u64;  // rcx
    let v8: u64;  // r8

    if !*((&v3[17] as &char + 4) as &i8) {
        return;
    }
    if *((&v3[17] as &char + 6) as &i8) == 2 {
        return;
    }
    v1 = v4;
    uu_tail::follow::watch::Observer::add_path(v3, v5, v6, v7, v8, 0, *(&v0 as &i64));
}
