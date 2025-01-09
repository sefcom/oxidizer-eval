fn uu_tac::try_mmap_stdin(a0: &struct24) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: i8;  // [bp-0x40]
    let v2: i8;  // [bp-0x38]
    let v3: struct8;  // [bp-0x28]
    let v4: void*;  // [sp-0x18]
    let v5: u8;  // [sp-0x10]
    let v6: u16;  // [sp-0xe]
    let v9: u64;  // rax
    let v10: Result<struct16, struct8>;  // rax

    v0 = std::io::stdio::stdin();
    v4 = 0;
    v3 = struct8 {
        field_0: 0
    };
    v5 = 0;
    v6 = 0;
    if !v1 {
        *(&(&a0->field_0)[1] as &i8) = v2;
        a0->field_0 = 1;
        v10 = memmap2::MmapOptions::map(&v3, &v0);
        return v10;
    }
    v10 = v9;
    return v10;
}
