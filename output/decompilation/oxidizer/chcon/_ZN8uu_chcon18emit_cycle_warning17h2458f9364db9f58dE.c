fn uu_chcon::emit_cycle_warning(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x48]
    let v1: struct24;  // [bp-0x40], Other Possible Types: u64
    let v2: u64;  // [bp-0x38]
    let v3: u8;  // [bp-0x30]
    let v5: struct24;  // rdx

    v0 = uucore::util_name();
    v1 = v5;
    eprint!("{}: warning: ", &v0);
    v0 = 1;
    v1 = a0;
    v2 = a1;
    v3 = 1;
    return eprintln!("Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle {}.", &v0);
}
