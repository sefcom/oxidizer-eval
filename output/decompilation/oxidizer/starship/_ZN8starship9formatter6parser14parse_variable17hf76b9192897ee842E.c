fn starship::formatter::parser::parse_variable(a0: i64) -> u64 {
    let v0: struct40;  // [bp-0x98]
    let v1: <anon>;  // [bp-0x70], Other Possible Types: Option<struct40>
    let v2: struct40;  // [bp-0x70]
    let v3: struct56;  // [bp-0x48]

    v3 = pest::iterators::pair::Pair<R>::into_inner(a0);
    v1 = <pest::iterators::pairs::Pairs<R> as core::iter::traits::iterator::Iterator>::next(&v3);
    v1 = core::option::unwrap(v1);
    v0 = v2;
    return pest::iterators::pair::Pair<R>::as_str(&v0);
}
