long long fish::screen::ScreenData::insert_line_at_index(unsigned long long a0[5], unsigned long long a1)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    uint128_t v2;  // [bp-0x28]
    char v3;  // [bp-0x18]

    if (a1 > a0[4])
        core::panicking::panic("assertion failed: idx <= self.line_datas.len()Repaint %uassertion failed: (0..=effective_commandline.len()).contains(&cursor_pos)Number of trailing prompt lines prompt linesexceeds prompt's yinferred from reported cursor positionReported cursor line indexi", 46, &g_14e1690); /* do not return */
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    a0[2].insert(a1, &v0);
    if (a1 >= a0[4])
        core::panicking::panic_bounds_check(a1, a0[4], &g_14e16c0); /* do not return */
    return a1 * 40 + a0[3];
}
