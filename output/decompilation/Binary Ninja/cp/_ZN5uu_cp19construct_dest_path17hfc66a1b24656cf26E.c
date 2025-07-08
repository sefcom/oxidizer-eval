
  char const (** const )[0x93] uu_cp::construct_dest_path::hfc66a1b24656cf26(char const (*** arg1)[0x93], char* arg2, int64_t arg3, char* arg4, uint64_t arg5, char arg6, char arg7, char arg8)

{
    char const (** const result)[0x93];
    int64_t var_a8;
    int64_t* var_88;
    char const (** const result_2)[0x93];
    
    if (!arg7)
    {
        label_503ed5:
        char const (** result_1)[0x93];
        int64_t rdx_1;
        char const* const rsi_4;
        int64_t r12_1;
        
        if (!arg8)
        {
            if (!arg6)
            {
                r12_1 = arg3;
                char* rax_4;
                rax_4 = std::path::Path::parent::h65c9a340a6266f2d(arg2, r12_1);
                rsi_4 = rax_4;
                
                if (!rax_4)
                    rsi_4 = arg2;
                
                if (!rax_4)
                    rdx_1 = r12_1;
                
                goto label_503faa;
            }
            
            label_503f2d:
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_88, arg4, 
                arg5);
            label_503fe2:
            result = result_1;
            arg1[3] = result;
            *(arg1 + 8) = var_88;
            *arg1 = 0xd;
        }
        else
        {
            if (!std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5))
                /* tailcall */
                return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(arg1, "with --parents, the destination …", 0x33);
            
            if (arg6)
                goto label_503f2d;
            
            r12_1 = arg3;
            std::path::Path::components::h4f3217acf0fc8653(&result_2, arg2, r12_1);
            char var_36;
            
            if (!var_36)
            {
                char var_60;
                bool c_1 = var_60 < 5;
                rdx_1 = c_1;
                rsi_4 = 1;
                
                if (c_1)
                    rsi_4 = "/, overriding mode  ()?overwrite…";
            }
            else
            {
                rdx_1 = 1;
                rsi_4 = "/, overriding mode  ()?overwrite…";
            }
            
            label_503faa:
            uu_cp::localize_to_target::hdd63077be4e3b6f7(&result_2, rsi_4, rdx_1, arg2, r12_1, 
                arg4, arg5);
            result = result_2;
            int64_t var_68;
            var_a8 = var_68;
            char const (** result_3)[0x93];
            
            if (result == 0xd)
            {
                var_88 = var_a8;
                result_1 = result_3;
                goto label_503fe2;
            }
            
            int128_t var_40;
            *(arg1 + 0x30) = var_40;
            int64_t var_50;
            *(arg1 + 0x20) = var_50;
            arg1[3] = result_3;
            *(arg1 + 8) = var_a8;
            *arg1 = result;
        }
    }
    else
    {
        if (!std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5))
            goto label_503ed5;
        
        var_a8 = 1;
        char* var_a0_1 = arg4;
        uint64_t var_98_1 = arg5;
        char var_90_1 = 1;
        var_88 = &var_a8;
        int64_t (* var_80_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        result_2 = &data_5b5db8;
        int64_t var_68_1 = 2;
        int64_t var_50_1 = 0;
        int64_t** var_60_1 = &var_88;
        int64_t var_58 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &result_2);
        *arg1 = 4;
    }
    return result;
}
