fn uu_ls::colors::StyleManager::apply_style_based_on_metadata(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> long long {
    let v0: u8;  // [bp+0x0]
    let v1: &u64;  // rax

    v1 = lscolors::LsColors::style_for_path_with_metadata(*(a1 as &i64), a2 + 24, a3);
    return uu_ls::colors::StyleManager::apply_style(a1, v1, a4, a5, a6, *(&v0 as &i32)) as u64;
}
