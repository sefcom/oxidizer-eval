fn uu_ls::colors::StyleManager::is_current_style(a0: i64, a1: i64) -> u64 {
    if *((a0 + 8) as &i8) != 2 {
        return <lscolors::style::Style as core::cmp::PartialEq>::eq(a0 + 8, a1);
    }
    return 0;
}
