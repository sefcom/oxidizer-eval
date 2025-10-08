fn uu_rm::prompt_descend(a0: i64, a1: i64) -> u64 {
    let v0: std::io::stdio::Stderr;  // [bp-0xa0]
    let v1: struct16;  // [bp-0x70]
    let v2: u64;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v7: u8;  // [bp-0x38]
    let v9: u64;  // rdx
    let v10: core::result::Result<(), std::io::error::Error>;  // rax
    let v11: void*;  // rax

    v4 = uucore::util_name();
    v5 = v9;
    eprint!("{}: ", &v4);
    v4 = 1;
    v5 = a0;
    v6 = a1;
    v7 = 1;
    eprint!("descend into directory {}?", &v4);
    eprint!(" ");
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
    v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
    if let Err(_) = v10 {
        v11 = uu_rm::prompt_file::{{closure}}(v10);
        if v11 {
            v1 = struct16 {
                field_0: v11
                field_8: &g_4ea7a8
            };
            uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v11) as u32 as u64);
            v2 = uucore::util_name();
            v3 = v9;
            eprintln!("{}: {}", &v2, &v1);
        }
    }
    return uucore::read_yes();
}
