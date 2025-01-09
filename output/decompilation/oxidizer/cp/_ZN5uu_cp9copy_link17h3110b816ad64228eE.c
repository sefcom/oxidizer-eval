fn uu_cp::copy_link(a0: &Option<Result<struct8, struct32>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u128;  // [sp-0x38], Other Possible Types: struct16
    let v4: i8;  // [bp-0x28]

    v3 = std::fs::read_link(a1, a2);
    if v0 == 0x8000000000000000 {
        return struct16 {
            field_0: 2
            field_8: v1
        };
    }
    v0 = v3;
    v1 = *((&v3 as &char + 8) as &i64);
    v2 = v4;
    if (std::path::Path::is_symlink(a3, a4) as i8 || std::path::Path::is_file(a3, a4) as i8) && std::fs::remove_file(a3, a4) {
        return struct16 {
            field_0: 2
            field_8: v8
        };
    }
    uu_cp::symlink_file(a0, v1, v2, a3, a4, a5);
}
