fn uu_cp::copydir::build_dir(a0: &Option<struct8>, a1: u8, a2: u8, a3: u32, a4: u8) -> u64 {
    let v0: struct4;  // [bp-0x20]
    let v1: u8;  // [sp-0x1c]
    let v3: u64;  // rax

    v1 = a4;
    v0 = struct4 {
        field_0: (uucore::features::mode::get_umask() as i32 & 511 | vvar_6{reg 56}) ^ 511
    };
    v3 = std::fs::DirBuilder::create(&v0, a3);
    if v3 {
        a0->field_8 = v3;
    }
    return struct8 {
        field_0: v4
    };
}
