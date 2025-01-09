fn uu_dd::Dest::truncate(a0: &u8) -> u64 {
    let v1: u64;  // rdx
    let v2: u32;  // rdx

    if *(a0) != 1 {
        return 0;
    } else if <std::fs::File as std::io::Seek>::seek(a0 + 4, 2, 0) {
        return v1;
    } else {
        return std::fs::File::set_len(a0 + 4, v2);
    }
}
