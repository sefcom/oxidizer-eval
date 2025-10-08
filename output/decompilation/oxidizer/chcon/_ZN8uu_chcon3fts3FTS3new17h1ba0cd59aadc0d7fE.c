fn uu_chcon::fts::FTS::new(a0: i64, a1: u64, a2: u64, a3: u32) -> int {
    let v0: u128;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: iNone;  // [bp-0x8c]
    let v3: u128;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x60], Other Possible Types: u8
    let v7: i8;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: u128;  // [bp-0x40]
    let v10: u128;  // [bp-0x30]
    let v12: u32;  // rdx
    let v14: u64;  // rax
    let v15: u64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v6, core::iter::traits::iterator::Iterator::map(core::iter::traits::iterator::Iterator::map(a1, a2), v12), a2);
    v14 = v6;
    if v14 != 18 {
        v2 = v6.b as i128;
        v0 = v6.b as i128;
        return struct80 {
            field_0: v14 as u32
            field_4: <UNKNOWN>
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v3 = *(&v7 as &i128);
    v5 = v8;
    if !v8 {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b27c
            field_16: 10
            field_24: 85899345923
        };
    }
    v6 = core::iter::traits::iterator::Iterator::chain(v4, v8 * 16 + v4);
    core::iter::traits::iterator::Iterator::collect(&v0, &v6);
    v15 = fts_open(*(&v1 as &i64), a3, 0);
    if !v15 {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b286
            field_16: 10
            field_24: *(__errno_location() as u64 as &i32) as u32 as u64 * 0x100000000 | 2
        };
    }
    return struct24 {
        field_0: 18
        padding_4: <UNKNOWN>
        field_8: v15
        field_16: 0
    };
}
