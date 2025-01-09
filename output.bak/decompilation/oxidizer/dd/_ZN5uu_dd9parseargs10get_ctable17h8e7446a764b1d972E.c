fn uu_dd::parseargs::get_ctable(a0: u32, a1: u8) -> u64 {
    if a0 != 3 {
        if a1 == 2 {
            return (*((&g_423928 + 4 * (a0 & 255)) as &i32) + &g_423928) as i64;
        } else if a0 != 2 {
            if a0 != 1 {
                if (a1 & 1) {
                    return &g_423625;
                }
                return &g_423525;
            } else {
                if (a1 & 1) {
                    return &g_423825;
                }
                return &g_423725;
            }
        } else {
            if (a1 & 1) {
                return &g_423525;
            }
            return &g_423625;
        }
    } else {
        if a1 == 2 {
            return 0;
        } else if (a1 & 1) {
            return &g_423125;
        } else {
            return &g_423025;
        }
    }
}
