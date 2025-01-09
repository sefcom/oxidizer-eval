fn uu_cksum::handle_tag_text_binary_flags(a0: &struct10, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x60], Other Possible Types: i192
    let v1: i8;  // [bp-0x48]
    let v3: i8;  // bpl
    let v4: i8;  // r14b

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "untagged") as i32;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tag") as i32;
    std::env::args_os();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v1);
    *((a0 + 8) as &i8) = v4 | v3 ^ 1;
    *((a0 + 9) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "binary") as i32 & ((uu_cksum::had_reset(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i8 | v4 | v3 ^ 1) ^ 1);
    *(a0 as &i64) = 0;
    return a0;
}
