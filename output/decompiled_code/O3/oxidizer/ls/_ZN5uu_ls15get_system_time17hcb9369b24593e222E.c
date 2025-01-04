fn uu_ls::get_system_time(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [sp-0x10]
    let v1: u64;  // [sp-0x8]
    let v3: u64;  // r14
    let v4: u64;  // rbx

    v1 = v3;
    v0 = v4;
    goto *((0x434700 + *((vvar_1 + 243) as &i8) * 4) as &i32) + 0x434700;
}
