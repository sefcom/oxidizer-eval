fn uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp+0x0]
    let v2: &u64;  // rax

    v2 = lscolors::LsColors::style_for(*(a1 as &i64), a2);
    return uu_ls::colors::StyleManager::apply_style(a1, v2, a3, a4, a5, *(&v0 as &i32)) as u64;
}
