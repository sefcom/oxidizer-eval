
  fn uu_head::Mode::from::h83e29ab46b97bf14(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_48: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcfe202c159b0fd99(&var_48, 
        arg2, "BYTESbytes[-]NUMprint the first …");
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h514e0ae5cc56700a(
        "BYTESbytes[-]NUMprint the first …", &var_48);
    let mut result: u64;
    let mut var_88: i128;
    let mut var_68: i32;
    let result_2: u64;
    let var_58: i128;
    let mut rcx_2: u64;
    
    if rax == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcfe202c159b0fd99(
            &var_48, arg2, "LINESlinesprint the first NUM li…");
        result = clap_builder::parser::error::MatchesError::unwrap::h514e0ae5cc56700a(
            "LINESlinesprint the first NUM li…", &var_48);
        
        if result != 0
        {
            uu_head::parse::parse_num::h03514696a27c7578(&var_68, *(result + 8), *(result + 0x10));
            
            if var_68 == 4
            {
                result = result_2;
                rcx_2 = var_58;
                goto 'label_466dde;
            }
            
            let var_38_2: i128 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::ha059e337d15c07d8(&var_88, &var_48);
            goto 'label_466e4b;
        }
        
        *arg1.byte_offset(8) = 0;
        arg1[1] = 0xa;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        uu_head::parse::parse_num::h03514696a27c7578(&var_68, *rax.byte_offset(8), 
            *rax.byte_offset(0x10));
        
        if var_68 != 4
        {
            let var_38_1: i128 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::h19c5bd1f00edc5c0(&var_88, &var_48);
            'label_466e4b:
            let result_1: i8;
            result = result_1;
            let var_74: i32;
            *arg1.byte_offset(0x14) = var_74;
            let var_77: i32;
            *arg1.byte_offset(0x11) = var_77;
            *arg1 = var_88;
            arg1[1] = result;
        }
        else
        {
            result = result_2;
            rcx_2 = var_58 | 2;
            'label_466dde:
            *arg1.byte_offset(8) = rcx_2;
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
