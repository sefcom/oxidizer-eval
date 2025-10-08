fn starship::formatter::parser::parse_value(a0: u64, a1: i64) -> int {
    let v0: Option<struct40>;  // [bp-0xa0]
    let v1: <anon>;  // [bp-0xa0]
    let v2: u320;  // [bp-0xa0]
    let v3: struct40;  // [bp-0x78]
    let v4: struct56;  // [bp-0x50]
    let v7: u64;  // rdx

    pest::iterators::pair::Pair<R>::as_rule(*(a1 as &i64), *((a1 + 32) as &i64));
    match (pest::iterators::pair::Pair<R>::as_rule(*(a1 as &i64), *((a1 + 32) as &i64))) {
        3 => {
            return struct32 {
                field_0: 9223372036854775809
                field_8: 0x8000000000000000
                field_16: starship::formatter::parser::parse_variable(a1)
                field_24: v7
            };
        }
        9 => {
            starship::formatter::parser::parse_text(a0 + 8, a1);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        14 => {
            break;
        }
        17 => {
            v4 = pest::iterators::pair::Pair<R>::into_inner(a1);
            v0 = <pest::iterators::pairs::Pairs<R> as core::iter::traits::iterator::Iterator>::next(&v4);
            v1 = core::option::unwrap(v0);
            v3 = v2;
            starship::formatter::parser::parse_format(&v0, &v3);
            return struct32 {
                field_0: 9223372036854775811
                field_8: v1.field_0.field_0
                field_24: v1.field_0.field_16 as i64
            };
        }
        _ => {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
    }
}
