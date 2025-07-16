fn uu_ls::colors::StyleManager::apply_normal(a1: i64) -> Result<struct24, struct24> {
    let a0: u64;  // rdi
    let v0: u128;  // [bp-0x48]
    let v1: u64;  // [bp-0x3b]
    let v2: u8;  // [bp-0x28]
    let v3: u64;  // [bp-0x1b]
    let v5: i64;  // rax

    v5 = uu_ls::colors::StyleManager::get_normal_style(a1);
    if !v5 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v1 = *((v5 + 13) as &i64);
    v0 = *(v5 as &i128);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    uu_ls::colors::StyleManager::get_style_code(a0, a1, &v2);
    return a0;
}
