fn fd::exec::CommandTemplate::new(a0: i64, a1: void*) -> int {
    let v0: void*;  // [bp-0xa0]
    let v1: struct16;  // [bp-0xa0]
    let v2: struct16;  // [bp-0xa0]
    let v3: Result<struct24, struct24>;  // [bp-0x98]
    let v4: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x90]
    let v5: void*;  // [bp-0x88]
    let v6: void*;  // [bp-0x80], Other Possible Types: struct24, struct40
    let v7: u64;  // [bp-0x78]
    let v8: struct224;  // [bp-0x70]
    let v9: u64;  // [bp-0x68]
    let v10: u64;  // [bp-0x50]
    let v12: u8;  // bpl
    let v13: &u64;  // rax
    let v15: u32;  // rdx
    let v16: struct224;  // rax

    v0 = 0;
    v3 = 8;
    v4 = 0;
    v6 = <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(a1);
    loop {
        v13 = <clap_builder::parser::matches::arg_matches::OccurrenceValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        if !v13 {
            break;
        }
        fd::fmt::FormatTemplate::parse(&v10, <&T as core::convert::AsRef<U>>::as_ref(v13), v15);
        v2 = alloc::vec::Vec<T,A>::push(&v10, "src/exec/mod.rs");
    }
    if !v4 {
        v6 = struct40 {
            field_0: "No executable provided for --exec or --exec-batch"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        *(&v5[8] as &u64) = anyhow::__private::format_err(&v6);
        *(v5 as &i64) = 0x8000000000000000;
        return;
    }
    if !(v12 & 1) {
        v16 = alloc::alloc::Global::alloc_impl(8, 24);
        *(v16 as &i64) = 0x8000000000000000;
        *((v16 + 8) as &u128) = v6.field_0;
        v7 = 1;
        v8 = v16;
        v9 = 1;
        v6 = 0;
        v1 = alloc::vec::Vec<T,A>::push(&v6, "src/exec/mod.rs");
    }
    *(&v5[16] as &core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>) = v4;
    *(v5 as &i128) = *(&v2.field_0 as &i128);
    return;
}
