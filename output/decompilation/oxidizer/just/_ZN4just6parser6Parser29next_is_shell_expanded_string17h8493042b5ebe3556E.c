fn just::parser::Parser::next_is_shell_expanded_string(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x28]
    let v1: core::option::Option<&str>;  // [bp-0x20]
    let v2: struct24;  // [bp-0x18]
    let v3: struct80;  // [bp-0x10]
    let v5: void*;  // rax
    let v6: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rax

    v0 = *((a0 + 24) as &i64);
    v1 = *((a0 + 24) as &i64) + *((a0 + 32) as &i64) * 72;
    v2 = *((a0 + 88) as &i64);
    v3 = 0;
    v5 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0, &v3);
    if !v5 {
        return 0;
    } else if just::parser::Parser::next_is_shell_expanded_string::{{closure}}(v5) {
        v6 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0, &v3);
        if !v6 {
            return 0;
        }
        return v6 & -0x100 | *((v6 + 64) as &i8) == 33;
    } else {
        return 0;
    }
}
