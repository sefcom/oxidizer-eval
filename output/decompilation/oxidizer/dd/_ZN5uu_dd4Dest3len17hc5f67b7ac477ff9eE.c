fn uu_dd::Dest::len(a0: &u8) -> u64 {
    let v0: struct16;  // [sp-0xb0], Other Possible Types: u128
    let v3: u64;  // rax

    if *(a0) != 1 {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 4);
    if v0 as i32 == 2 {
        v3 = 1;
    } else {
        v3 = 0;
    }
    return v3;
}
