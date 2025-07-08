
  fn uu_head::Mode::from::h53e4fee035ad00ee(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_48: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(&var_48, 
        arg2, "BYTESbytes[-]NUMprint the first …", 5);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847(
        "BYTESbytes[-]NUMprint the first …", 5, &var_48);
    let mut result: u64;
    let mut var_88: i128;
    let mut var_68: i32;
    let var_60: i64;
    let var_58: i128;
    
    if rax == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(
            &var_48, arg2, "LINESlinesprint the first NUM li…", 5);
        result = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847(
            "LINESlinesprint the first NUM li…", 5, &var_48);
        
        if result == 0
        {
            *arg1.byte_offset(8) = 0;
            arg1[1] = 0xa;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            result = uu_head::parse::parse_num::h0b10a586c944e6e5(&var_68, *(result + 8), 
                *(result + 0x10));
            
            if var_68 != 3
            {
                let var_38_2: i128 = var_58;
                var_48 = var_68;
                uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::hb5202c7fdcf4dd08(&var_88, 
                    &var_48);
                goto 'label_4b8eb4;
            }
            
            if var_58 == 0
            {
                *arg1.byte_offset(8) = 0;
            }
            else
            {
                *arg1.byte_offset(8) = 1;
            }
            
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        result = uu_head::parse::parse_num::h0b10a586c944e6e5(&var_68, *rax.byte_offset(8), 
            *rax.byte_offset(0x10));
        
        if var_68 != 3
        {
            let var_38_1: i128 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::he18e9b8fbd48dd2e(&var_88, &var_48);
            'label_4b8eb4:
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
            if var_58 == 0
            {
                *arg1.byte_offset(8) = 2;
            }
            else
            {
                *arg1.byte_offset(8) = 3;
            }
            
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
