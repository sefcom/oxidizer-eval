fn just::parser::Parser::cook_string(a0: i64, a1: i64, a2: i128, a3: u64) -> int {
    let v0: core::fmt::rt::Argument;  // [bp-0x198]
    let v1: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x128]
    let v2: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0x120]
    let v3: struct72;  // [bp-0x118]
    let v4: struct16;  // [bp-0x110]
    let v5: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x108]
    let v9: core::option::Option<u32>;  // rax:rax

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v0 = 9223372036854775809;
    v4 = a2;
    v5 = a3 + a2;
    v9 = core::str::validations::next_code_point(&v4) as u128;
    return struct32 {
        field_0: v1.b as i128
        field_16: 0
        padding_24: <UNKNOWN>
        field_72: <UNKNOWN>
    };
}
