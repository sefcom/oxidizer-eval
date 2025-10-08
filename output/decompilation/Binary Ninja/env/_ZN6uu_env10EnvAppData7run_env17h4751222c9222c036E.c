
  uint64_t uu_env::EnvAppData::run_env::h4751222c9222c036(int16_t* arg1, int64_t arg2)

{
    uint64_t var_c8;
    uu_env::EnvAppData::parse_arguments::h6f93681d78fa23cd(&var_c8, arg1, arg2);
    uint64_t rax = var_c8;
    uint64_t result_3;
    uint64_t result = result_3;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_80;
        int64_t var_178_1 = var_80;
        int128_t var_90;
        int128_t var_188_1 = var_90;
        int128_t var_a0;
        int128_t var_198_1 = var_a0;
        int128_t var_b0;
        int128_t var_1a8 = var_b0;
        uint64_t var_1c0 = rax;
        uint64_t result_1 = result;
        int64_t var_b8;
        int64_t var_1b0_1 = var_b8;
        rax = 1;
        
        if (!*arg1)
            rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h8ff25e0804a4acae(&var_1a8, "debugTry ' --help' for more info…", 5);
        
        *arg1 = rax;
        bool rbp_1 = arg1[1];
        bool rcx_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_count::h8ff25e0804a4acae(
            &var_1a8, "debugTry ' --help' for more info…", 5) >= 2;
        
        if (rbp_1 != 2)
            rcx_4 = rbp_1;
        
        arg1[1] = rcx_4;
        
        if (rcx_4 & 1)
        {
            uu_env::debug_print_args::h9262afd3814fa2d4(result, var_b8);
            arg1[1] = 0;
        }
        
        uu_env::make_options::h2effa55e44a7ce8e(&var_c8, &var_1a8);
        uint64_t r12_1 = var_c8;
        result = result_3;
        
        if (r12_1 != -0x8000000000000000)
        {
            void var_150;
            memcpy(&var_150, &var_b0, 0x88);
            uint64_t var_168 = r12_1;
            uint64_t result_2 = result;
            int64_t var_158_1 = var_b8;
            uint64_t result_4;
            int64_t rdx_2;
            result_4 = uu_env::apply_change_directory::h373f6259ae5e3a21(&var_168);
            result = result_4;
            
            if (!result_4)
            {
                uu_env::apply_removal_of_all_env_vars::hcf5609ccad6c2606(&var_168);
                uint64_t result_5;
                result_5 = uu_env::load_config_file::he01b7851b1bda2a1(&var_168);
                result = result_5;
                
                if (!result_5)
                {
                    uint64_t result_6;
                    result_6 = uu_env::apply_unset_env_vars::h38498305449b9d8f(&var_168);
                    result = result_6;
                    
                    if (!result_6)
                    {
                        uu_env::apply_specified_env_vars::h6f7952585ac93a45(&var_168);
                        uint64_t result_7;
                        result_7 = uu_env::apply_ignore_signal::hd90c650a7d9c7f29(&var_168);
                        result = result_7;
                        
                        if (!result_7)
                        {
                            int64_t var_110;
                            
                            if (!var_110)
                            {
                                char var_cf;
                                uu_env::print_env::h235deac81a0d5ad1(var_cf);
                                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h040d07f0deb347ef(
                                    &var_168);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1761f4d417810930(&var_1a8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h80dccb4ef18d8427(&var_1c0);
                                return 0;
                            }
                            
                            uint64_t result_8;
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
    
    return result;
}
