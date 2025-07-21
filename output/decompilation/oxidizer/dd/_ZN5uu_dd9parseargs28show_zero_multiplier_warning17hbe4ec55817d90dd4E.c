fn uu_dd::parseargs::show_zero_multiplier_warning() -> long long {
    let v0: void*;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u8;  // [bp-0x60]
    let v4: void*;  // [bp-0x58], Other Possible Types: u64
    let v5: u64;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v7: u8;  // [bp-0x40]
    let v9: u64;  // rdx

    v4 = uucore::util_name();
    v5 = v9;
    eprint!("{}: warning: ", &v4);
    v0 = 0;
    v1 = &g_422fd5;
    v2 = 2;
    v3 = 1;
    v4 = 0;
    v5 = &g_422fd7;
    v6 = 3;
    v7 = 1;
    return eprintln!("{} is a zero multiplier; use {} if that is intended", &v0, &v4);
}
