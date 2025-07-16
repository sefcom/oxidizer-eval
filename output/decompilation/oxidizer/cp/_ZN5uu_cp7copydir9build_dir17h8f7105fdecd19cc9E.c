fn uu_cp::copydir::build_dir(a1: i8, a2: i8, a3: i64, a4: i8) -> : struct16 {
    let a0: u8;  // sil
    let v0: u32;  // [bp-0x20]
    let v1: u8;  // [bp-0x1c]
    let v3: u32;  // ecx
    let v4: u64;  // rax
    let v5: i64;  // rdi
    let v6: u64;  // rax

    v1 = a3;
    v3 = (!a1 ? 0 : 18);
    v0 = (uucore::features::mode::get_umask() as i32 & 511 | v3) ^ 511;
    v4 = std::fs::DirBuilder::create(&v0, a2);
    if v4 {
        *((v5 + 8) as &u64) = v4;
        v6 = 2;
    }
    *(v5 as &u64) = v6;
    return;
}
