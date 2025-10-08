fn uu_dd::parseargs::Parser::read(a0: u64, a1: &u64, a2: u64) -> int {
    let v0: u128;  // [bp-0x78]
    let v1: struct64;  // [bp-0x68]
    let v3: &u64;  // rax
    let v5: u64;  // rdx
    let v6: struct33;  // [bp-0x88]

    v1 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    loop {
        v3 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
        if !v3 {
            memcpy(a0, a1, 216);
            return;
        }
        v6 = uu_dd::parseargs::Parser::parse_operand(a1, <&T as core::convert::AsRef<U>>::as_ref(v3), v5);
        if v6.field_0 as i32 != 14 {
            return struct40 {
                field_0: 2
                field_8: *(&v6.field_0 as &i128)
                field_24: v0
            };
        }
    }
}
