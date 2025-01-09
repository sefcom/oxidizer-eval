fn uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0: &struct24, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u32) -> u64 {
    return uu_ls::colors::StyleManager::apply_style(a0, a1, lscolors::LsColors::style_for(*(&a1 as &i64), a2), a3, a4, a5);
}
