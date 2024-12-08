fn uu_tac::try_mmap_stdin(a0: void*) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: i8;  // [bp-0x40]
    let v3: struct8;  // [bp-0x28]
    let v4: void*;  // [sp-0x18]
    let v5: u8;  // [sp-0x10]
    let v6: u16;  // [sp-0xe]

    v0 = std::io::stdio::stdin();
    v4 = 0;
    v3 = struct8 {
        field_0: 0
    };
    v5 = 0;
    v6 = 0;
    if !v1 {
        return struct24 {
            field_0: 1
            field_8: v2
        };
    }
    return struct8 {
        field_0: 0
    };
}
