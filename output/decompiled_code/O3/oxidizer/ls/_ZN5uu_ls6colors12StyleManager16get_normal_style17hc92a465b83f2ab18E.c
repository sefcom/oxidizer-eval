fn uu_ls::colors::StyleManager::get_normal_style(a0: &u64) -> u64 {
    return lscolors::LsColors::style_for_indicator(*(a0), 0);
}
