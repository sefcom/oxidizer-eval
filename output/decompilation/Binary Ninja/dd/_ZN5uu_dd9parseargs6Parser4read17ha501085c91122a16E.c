
  int64_t uu_dd::parseargs::Parser::read::ha501085c91122a16(int64_t* arg1, int64_t* arg2, int128_t* arg3)

{
    void var_68;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h015b412e9abe2780(
        &var_68, arg3);
    int32_t i;
    
    do
    {
        void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4ec286498eb5d05a(&var_68);
        
        if (!rax_1)
            /* tailcall */
            return memcpy(arg1, arg2, 0xd8);
        
        int64_t rax_2;
        uint64_t rdx;
        rax_2 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h552a52a70d998f24(
            rax_1);
        uu_dd::parseargs::Parser::parse_operand::hc45261e402562f1d(&i, arg2, rax_2, rdx);
    } while (i == 0xe);
    
    int128_t zmm0 = i;
    int128_t var_78;
    *(arg1 + 0x18) = var_78;
    *(arg1 + 8) = zmm0;
    *arg1 = 2;
    /* tailcall */
    return core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::hd525826ae42afc29(arg2);
}
