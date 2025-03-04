fn uu_cp::copydir::build_dir(a0: &Option<struct8>, a1: u8, a2: u8, a3: u32, a4: u8) -> u64 {
    let v0: struct4;  // [bp-0x20]
    let v1: u8;  // [sp-0x1c]
    let v5: u64;  // rax

    v1 = a4;
    v0 = struct4 {
        field_0: (uucore::features::mode::get_umask() as i32 & 511 | v4) ^ 511
    };
    v5 = std::fs::DirBuilder::create(&v0, a3);
    if v5 {
        a0->field_8 = v5;
    }
    return struct8 {
        field_0: v6
    };
}
