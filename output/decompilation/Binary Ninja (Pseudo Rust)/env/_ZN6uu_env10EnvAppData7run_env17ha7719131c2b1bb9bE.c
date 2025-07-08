
  fn uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(arg1: *mut i16, arg2: i64) -> *mut i32

{
    let mut var_d0: u64;
    uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(&var_d0, arg1, arg2);
    let mut rax: u64 = var_d0;
    let result_2: *mut i32;
    let mut result: *mut i32 = result_2;
    
    if rax != -0x8000000000000000
    {
        let var_88: i64;
        let var_178_1: i64 = var_88;
        let var_98: i128;
        let var_188_1: i128 = var_98;
        let var_a8: i128;
        let var_198_1: i128 = var_a8;
        let mut var_b8: i128;
        let mut var_1a8: i128 = var_b8;
        let mut var_1c0: u64 = rax;
        rax = 1;
        
        if *arg1 == 0
        {
            rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(&var_1a8, "debugTry ' --help' for more info…", 5) != 0;
        }
        
        *arg1 = rax;
        let rbp_1: bool = arg1[1];
        let mut rcx_2: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(
            &var_1a8, "debugTry ' --help' for more info…", 5) >= 2;
        
        if rbp_1 != 2
        {
            rcx_2 = rbp_1;
        }
        
        arg1[1] = rcx_2;
        let var_c0: i64;
        
        if rcx_2 != 0
        {
            uu_env::debug_print_args::hc6b0deb8b4ab006f(result, var_c0);
            arg1[1] = 0;
        }
        
        uu_env::make_options::h1d1233ee0c3e2ece(&var_d0, &var_1a8);
        let r13_1: u64 = var_d0;
        result = result_2;
        
        if r13_1 != -0x8000000000000000
        {
            let mut var_158: ();
            memcpy(&var_158, &var_b8, 0x88);
            let mut var_170: u64 = r13_1;
            let result_1: *mut i32 = result;
            let var_160_1: i64 = var_c0;
            let mut result_3: *mut i128;
            let mut rdx_2: i64;
            result_3 = uu_env::apply_change_directory::h505c531f1c72246e(&var_170);
            result = result_3;
            
            if result_3 == 0
            {
                uu_env::apply_removal_of_all_env_vars::h7a792f149fdec8bf(&var_170);
                let mut result_4: *mut i128;
                result_4 = uu_env::load_config_file::h0196c19fc75eeaa1(&var_170);
                result = result_4;
                
                if result_4 == 0
                {
                    let mut result_5: *mut i128;
                    result_5 = uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(&var_170);
                    result = result_5;
                    
                    if result_5 == 0
                    {
                        uu_env::apply_specified_env_vars::ha326473558d292da(&var_170);
                        let mut result_6: *mut i128;
                        result_6 = uu_env::apply_ignore_signal::h50dc2527ab008a21(&var_170);
                        result = result_6;
                        
                        if result_6 == 0
                        {
                            let var_118: i64;
                            
                            if var_118 == 0
                            {
                                let var_d7: i8;
                                uu_env::print_env::h67417add1e73f63a(var_d7);
                                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h50c38fdde1ff93c5(
                                    &var_170);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd0b4c6e9f262526(&var_1a8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&var_1c0);
                                return nullptr;
                            }
                            
                            let mut result_7: *mut i32;
                            result_7 = uu_env::EnvAppData::run_program::h150b93669ea43850(arg1, 
                                &var_170, *arg1);
                            result = result_7;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h50c38fdde1ff93c5(&var_170);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd0b4c6e9f262526(&var_1a8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&var_1c0);
    }
    
    result
}
