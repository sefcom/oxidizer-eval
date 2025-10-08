fn uu_rm::remove_dir(a0: &std::path::Path, a1: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98]
    let v2: core::fmt::rt::Argument;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: core::fmt::Arguments;  // [bp-0x80]
    let v5: i64;  // [bp-0x70]
    let v6: core::fmt::Arguments;  // [bp-0x68], Other Possible Types: u64
    let v7: u64;  // [bp-0x60]
    let v8: core::fmt::rt::Argument;  // [bp-0x58], Other Possible Types: u64
    let v9: u64;  // [bp-0x50]
    let v10: core::fmt::Arguments;  // [bp-0x48], Other Possible Types: u64
    let v11: core::fmt::rt::Argument;  // [bp-0x40], Other Possible Types: u8
    let v12: u64;  // [bp-0x38]
    let v14: u64;  // rdi
    let v15: u64;  // rsi
    let v16: u64;  // rdx
    let v18: u64;  // rax
    let v19: u64;  // rdx

    if !uu_rm::prompt_dir(v14, v15, *((a1 + 6) as &i8), *((a1 + 7) as &i8)) {
        return 0;
    }
    if !*((a1 + 4) as &i8) && *((a1 + 3) as &i8) != 1 {
        v8 = uucore::util_name();
        v9 = v16;
        eprint!("{}: ", &v8);
        v8 = 1;
        v9 = v14;
        v10 = v15;
        v11 = 1;
        v5 = &v8;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "cannot remove ";
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        return std::io::stdio::_eprint(&v0) & -0x100 | 1;
    }
    v18 = std::fs::remove_dir(a0);
    if v18 {
        v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v18, a0);
        v8 = uucore::util_name();
        v9 = v19;
        eprint!("{}: ", &v8);
        eprintln!("{}", &v12);
        return core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v12) as u64 & -0x100 | 1;
    } else if *((a1 + 5) as &i8) == 1 {
        uu_rm::normalize(&v5 as u8, a0);
        v8 = 1;
        v9 = v6;
        v10 = v7;
        v11 = 1;
        println!("removed directory {}", &v8);
    }
    return 0;
}
