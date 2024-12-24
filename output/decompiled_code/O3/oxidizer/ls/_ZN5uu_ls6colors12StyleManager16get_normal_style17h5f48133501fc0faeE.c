fn uu_ls::colors::StyleManager::get_normal_style(a0: void*) -> u64 {
    return lscolors::LsColors::style_for_indicator(*(a0 as &i64), 0);
}
