
  int64_t uu_ptx::read_char_filter_file::hb5c562555cafe5d8(int64_t* arg1, void* arg2)

{
    int32_t var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_48, 
        arg2, "break-fileignore-caseignore-file…", 0xa);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
        "break-fileignore-caseignore-file…", 0xa, &var_48);
    
    if (!rax)
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    std::fs::File::open::h687c8ff425f1a70d(&var_48, rax);
    
    if (var_48)
    {
        int64_t result;
        arg1[1] = result;
        *arg1 = 0;
        return result;
    }
    
    int32_t var_44;
    int32_t var_64 = var_44;
    int64_t var_60 = 0;
    int64_t var_58_1 = 1;
    int64_t var_50_1 = 0;
    int64_t rax_3;
    int64_t rdx_1;
    rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h16b54f4758140c12(
        &var_64, &var_60);
    
    if (!rax_3)
    {
        _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hbf1f9522d15aa47d(&var_48, var_58_1);
        int128_t zmm0_1 = var_48;
        int128_t var_28;
        *(arg1 + 0x20) = var_28;
        int128_t var_38;
        *(arg1 + 0x10) = var_38;
        *arg1 = zmm0_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
    }
    else
    {
        arg1[1] = rdx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
    }
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::hd08ffe348cbe9063(&var_64);
}
