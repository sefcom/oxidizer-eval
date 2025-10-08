fn just::source::Source::module(a1: i64, a2: &struct72, a3: &struct24) -> : struct124 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xc4]
    let v1: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0xb8], Other Possible Types: struct32
    let v2: u64;  // [bp-0xa8]
    let v3: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0xa0], Other Possible Types: struct24, u64
    let v4: struct24;  // [bp-0xa0]
    let v5: struct24;  // [bp-0xa0]
    let v6: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xa0]
    let v7: struct24;  // [bp-0xa0]
    let v8: struct24;  // [bp-0x68], Other Possible Types: struct32
    let v9: struct24;  // [bp-0x58]
    let v10: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0x48]
    let v12: struct72;  // r15
    let v13: struct24;  // r12
    let v14: struct157;  // rsi
    let v15: struct80;  // rax

    v0 = *((a1 + 120) as &i32);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v3 as u32, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v12 = *((a3 + 8) as &i64);
    v13 = *((a3 + 16) as &i64);
    v5 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(v12, v13);
    v1 = v3;
    v6 = core::iter::traits::iterator::Iterator::chain(&v8, &v1);
    core::iter::traits::iterator::Iterator::collect(&v6 as u8, &v6);
    v7 = core::option::Option<T>::map_or_else(v14, a2, a2);
    v2 = v7.field_16;
    v1 = v7.field_0;
    v3 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(v12, v13);
    v9 = v3.field_16;
    v8 = v3.field_0;
    v15 = std::path::Path::parent(v12, v13);
    core::option::unwrap(v15);
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, a2);
    return struct128 {
        field_0: v10
        field_16: *((&(&v6)[1].b as &char + 8) as &i64)
        field_24: 0
        field_32: 8
        field_40: 0
        field_48: v8
        field_64: v9
        field_72: v4.field_0
        field_88: v4.field_16
        field_96: v1
        field_112: v2
        field_120: v0 + 1
    };
}
