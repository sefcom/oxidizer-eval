fn uu_rm::remove_file(a0: i64, a1: i64, a2: i8, a3: i8) -> long long {
    let v0: u64;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u8;  // [bp-0x60]
    let v4: u8;  // [bp-0x58]
    let v5: i8;  // [bp-0x50]
    let v6: u64;  // [bp-0x38]
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: u64;  // rdx
    let v10: u64;  // rdx

    if !uu_rm::prompt_file(a0, a1, a3) as i8 {
        return 0;
    }
    v8 = std::fs::remove_file();
    if v8 {
        v6 = v8;
        if std::io::error::Error::kind(v8) == 1 {
            v0 = uucore::util_name();
            v1 = v9;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: Permission denied", &v0);
        } else {
            v0 = uucore::util_name();
            v1 = v10;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: {}", &v0, &v6);
        }
        return core::ptr::drop_in_place<std::io::error::Error>(&v6) & -0x100 | 1;
    } else if a2 {
        uu_rm::normalize(&v4, a0, a1);
        v0 = 1;
        v1 = *(&v5 as &i128);
        v3 = 1;
        println!("removed {}", &v0);
    }
    return 0;
}
