fn uu_ls::colors::StyleManager::is_current_style(a0: void*, a1: u64) -> u64 {
    if a0->field_8 != 2 {
        return <lscolors::style::Style as core::cmp::PartialEq>::eq(&a0->field_8 as &struct_0, a1);
    }
    return 0;
}
