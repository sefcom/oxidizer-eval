fn uu_ls::colors::StyleManager::apply_style_based_on_metadata(a0: &struct24, a1: &u64, a2: u32, a3: u64, a4: u32, a5: u32, a6: u8) -> u64 {
    return uu_ls::colors::StyleManager::apply_style(a0, a1, lscolors::LsColors::style_for_path_with_metadata(*(a1), a2 + 24, a3), a4, a5, a6);
}
