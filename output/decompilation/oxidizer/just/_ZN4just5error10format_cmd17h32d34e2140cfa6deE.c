fn just::error::format_cmd(a0: i64, a1: u64, a2: u64, a3: i64) -> int {
    let v0: u8;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]
    let v2: u32;  // [bp-0x38]
    let v3: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x30]
    let v4: struct24;  // [bp-0x30]

    v3 = core::iter::traits::iterator::Iterator::chain(a1, a2);
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    v4 = alloc::str::join_generic_copy(v1, v2, " ");
    return struct24 {
        field_0: v4.field_0
        field_16: v4.field_16
    };
}
