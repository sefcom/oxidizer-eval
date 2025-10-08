fn bat::app::App::forced_style_components(a0: u64, a1: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: i64;  // rax
    let v3: u64;  // rsi

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "decorations");
    v2 = clap_builder::parser::error::MatchesError::unwrap("decorations", &v0);
    if v2 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v2 + 8) as &i64), *((v2 + 16) as &i64), "never") {
        return <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "number") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_count(a1, "plain") {
        return struct8 {
            field_0: 0
        };
    }
    return <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(a0, v3) as u64;
}
