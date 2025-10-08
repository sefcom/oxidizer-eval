fn starship::modules::dotnet::try_find_nearby_global_json(a1: i64, a2: i64, a3: i64, a4: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0xf8], Other Possible Types: u8
    let v1: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xe8]
    let v3: struct16;  // [bp-0xe0]
    let v4: struct40;  // [bp-0xd0]
    let v5: <anon>;  // [bp-0xc8]
    let v6: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0xc0]
    let v7: struct16;  // [bp-0xb8]
    let v8: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xb0], Other Possible Types: struct20
    let v9: Option<struct24>;  // [bp-0xb0]
    let v10: struct16;  // [bp-0x70], Other Possible Types: struct20
    let v11: struct24;  // [bp-0x60]
    let v13: struct40;  // rsi
    let v14: u64;  // rdx

    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = a4;
    if a3 {
        v10 = std::path::Path::components(a3, a4);
        v8 = std::path::Path::components(a1, a2);
        if <std::path::Components as core::cmp::PartialEq>::eq(&v10, &v8) {
            goto LABEL_b9170b;
        }
    }
    v3 = struct16 {
        field_0: std::path::Path::parent(a1, a2)
        field_8: v14
    };
    v13 = &v3;
LABEL_b9170b:
    v8 = core::iter::traits::iterator::Iterator::chain(v13, &v6);
    core::iter::traits::iterator::Iterator::collect(&v0, &v8);
    v0 = alloc::vec::Vec<T,A>::dedup_by();
    v10 = struct16 {
        field_0: v1
        field_8: v2 * 16 + v1
    };
    v11 = &v4;
    v9 = core::iter::traits::iterator::Iterator::try_fold(&v10, &v11 as u8);
    if !((((0 ^ v9 as i64) & (0 ^ -(v9 as i64))) >> 63) as char) {
        return Some(struct24 {
            field_0: v9 as i128
            field_16: *((&v9 as &char + 16) as &i64)
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
