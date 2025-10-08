fn uu_ls::colors::StyleManager::apply_normal(a0: u64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x28]
    let v1: u64;  // [bp-0x1b]
    let v3: i64;  // rax

    v3 = uu_ls::colors::StyleManager::get_normal_style(*(a1 as &i64));
    if !v3 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v1 = *((v3 + 13) as &i64);
    v0 = *(v3 as &i128);
    return uu_ls::colors::StyleManager::get_style_code(a0, a1, &v0);
}
