
  int32_t* uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(int16_t* arg1, int64_t arg2)

{
    uint64_t var_d0;
    uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(&var_d0, arg1, arg2);
    uint64_t rax = var_d0;
    int32_t* result_2;
    int32_t* result = result_2;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_88;
        int64_t var_178_1 = var_88;
        int128_t var_98;
        int128_t var_188_1 = var_98;
        int128_t var_a8;
        int128_t var_198_1 = var_a8;
        int128_t var_b8;
        int128_t var_1a8 = var_b8;
        uint64_t var_1c0 = rax;
        rax = 1;
        
        if (!*arg1)
            rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(&var_1a8, "debugTry ' --help' for more info…", 5);
        
        *arg1 = rax;
        bool rbp_1 = arg1[1];
        bool rcx_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h3e01e377eb4ddd10(
            &var_1a8, "debugTry ' --help' for more info…", 5) >= 2;
        
        if (rbp_1 != 2)
            rcx_2 = rbp_1;
        
        arg1[1] = rcx_2;
        int64_t var_c0;
        
        if (rcx_2)
        {
            uu_env::debug_print_args::hc6b0deb8b4ab006f(result, var_c0);
            arg1[1] = 0;
        }
        
        uu_env::make_options::h1d1233ee0c3e2ece(&var_d0, &var_1a8);
        uint64_t r13_1 = var_d0;
        result = result_2;
        
        if (r13_1 != -0x8000000000000000)
        {
            void var_158;
            memcpy(&var_158, &var_b8, 0x88);
            uint64_t var_170 = r13_1;
            int32_t* result_1 = result;
            int64_t var_160_1 = var_c0;
            int128_t* result_3;
            int64_t rdx_2;
            result_3 = uu_env::apply_change_directory::h505c531f1c72246e(&var_170);
            result = result_3;
            
            if (!result_3)
            {
                uu_env::apply_removal_of_all_env_vars::h7a792f149fdec8bf(&var_170);
                int128_t* result_4;
                result_4 = uu_env::load_config_file::h0196c19fc75eeaa1(&var_170);
                result = result_4;
                
                if (!result_4)
                {
                    int128_t* result_5;
                    result_5 = uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(&var_170);
                    result = result_5;
                    
                    if (!result_5)
                    {
                        uu_env::apply_specified_env_vars::ha326473558d292da(&var_170);
                        int128_t* result_6;
                        result_6 = uu_env::apply_ignore_signal::h50dc2527ab008a21(&var_170);
                        result = result_6;
                        
                        if (!result_6)
                        {
                            int64_t var_118;
                            
                            if (!var_118)
                            {
                                char var_d7;
                                uu_env::print_env::h67417add1e73f63a(var_d7);
                                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h50c38fdde1ff93c5(
                                    &var_170);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd0b4c6e9f262526(&var_1a8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&var_1c0);
                                return nullptr;
                            }
                            
                            int32_t* result_7;
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
    
    return result;
}
