fn starship::modules::status::status_signal_name(a0: u32) -> long long {
    if a0 - 1 > 21 {
        return 0;
    }
    return ((&g_54df08.field_0)[1 + a0] + &g_54df08.field_0) as i64;
}
