
  fn bat::app::App::theme_options::hebe2eab601f3d5a6(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_90: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_90, 
        arg2, "themetheme-darktheme-lightthemes…", 5);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "themetheme-darktheme-lightthemes…", 5, &var_90);
    let mut result_1: i64;
    let var_60: i128;
    let mut result_2: i64;
    
    if rax == 0
    {
        let var_a0_1: i8 = 0;
        result_2 = -0x7fffffffffffffff;
    }
    else
    {
        _$LT$bat..theme..ThemePreference$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h382b82fff54a15a0(&var_90, *rax.byte_offset(8), *rax.byte_offset(0x10));
        _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..ops..control_flow..ControlFlow$LT$B$C$core..convert..Infallible$GT$$GT$$GT$::from_residual::h0ea307a215188590(&result_1, &var_90);
        result_2 = result_1;
        let mut var_a0: i8;
        var_a0 = var_60;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_90, 
        arg2, "theme-darktheme-lightthemes.bint…", 0xa);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "theme-darktheme-lightthemes.bint…", 0xa, &var_90);
    let mut var_50: i64;
    
    if rax_1 == 0
    {
        var_50 = -0x7fffffffffffffff;
    }
    else
    {
        _$LT$bat..theme..ThemeName$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h449822739d473d5a(&var_90, *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..ops..control_flow..ControlFlow$LT$B$C$core..convert..Infallible$GT$$GT$$GT$::from_residual::h0ea307a215188590(&var_50, &var_90);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_90, 
        arg2, "theme-lightthemes.bintheme set c…", 0xb);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "theme-lightthemes.bintheme set c…", 0xb, &var_90);
    let mut var_38: i128;
    let mut result: i64;
    
    if rax_2 == 0
    {
        result = -0x7fffffffffffffff;
    }
    else
    {
        _$LT$bat..theme..ThemeName$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h449822739d473d5a(&var_90, *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
        _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..ops..control_flow..ControlFlow$LT$B$C$core..convert..Infallible$GT$$GT$$GT$::from_residual::h0ea307a215188590(&result_1, &var_90);
        result = result_1;
        var_38 = var_60;
    }
    
    let var_98: i64;
    arg1[4] = var_98;
    arg1[3] = result_2;
    *arg1 = var_50;
    let var_40: i64;
    arg1[1] = var_40;
    *arg1.byte_offset(0x18) = result;
    arg1[2] = var_38;
    result
}
