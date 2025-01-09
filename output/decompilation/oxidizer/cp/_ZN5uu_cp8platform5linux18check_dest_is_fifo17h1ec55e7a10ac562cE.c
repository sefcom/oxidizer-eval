fn uu_cp::platform::linux::check_dest_is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0xb8]
    let v2: u64;  // rbx
    let v3: u32;  // ecx
    let v4: u64;  // rdi

    v0 = std::fs::metadata(a0, a1);
    return (v2 & -0x100 | v3 == 0x1000 & v4 != 2) & 4294967295 & 4294967295;
}
