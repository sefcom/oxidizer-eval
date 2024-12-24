long long uu_cksum::handle_tag_text_binary_flags::hdee42a5f41454efa(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    char v5;  // bpl
    char v6;  // r14b
    unsigned int v8;  // rdx

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "untagged0", 8);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    std::env::args_os::h433b833009c91492(&v3);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h495a5f26edf296f8(&v0, &v3);
    a0->field_8 = v6 | v5 ^ 1;
    a0->field_9 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6) & (((char)uu_cksum::had_reset::hf379f9d45af813b0(*((long long *)&v1), *((long long *)&v2), v8) | v6 | v5 ^ 1) ^ 1);
    a0->field_0 = 0;
    ::0x5e1e60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h229ab5c543343877(&v0);
    return a0;
}
