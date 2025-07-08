
  int64_t* uu_realpath::prepare_relative_options::hce8b705a83476ef9(int64_t* arg1, void* arg2, char arg3, char arg4)

{
    int128_t var_e8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&var_e8, 
        arg2, "relative-toDIRprint the resolved…", 0xb);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231(
        "relative-toDIRprint the resolved…", 0xb, &var_e8);
    int64_t var_48;
    
    if (!rax)
        var_48 = -0x8000000000000000;
    else
    {
        *(rax + 0x10);
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&var_48, *(rax + 8));
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&var_e8, 
        arg2, "relative-baseprint absolute path…", 0xd);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231(
        "relative-baseprint absolute path…", 0xd, &var_e8);
    int64_t var_78;
    int64_t var_68;
    
    if (!rax_1)
        var_78 = -0x8000000000000000;
    else
    {
        *(rax_1 + 0x10);
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&var_e8, *(rax_1 + 8));
        int64_t var_d8;
        var_68 = var_d8;
        var_78 = var_e8;
    }
    
    int64_t var_38;
    int64_t var_d8_1 = var_38;
    var_e8 = var_48;
    uint64_t r12 = arg3;
    int64_t var_90;
    uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&var_90, &var_e8, r12, arg4, r12, 
        arg2);
    int64_t r13 = var_90;
    int64_t* result;
    char* var_88;
    int64_t var_80;
    
    if (r13 != -0x7fffffffffffffff)
    {
        int64_t var_60 = r13;
        char* var_58_1 = var_88;
        int64_t var_d8_2 = var_68;
        var_e8 = var_78;
        uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&var_90, &var_e8, r12, arg4, 
            r12, var_80);
        result = arg1;
        int64_t rsi_5 = var_90;
        
        if (rsi_5 != -0x7fffffffffffffff)
        {
            int64_t var_a8 = rsi_5;
            char* rdx_6 = nullptr;
            
            if (rsi_5 != -0x8000000000000000)
                rdx_6 = var_88;
            
            char rax_7;
            
            if (r13 != -0x8000000000000000 && rdx_6)
                rax_7 = std::path::Path::starts_with::heff55995860ce76c(var_88, var_80, rdx_6);
            
            if (r13 != -0x8000000000000000 && rdx_6 && !rax_7)
            {
                *result = -0x8000000000000000;
                result[3] = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_a8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&var_60);
            }
            else
            {
                int128_t zmm0_3 = var_60;
                var_e8 = zmm0_3;
                int64_t rax_10 = var_a8;
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
    return result;
}
