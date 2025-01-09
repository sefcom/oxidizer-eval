fn uu_rmdir::uumain::uumain::points_to_directory(a0: &Result<struct1, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0xb8], Other Possible Types: u128

    v0 = std::fs::metadata(a1, a2);
    if v0 as i32 != 2 {
        return Ok(struct1 {
            field_0: ((0xf000 & v1) == 0x4000) as u8 as u8
        });
    }
    a0->field_8 = *((&v0 as &char + 8) as &i64);
}
