fn uu_dd::parseargs::get_ctable(a0: i8, a1: i8) -> long long {
    if a0 == 3 {
        if a1 == 2 {
            return 0;
        }
        return &g_423025;
    } else {
        if a1 == 2 {
            return ((&g_423928.field_0)[a0] + &g_423928.field_0) as i64;
        } else if a0 == 2 {
            return &g_423525;
        } else if a0 == 1 {
            return &g_423725;
        } else {
            return &g_423625;
        }
    }
}
