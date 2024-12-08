fn uu_ls::colors::StyleManager::apply_normal(a0: &u64, a1: u32) -> u64 {
    let v0: u128;  // [bp-0x48]
    let v1: u64;  // [sp-0x3b]
    let v2: struct16;  // [bp-0x28]
    let v3: u64;  // [sp-0x1b]
    let v5: &u128;  // rax

    v5 = uu_ls::colors::StyleManager::get_normal_style(a1);
    if !v5 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v1 = *((v5 as &char + 13) as &i64);
    v0 = *(v5);
    v3 = v1;
    v2 = struct16 {
        field_0: v0
    };
    uu_ls::colors::StyleManager::get_style_code(a0, a1, &v2);
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
