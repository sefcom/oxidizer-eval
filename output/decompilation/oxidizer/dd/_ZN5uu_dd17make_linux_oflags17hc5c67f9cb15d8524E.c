fn uu_dd::make_linux_oflags(a0: &u64) -> u64 {
    let v1: u32;  // eax

    v1 = *(a0 as &i8) * 0x400;
    if *((a0 as &char + 2) as &i8) {
        v1 |= 0x4000;
    }
    if *((a0 as &char + 3) as &i8) {
        v1 |= 0x10000;
    }
    if *((a0 as &char + 4) as &i8) {
        v1 |= 0x1000;
    }
    if a0[1] as i8 {
        v1 |= 0x40000;
    }
    if *((&a0[1] as &char + 1) as &i8) {
        v1 |= 0x100;
    }
    if *((&a0[1] as &char + 2) as &i8) {
        v1 |= 0x20000;
    }
    if *((a0 as &char + 7) as &i8) {
        v1 |= 0x800;
    }
    if *((a0 as &char + 5) as &i8) {
        v1 |= 0x101000;
    }
    return v1;
}
