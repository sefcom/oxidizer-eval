
  int64_t forc_tx::Command::parse::hcdf58518c22f33a0(int64_t arg1)

{
    int32_t var_108;
    forc_tx::Command::try_parse::hf5c8217981b2970b(&var_108);
    
    if (var_108 != 2)
    {
        memcpy(arg1, &var_108, 0x100);
        return arg1;
    }
    
    int128_t var_e0;
    int128_t var_118 = var_e0;
    int128_t var_f0;
    int128_t var_128 = var_f0;
    int128_t var_100;
    int128_t var_138 = var_100;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$clap_builder..error..Error$GT$$GT$::hb5f201bd87e8e1b6(forc_tx::ParseError::print::hb865d543b4bc2b20(&var_138));
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
