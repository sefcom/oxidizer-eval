fn uu_rm::remove_file(a0: u32, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [bp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i8;  // [sp-0x60]
    let v4: i192;  // [sp-0x58], Other Possible Types: struct24
    let v5: i64;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rdx

    if !uu_rm::prompt_file(a0, a1, a3) as i8 {
        return 0;
    }
    v7 = std::fs::remove_file(a0, a1);
    if v7 {
        v5 = v7;
        if std::io::error::Error::kind(v7) as i8 == 1 {
            v0 = uucore::util_name();
            v1 = v8;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: Permission denied", &v0);
        } else {
            v0 = uucore::util_name();
            v1 = v9;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: {}", &v0, &v5);
        }
        return core::ptr::drop_in_place<std::io::error::Error>(&v5) & -0x100 | 1;
    } else if a2 {
        v4 = uu_rm::normalize();
        v0 = 1;
        v1 = *((&v4 as &char + 8) as &i128);
        v3 = 1;
        println!("removed {}", &v0);
    }
}
