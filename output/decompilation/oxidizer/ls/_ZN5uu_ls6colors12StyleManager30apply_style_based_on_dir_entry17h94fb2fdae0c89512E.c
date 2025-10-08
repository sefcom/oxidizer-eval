fn uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0: u32, a1: i64, a2: u64, a3: u64, a4: u8) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax

    v0 = v2;
    return uu_ls::colors::StyleManager::apply_style(a0, a1, lscolors::LsColors::style_for(*(a1 as &i64), a2), a3, a4);
}
