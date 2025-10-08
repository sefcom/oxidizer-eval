fn uu_dd::parseargs::show_zero_multiplier_warning() -> long long {
    let v0: void*;  // [bp-0x78]
    let v1: &str;  // [bp-0x70]
    let v2: u8;  // [bp-0x60]
    let v3: void*;  // [bp-0x58], Other Possible Types: u64
    let v4: &str;  // [bp-0x50], Other Possible Types: u64
    let v5: u8;  // [bp-0x40]
    let v7: u64;  // rdx

    v3 = uucore::util_name();
    v4 = v7;
    eprint!("{}: warning: ", &v3);
    v0 = 0;
    v1 = "0x";
    v2 = 1;
    v3 = 0;
    v4 = "00x";
    v5 = 1;
    return eprintln!("{} is a zero multiplier; use {} if that is intended", &v0, &v3);
}
