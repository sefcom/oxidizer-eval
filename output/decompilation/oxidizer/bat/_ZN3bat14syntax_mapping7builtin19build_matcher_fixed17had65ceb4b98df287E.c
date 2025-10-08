fn bat::syntax_mapping::builtin::build_matcher_fixed(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct96, struct65>;  // [bp-0x70]

    v0 = bat::syntax_mapping::make_glob_matcher(a1, a2);
    core::result::Result<T,E>::expect(a0, &v0);
    return a0;
}
