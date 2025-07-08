
  fn uu_realpath::prepare_relative_options::hce8b705a83476ef9(arg1: *mut i64, arg2: *mut c_void, arg3: i8, arg4: i8) -> *mut i64

{
    let mut var_e8: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&var_e8, 
        arg2, "relative-toDIRprint the resolved…", 0xb);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231(
        "relative-toDIRprint the resolved…", 0xb, &var_e8);
    let mut var_48: i64;
    
    if rax == 0
    {
        var_48 = -0x8000000000000000;
    }
    else
    {
        *rax.byte_offset(0x10);
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&var_48, *rax.byte_offset(8));
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&var_e8, 
        arg2, "relative-baseprint absolute path…", 0xd);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231(
        "relative-baseprint absolute path…", 0xd, &var_e8);
    let mut var_78: i64;
    let mut var_68: i64;
    
    if rax_1 == 0
    {
        var_78 = -0x8000000000000000;
    }
    else
    {
        *rax_1.byte_offset(0x10);
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&var_e8, *rax_1.byte_offset(8));
        let var_d8: i64;
        var_68 = var_d8;
        var_78 = var_e8;
    }
    
    let var_38: i64;
    let var_d8_1: i64 = var_38;
    var_e8 = var_48;
    let r12: u64 = arg3;
    let mut var_90: i64;
    uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&var_90, &var_e8, r12, arg4, r12, 
        arg2);
    let r13: i64 = var_90;
    let mut result: *mut i64;
    let var_88: *mut i8;
    let var_80: i64;
    
    if r13 != -0x7fffffffffffffff
    {
        let mut var_60: i64 = r13;
        let var_58_1: *mut i8 = var_88;
        let var_d8_2: i64 = var_68;
        var_e8 = var_78;
        uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&var_90, &var_e8, r12, arg4, 
            r12, var_80);
        result = arg1;
        let rsi_5: i64 = var_90;
        
        if rsi_5 != -0x7fffffffffffffff
        {
            let mut var_a8: i64 = rsi_5;
            let mut rdx_6: *mut i8 = nullptr;
            
            if rsi_5 != -0x8000000000000000
            {
                rdx_6 = var_88;
            }
            
            let mut rax_7: i8;
            
            if r13 != -0x8000000000000000 && rdx_6 != 0
            {
                rax_7 = std::path::Path::starts_with::heff55995860ce76c(var_88, var_80, rdx_6);
            }
            
            if r13 != -0x8000000000000000 && rdx_6 != 0 && rax_7 == 0
            {
                *result = -0x8000000000000000;
                result[3] = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_a8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_60);
            }
            else
            {
                let zmm0_3: i128 = var_60;
                var_e8 = zmm0_3;
                let rax_10: i64 = var_a8;
                *result = zmm0_3;
                result[4] = var_88;
                result[5] = var_80;
                result[2] = var_80;
                result[3] = rax_10;
            }
        }
        else
        {
            result[1] = var_88;
            result[2] = var_80;
            *result = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_60);
        }
    }
    else
    {
        result = arg1;
        result[1] = var_88;
        result[2] = var_80;
        *result = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_78);
    }
    result
}
