fn uu_dd::parseargs::show_zero_multiplier_warning() -> u64 {
    let v0: Arguments;  // [bp-0xa8]
    let v1: void*;  // [sp-0x78]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: u8;  // [sp-0x60]
    let v5: u64;  // [sp-0x58], Other Possible Types: void*
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48]
    let v8: u8;  // [sp-0x40]
    let v9: Argument;  // [bp-0x38]
    let v10: Argument;  // [bp-0x28]
    let v12: u64;  // rdx

    v5 = uucore::util_name();
    v6 = v12;
    eprint!("{:?}: warning: ", &v5);
    v1 = 0;
    v2 = &g_422fd5;
    v3 = 2;
    v4 = 1;
    v5 = 0;
    v6 = &g_422fd7;
    v7 = 3;
    v8 = 1;
    v9 = Argument {
        value: &v1
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v10 = Argument {
        value: &v5
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v0 = Arguments {
        pieces: ["", " is a zero multiplier; use ", " if that is intended\n"]
        args: [&v9, &v10]
        fmt: 0
    };
    return std::io::stdio::_eprint(&v0);
}
