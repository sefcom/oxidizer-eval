
  fn forc_tx::Command::parse::hcdf58518c22f33a0(arg1: i64) -> i64

{
    let mut var_108: i32;
    forc_tx::Command::try_parse::hf5c8217981b2970b(&var_108);
    
    if var_108 != 2
    {
        memcpy(arg1, &var_108, 0x100);
        return arg1;
    }
    
    let var_e0: i128;
    let var_118: i128 = var_e0;
    let var_f0: i128;
    let var_128: i128 = var_f0;
    let var_100: i128;
    let mut var_138: i128 = var_100;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$clap_builder..error..Error$GT$$GT$::hb5f201bd87e8e1b6(forc_tx::ParseError::print::hb865d543b4bc2b20(&var_138));
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
