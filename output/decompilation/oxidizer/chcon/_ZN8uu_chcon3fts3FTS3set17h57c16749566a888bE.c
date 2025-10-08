fn uu_chcon::fts::FTS::set(a0: i64, a1: u64, a2: u64, a3: u32) -> long long {
    if !a2 {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b29a
            field_16: 10
            field_24: 158913789955
        };
    } else if fts_set(a1, a2, a3) != -1 {
        return struct4 {
            field_0: 18
        };
    } else {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b2a4
            field_16: 9
            field_24: *(__errno_location() as u64 as &i32) as u32 as u64 * 0x100000000 | 2
        };
    }
}
