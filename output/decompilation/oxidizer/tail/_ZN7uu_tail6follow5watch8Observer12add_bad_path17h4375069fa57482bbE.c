fn uu_tail::follow::watch::Observer::add_bad_path() -> u32 {
    let v0: u32;  // [sp-0x10]
    let v2: &u64;  // rdi
    let v3: u32;  // r9d
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v6: u64;  // rcx
    let v7: u64;  // r8

    if !*((&v2[17] as &char + 4) as &i8) {
        return;
    }
    if *((&v2[17] as &char + 6) as &i8) == 2 {
        return;
    }
    v0 = v3;
    uu_tail::follow::watch::Observer::add_path(v2, v4, v5, v6, v7, 0);
}
