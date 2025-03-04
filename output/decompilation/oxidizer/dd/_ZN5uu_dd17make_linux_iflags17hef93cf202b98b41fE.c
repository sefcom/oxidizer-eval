fn uu_dd::make_linux_iflags(a0: &u64) -> u64 {
    let v1: u32;  // eax
    let v2: u32;  // ecx
    let v3: u32;  // eax
    let v4: u32;  // ecx
    let v5: u32;  // eax
    let v6: u32;  // ecx
    let v7: u32;  // eax
    let v8: u32;  // edx

    v1 = *((a0 as &char + 1) as &i8) * 0x4000;
    v2 = (!*((a0 as &char + 2) as &i8) ? v1 : v1 | 0x10000);
    if !*((a0 as &char + 3) as &i8) {
        v3 = v2;
    } else {
        v3 = v2 + 0x1000;
    }
    v4 = (!*((a0 as &char + 7) as &i8) ? v3 : v3 | 0x40000);
    if !a0[1] as i8 {
        v5 = v4;
    } else {
        v5 = v4 | 0x100;
    }
    v6 = (!*((&a0[1] as &char + 1) as &i8) ? v5 : v5 | 0x20000);
    if !*((a0 as &char + 6) as &i8) {
        v7 = v6;
    } else {
        v7 = v6 | 0x800;
    }
    v8 = (!*((a0 as &char + 4) as &i8) ? v7 : v7 | 0x101000);
    return v8;
}
