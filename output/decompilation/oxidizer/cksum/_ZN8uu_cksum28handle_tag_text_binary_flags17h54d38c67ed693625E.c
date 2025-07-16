fn uu_cksum::handle_tag_text_binary_flags(a0: &struct10, a1: i64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: u32;  // [bp-0x50]
    let v3: std::env::ArgsOs;  // [bp-0x48]
    let v5: u8;  // bpl
    let v6: u8;  // r14b
    let v7: u8;  // al

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "untagged") as i32;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tag") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "binary") as i32;
    v3 = std::env::args_os();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
    return struct10 {
        field_0: 0
        field_8: v6 | v5 ^ 1
        field_9: v7 & ((uu_cksum::had_reset(v1, v2) as i8 | v6 | v5 ^ 1) ^ 1)
    };
}
