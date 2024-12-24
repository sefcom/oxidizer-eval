fn uu_cksum::handle_tag_text_binary_flags(a0: void*, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x60], Other Possible Types: struct24
    let v1: struct32;  // [sp-0x48], Other Possible Types: i256
    let v3: i8;  // bpl
    let v4: i8;  // r14b
    let v5: i64;  // rdx

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "untagged") as i32;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tag") as i32;
    v1 = std::env::args_os();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v1);
    *((a0 + 8) as &i8) = v4 | v3 ^ 1;
    *((a0 + 9) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "binary") as i32 & ((uu_cksum::had_reset(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), v5) as i8 | v4 | v3 ^ 1) ^ 1);
    *(a0 as &i64) = 0;
    return a0;
}
