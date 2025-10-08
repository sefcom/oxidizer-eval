
  int64_t bat::app::App::forced_style_components::h537be08c927f0794(int128_t* arg1, void* arg2)

{
    void var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_48, 
        arg2, "decorationsstrip-ansiline-ranged…", 0xb);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "decorationsstrip-ansiline-ranged…", 0xb, &var_48);
    
    if (rax && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*(rax + 8), *(rax + 0x10), "neverinternal error: entered unr…", 5))
        /* tailcall */
        return _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha612b0421c6d552b(arg1);
    
    char rsi_2;
    int128_t* rdi_5;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
        &data_485489[0xa], 6))
    {
        char result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hfce66d8de8c62335(
            arg2, "plainpagingno-paginglist-themesi…", 5);
        
        if (!result)
        {
            *arg1 = 0;
            return result;
        }
        
        rdi_5 = arg1;
        rsi_2 = 0xb;
    }
    else
    {
        rdi_5 = arg1;
        rsi_2 = 7;
    }
    
    /* tailcall */
    return _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h5448c6ee0ae92cf4(rdi_5, rsi_2);
}
