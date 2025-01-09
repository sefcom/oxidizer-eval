fn uu_rm::prompt_dir(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u128;  // [sp-0xd0], Other Possible Types: struct16
    let v1: u8;  // [bp-0x98]
    let v3: u64;  // rbp
    let v4: u64;  // rbx
    let v5: u32;  // ebx
    let v6: u64;  // rbx

    v3 = a2;
    if !v3 {
        v5 = v4 | -0x100 | 1;
        return v5;
    }
    v0 = std::fs::metadata(a0, a1);
    v5 = v6 | -0x100 | 1;
    if v0 as i32 != 2 {
        v5 = uu_rm::handle_writable_directory(a0, a1, v3 & 4294967295, *(&v1 as &i32));
    }
    return v5;
}
