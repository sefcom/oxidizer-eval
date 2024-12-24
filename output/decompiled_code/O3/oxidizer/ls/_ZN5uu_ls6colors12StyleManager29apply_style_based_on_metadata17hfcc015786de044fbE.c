fn uu_ls::colors::StyleManager::apply_style_based_on_metadata(a0: u64, a1: void*, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: i64;  // [bp+0x8]

    return uu_ls::colors::StyleManager::apply_style(a0, a1, lscolors::LsColors::style_for_path_with_metadata(*(a1 as &i64), a2 + 24, a3, a3, a4, a5), a4, a5, v0);
}
