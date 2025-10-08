fn uu_rm::remove_file(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x78], Other Possible Types: u64
    let v1: u64;  // [bp-0x70]
    let v2: core::fmt::Arguments;  // [bp-0x68], Other Possible Types: u64
    let v3: core::fmt::rt::Argument;  // [bp-0x60], Other Possible Types: u8
    let v4: u8;  // [bp-0x58]
    let v5: u64;  // [bp-0x50]
    let v6: core::fmt::Arguments;  // [bp-0x48]
    let v7: core::fmt::rt::Argument;  // [bp-0x38]
    let v9: core::fmt::rt::Argument;  // rax
    let v10: u64;  // rdx
    let v11: core::fmt::rt::Argument;  // rax
    let v12: u64;  // rdx
    let v15: u64;  // rax

    if !uu_rm::prompt_file(a0, a1, *((a2 + 6) as &i8), *((a2 + 7) as &i8)) {
        return 0;
    }
    v9 = std::fs::remove_file(a0, a1);
    if v9 {
        v7 = v9;
        if std::io::error::Error::kind(v9) as u8 == 1 {
            v0 = uucore::util_name();
            v1 = v10;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: Permission denied", &v0);
            v11 = v9;
        } else {
            v0 = uucore::util_name();
            v1 = v12;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {}: {}", &v0, &v7);
            v11 = v7;
        }
        v15 = core::ptr::drop_in_place<std::io::error::Error>(v11) & -0x100 | 1;
        return v15;
    } else if *((a2 + 5) as &i8) == 1 {
        uu_rm::normalize(&v4, a0, a1);
        v0 = 1;
        v1 = v5;
        v2 = v6;
        v3 = 1;
        println!("removed {}", &v0);
    }
    return 0;
}
