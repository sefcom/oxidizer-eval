fn just::justfile::Justfile::suggest_recipe(a1: i64, a2: i64, a3: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: core::fmt::Arguments;  // [bp-0x140], Other Possible Types: struct72
    let v1: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0xf8]
    let v2: struct16;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: struct16;  // [bp-0xb8]
    let v5: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xb0]
    let v7: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v8: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v10: struct16;  // rax
    let v11: struct16;  // rax

    v7 = *((a1 + 696) as &i64);
    v8 = v7;
    if let Err(_) = v8 {
        v8 = *((a1 + 712) as &i64);
    }
    v0 = struct72 {
        field_0: (v7) as u8 as u64
        field_8: 0
        field_16: v7
        field_24: *((a1 + 704) as &i64)
        field_32: v0
        field_40: 0
        field_48: v7
        field_56: *((a1 + 704) as &i64)
        field_64: v8
    };
    v10 = *((a1 + 616) as &i64);
    v11 = v10;
    if v11 {
        v11 = *((a1 + 632) as &i64);
    }
    v1 = core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue> {
        inner: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, core::str::CharEscapeDebugContinue>, core::char::EscapeDebug> {
            iter: core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, core::str::CharEscapeDebugContinue>> {
                iter: (v10) as u8 as u64
            }
            frontiter: *((a1 + 624) as &i64)
            backiter: <UNKNOWN>
        }
    };
    v2 = v10;
    v3 = *((a1 + 624) as &i64);
    v4 = v11;
    v5 = core::iter::traits::iterator::Iterator::chain(&v0, &v1);
    just::justfile::Justfile::find_suggestion(a0, a2, a3, &v5);
    return;
}
