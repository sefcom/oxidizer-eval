fn uu_dd::parseargs::get_ctable(a0: i8, a1: i8) -> u64 {
    if a0 == 3 {
        if a1 == 2 {
            return 0;
        }
        return &g_4212c2;
    } else {
        if a1 == 2 {
            return (&g_4234c4.field_0)[a0] + &g_4234c4.field_0;
        } else if !a0 {
            return &g_4218c2;
        } else if a0 == 1 {
            return &g_421ac2;
        } else {
            return &g_4218c2;
        }
    }
}
