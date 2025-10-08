fn just::source::Source::import(a1: i64, a2: &struct24, a3: i64) -> : struct124 {
    let a0: i64;  // rdi
    let v0: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0xc8]
    let v1: struct89;  // [bp-0xb8]
    let v2: struct89;  // [bp-0xa8]
    let v4: core::fmt::Arguments;  // [bp-0x98]
    let v5: struct24;  // [bp-0x80], Other Possible Types: u64
    let v6: struct24;  // [bp-0x80]
    let v7: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x80]
    let v8: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x80]
    let v9: struct24;  // [bp-0x80]
    let v10: u128;  // [bp-0x48]
    let v12: u32;  // ebp

    v12 = *((a1 + 120) as &i32);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v5, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v0 as u256 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v6 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v0 = v5;
    v7 = core::iter::traits::iterator::Iterator::chain(&v0 as u256, &v0);
    core::iter::traits::iterator::Iterator::collect(&v7 as u8, &v7);
    v8 = core::iter::traits::iterator::Iterator::chain(*((a1 + 32) as &i64), *((a1 + 32) as &i64) + *((a1 + 40) as &i64) * 8);
    core::iter::traits::iterator::Iterator::collect(&v0, &v8);
    if !((((0 ^ *((a1 + 96) as &i64)) & (0 ^ -(*((a1 + 96) as &i64)))) >> 63) as char) {
        v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a1 + 104) as &i64), *((a1 + 112) as &i64));
    }
    v5 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(*((a1 + 80) as &i64), *((a1 + 88) as &i64));
    return struct128 {
        field_0: v10
        field_16: *((&v8.a as &char + 24) as &i64)
        field_24: v0.inner.iter.iter
        field_40: v1
        field_48: *(a2 as &i128)
        field_64: *((a2 + 16) as &i64)
        field_72: *(&v5.field_0 as &i128)
        field_88: v5.field_16
        field_96: v2
        field_112: v4
        field_120: v12 + 1
    };
}
