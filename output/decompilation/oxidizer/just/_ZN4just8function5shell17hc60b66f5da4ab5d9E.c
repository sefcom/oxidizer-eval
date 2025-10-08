fn just::function::shell(a0: i64, a1: i64, a2: u64, a3: u64, a4: i64, a5: i64) -> long long {
    let v0: u8;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: struct24;  // [bp-0x80]
    let v4: u64;  // [bp-0x80]
    let v5: u64;  // [bp-0x70]
    let v6: struct16;  // [bp-0x68]
    let v7: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x50]
    let v8: struct24;  // [bp-0x50]

    v7 = core::iter::traits::iterator::Iterator::chain(a2, a3);
    core::iter::traits::iterator::Iterator::collect(&v0, &v7);
    v3 = just::evaluator::Evaluator::run_command(*(a1 as &i64), a2, a3, v1, v2);
    if !((((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char) {
        return struct32 {
            field_0: 0
            field_8: *(&v3.field_0 as &i128)
            field_24: v5
        };
    }
    v6 = v3.field_8;
    v8 = just::function::shell::{{closure}}(&v6);
    return struct32 {
        field_0: 1
        field_8: *(&v8.field_0 as &i128)
        field_24: *((&v8.field_8 as &char + 8) as &i64)
    };
}
