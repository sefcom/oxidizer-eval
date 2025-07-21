fn uu_ls::colors::StyleManager::apply_normal(a1: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x48], Other Possible Types: u128
    let v1: u64;  // [bp-0x3b]
    let v2: struct24;  // [bp-0x28]
    let v4: i64;  // rax
    let v5: u64;  // rcx
    let v6: i64;  // rdi

    v4 = uu_ls::colors::StyleManager::get_normal_style(a0);
    if !v4 {
        *(v6 as &i64) = 0;
        *((v6 + 8) as &i64) = 1;
        *((v6 + 16) as &i64) = 0;
        return;
    }
    v5 = *((v4 + 13) as &i64);
    v1 = *((v4 + 13) as &i64);
    v0 = *(v4 as &i128);
    v2 = v0;
    uu_ls::colors::StyleManager::get_style_code(a0, &v2, v5);
    return;
}
