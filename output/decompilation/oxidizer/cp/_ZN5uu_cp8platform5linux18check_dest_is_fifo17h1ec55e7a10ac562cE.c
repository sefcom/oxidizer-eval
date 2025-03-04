fn uu_cp::platform::linux::check_dest_is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0xb8]
    let v2: i64;  // rbx
    let v3: i32;  // ecx
    let v4: i64;  // rdi

    v0 = std::fs::metadata(a0, a1);
    return (v2 & -0x100 | v3 == 0x1000 & v4 != 2) & 4294967295 & 4294967295;
}
