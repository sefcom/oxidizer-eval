
  fn uu_env::EnvAppData::run_env::h4751222c9222c036(arg1: *mut i16, arg2: i64) -> u64

{
    let mut var_c8: u64;
    uu_env::EnvAppData::parse_arguments::h6f93681d78fa23cd(&var_c8, arg1, arg2);
    let mut rax: u64 = var_c8;
    let result_3: u64;
    let mut result: u64 = result_3;
    
    if -(rax) != -0x8000000000000000
    {
        let var_80: i64;
        let var_178_1: i64 = var_80;
        let var_90: i128;
        let var_188_1: i128 = var_90;
        let var_a0: i128;
        let var_198_1: i128 = var_a0;
        let mut var_b0: i128;
        let mut var_1a8: i128 = var_b0;
        let mut var_1c0: u64 = rax;
        let result_1: u64 = result;
        let var_b8: i64;
        let var_1b0_1: i64 = var_b8;
        rax = 1;
        
        if *arg1 == 0
        {
            rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h8ff25e0804a4acae(&var_1a8, "debugTry ' --help' for more info…", 5) != 0;
        }
        
        *arg1 = rax;
        let rbp_1: bool = arg1[1];
        let mut rcx_4: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h8ff25e0804a4acae(
            &var_1a8, "debugTry ' --help' for more info…", 5) >= 2;
        
        if rbp_1 != 2
        {
            rcx_4 = rbp_1;
        }
        
        arg1[1] = rcx_4;
        
        if (rcx_4 & 1) != 0
        {
            uu_env::debug_print_args::h9262afd3814fa2d4(result, var_b8);
            arg1[1] = 0;
        }
        
        uu_env::make_options::h2effa55e44a7ce8e(&var_c8, &var_1a8);
        let r12_1: u64 = var_c8;
        result = result_3;
        
        if r12_1 != -0x8000000000000000
        {
            let mut var_150: ();
            memcpy(&var_150, &var_b0, 0x88);
            let mut var_168: u64 = r12_1;
            let result_2: u64 = result;
            let var_158_1: i64 = var_b8;
            let mut result_4: u64;
            let mut rdx_2: i64;
            result_4 = uu_env::apply_change_directory::h373f6259ae5e3a21(&var_168);
            result = result_4;
            
            if result_4 == 0
            {
                uu_env::apply_removal_of_all_env_vars::hcf5609ccad6c2606(&var_168);
                let mut result_5: u64;
                result_5 = uu_env::load_config_file::he01b7851b1bda2a1(&var_168);
                result = result_5;
                
                if result_5 == 0
                {
                    let mut result_6: u64;
                    result_6 = uu_env::apply_unset_env_vars::h38498305449b9d8f(&var_168);
                    result = result_6;
                    
                    if result_6 == 0
                    {
                        uu_env::apply_specified_env_vars::h6f7952585ac93a45(&var_168);
                        let mut result_7: u64;
                        result_7 = uu_env::apply_ignore_signal::hd90c650a7d9c7f29(&var_168);
                        result = result_7;
                        
                        if result_7 == 0
                        {
                            let var_110: i64;
                            
                            if var_110 == 0
                            {
                                let var_cf: i8;
                                uu_env::print_env::h235deac81a0d5ad1(var_cf);
                                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h040d07f0deb347ef(
                                    &var_168);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1761f4d417810930(&var_1a8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h80dccb4ef18d8427(&var_1c0);
                                return 0;
                            }
                            
                            let mut result_8: u64;
                            result_8 = uu_env::EnvAppData::run_program::he856797d7be52ddc(arg1, 
                                &var_168, *arg1);
                            result = result_8;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h040d07f0deb347ef(&var_168);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1761f4d417810930(&var_1a8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h80dccb4ef18d8427(&var_1c0);
    }
    
    result
}
