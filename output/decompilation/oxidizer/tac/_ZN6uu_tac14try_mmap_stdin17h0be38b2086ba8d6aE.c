fn uu_tac::try_mmap_stdin(a0: i64) -> double {
    let v0: std::io::stdio::Stdin;  // [bp-0x48]
    let v1: struct24;  // [bp-0x40]
    let v2: u128;  // [bp-0x38]
    let v3: void*;  // [bp-0x28]
    let v4: void*;  // [bp-0x18]
    let v5: u8;  // [bp-0x10]
    let v6: u16;  // [bp-0xe]

    v0 = std::io::stdio::stdin();
    v4 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v1 = memmap2::MmapOptions::map(&v3);
    if !(v1.field_0 as i8 & 1) {
        return struct24 {
            field_0: 1
            field_8: v2
        };
    }
    return struct8 {
        field_0: 0
    };
}
