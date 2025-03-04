fn uu_ptx::read_char_filter_file(a0: &struct16, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x64]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: Result<struct4, struct8>;  // [sp-0x48], Other Possible Types: struct48
    let v6: i64;  // rax

    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "break-file");
    v6 = clap_builder::parser::error::MatchesError::unwrap("break-file", &v4);
    if !v6 {
        core::option::expect_failed("parsing options failed!", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    v0 = std::fs::File::open(v6)?;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if !<std::fs::File as std::io::Read>::read_to_string(&v0, &v1) {
        v4 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(v2, v3 + v2);
    }
}
