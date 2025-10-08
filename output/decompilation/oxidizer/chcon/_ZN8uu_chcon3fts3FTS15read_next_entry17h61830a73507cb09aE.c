fn uu_chcon::fts::FTS::read_next_entry(a0: i64, a1: i64) -> int {
    let v0: u64;  // [bp-0x28]
    let v1: struct9;  // [bp-0x20]
    let v3: u64;  // rax

    v3 = fts_read(*(a1 as &i64));
    *((a1 + 8) as &u64) = v3;
    if v3 {
        return struct8 {
            field_0: 18
            field_4: 1
        };
    }
    v0 = *(__errno_location() as &i32) * 0x100000000 | 2;
    v1 = std::io::error::repr_bitpacked::decode_repr(v0);
    if v1.field_0 || *(&(&v1.field_0)[4] as &i32) {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b290
            field_16: 10
            field_24: v0
        };
    }
    return struct8 {
        field_0: 18
        field_4: 0
    };
    return struct32 {
        field_0: 16
        padding_4: <UNKNOWN>
        field_8: &g_41b290
        field_16: 10
        field_24: v0
    };
}
