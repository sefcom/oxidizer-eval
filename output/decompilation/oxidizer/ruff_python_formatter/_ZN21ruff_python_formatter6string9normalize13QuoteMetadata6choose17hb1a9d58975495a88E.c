fn ruff_python_formatter::string::normalize::QuoteMetadata::choose(a0: &struct16, a1: i32) -> u64 {
    let v1: u32;  // ecx
    let v2: struct16;  // cl

    v1 = *(a0 as &i8);
    if v1 && v1 != 1 {
        v2 = (*((a0 + 8) as &i32) < *((a0 + 4) as &i32)) - 0 - (*((a0 + 4) as &i32) < *((a0 + 8) as &i32));
        if _ccall(4, 13, (*((a0 + 8) as &i32) < *((a0 + 4) as &i32)) as u8 as u64, (*((a0 + 4) as &i32) < *((a0 + 8) as &i32)) as u8 as u64, (*((a0 + 4) as &i32) < *((a0 + 8) as &i32)) as u8 as u64) as char {
            return a1;
        } else if v2 == 1 {
            return v2 as u64 & -0x100 | 1;
        } else {
            return 0;
        }
    }
    return *((a0 + 12) as &i8);
}
