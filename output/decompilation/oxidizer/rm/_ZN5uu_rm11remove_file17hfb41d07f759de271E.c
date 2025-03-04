fn uu_rm::remove_file(a0: u32, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70], Other Possible Types: int
    let v2: i64;  // [sp-0x68]
    let v3: i8;  // [sp-0x60]
    let v4: struct24;  // [sp-0x58]
    let v5: i64;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rdx

    if !uu_rm::prompt_file(a0, a1, a3 as u64) as i8 {
        return 0;
    }
    v7 = std::fs::remove_file(a0, a1);
    if v7 {
        v5 = v7;
        if std::io::error::Error::kind(v7) as i8 == 1 {
            v1 = v8;
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            show_error!("cannot remove {}: Permission denied", &v0);
        } else {
            v1 = v9;
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            show_error!("cannot remove {}: {}", &v0, &v5);
        }
        return core::ptr::drop_in_place<std::io::error::Error>(&v5) & -0x100 | 1;
    } else if a2 {
        v4 = uu_rm::normalize(a0, a1);
        v0 = 1;
        *(&v1 as &i128) = *((&v4.field_0 as &char + 8) as &i128);
        v3 = 1;
        println!("removed {}", &v0);
    }
}
