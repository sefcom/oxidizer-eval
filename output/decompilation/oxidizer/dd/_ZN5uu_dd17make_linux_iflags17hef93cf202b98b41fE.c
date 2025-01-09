fn uu_dd::make_linux_iflags(a0: &u64) -> u64 {
    let v1: u32;  // eax
    let v2: u32;  // eax
    let v3: u32;  // eax

    v1 = *((a0 as &char + 1) as &i8) * 0x4000;
    if *((a0 as &char + 2) as &i8) {
        v1 |= 0x10000;
    }
    v2 = (!*((a0 as &char + 3) as &i8) ? v1 : v1 + 0x1000);
    if *((a0 as &char + 7) as &i8) {
        v2 |= 0x40000;
    }
    if a0[1] as i8 {
        v3 = v2 | 0x100;
    }
    if *((&a0[1] as &char + 1) as &i8) {
        v3 |= 0x20000;
    }
    if *((a0 as &char + 6) as &i8) {
        v3 |= 0x800;
    }
    if *((a0 as &char + 4) as &i8) {
        v3 |= 0x101000;
    }
    return v3;
}
