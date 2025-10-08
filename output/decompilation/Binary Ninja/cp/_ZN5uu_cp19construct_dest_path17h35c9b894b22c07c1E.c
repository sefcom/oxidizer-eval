
  char const (** const )[0x63] uu_cp::construct_dest_path::h35c9b894b22c07c1(char const (*** arg1)[0x63], char* arg2, int64_t arg3, int64_t arg4, uint64_t arg5, char arg6, char arg7, char arg8)

{
    char const (** const result)[0x63];
    int64_t var_a8;
    int64_t* var_88;
    char const (** const result_1)[0x63];
    
    if (!(arg7 & 1))
    {
        label_4a0cb0:
        int64_t var_78;
        int64_t rdx_1;
        char const* const rsi_4;
        int64_t r12_1;
        
        if (!(arg8 & 1))
        {
            if (!arg6)
            {
                r12_1 = arg3;
                char* rax_4;
                rax_4 = std::path::Path::parent::hef287f60afa56900(arg2, r12_1);
                rsi_4 = rax_4;
                
                if (!rax_4)
                    rdx_1 = r12_1;
                
                if (!rax_4)
                    rsi_4 = arg2;
                
                goto label_4a0d6f;
            }
            
            label_4a0d0d:
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_88, arg4, 
                arg5);
            label_4a0db6:
            arg1[3] = var_78;
            *(arg1 + 8) = var_88;
            result = -0x800000000000000c;
        }
        else
        {
            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5))
                /* tailcall */
                return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(arg1, "with --parents, the destination …", 0x33);
            
            if (arg6)
                goto label_4a0d0d;
            
            r12_1 = arg3;
            std::path::Path::components::hd0346d362206f2e9(&result_1, arg2, r12_1);
            char var_36;
            
            if (!var_36)
            {
                char var_60;
                bool c_1 = var_60 < 5;
                rdx_1 = c_1;
                rsi_4 = 1;
                
                if (c_1)
                    rsi_4 = "/";
            }
            else
            {
                rsi_4 = "/";
                rdx_1 = 1;
            }
            
            label_4a0d6f:
            uu_cp::localize_to_target::hb1878d723015ce03(&result_1, rsi_4, rdx_1, arg2, r12_1, 
                arg4, arg5);
            result = result_1;
            int64_t var_68;
            var_a8 = var_68;
            int64_t var_58;
            
            if (result == -0x7ffffffffffffff4)
            {
                var_88 = var_a8;
                var_78 = var_58;
                goto label_4a0db6;
            }
            
            int64_t var_40;
            arg1[6] = var_40;
            int64_t var_50;
            *(arg1 + 0x20) = var_50;
            arg1[3] = var_58;
            *(arg1 + 8) = var_a8;
        }
    }
    else
    {
        if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5))
            goto label_4a0cb0;
        
        var_a8 = 1;
        int64_t var_a0_1 = arg4;
        uint64_t var_98_1 = arg5;
        char var_90_1 = 1;
        var_88 = &var_a8;
        int64_t (* var_80_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        result_1 = &data_55eae8;
        int64_t var_68_1 = 2;
        int64_t var_50_1 = 0;
        int64_t** var_60_1 = &var_88;
        int64_t var_58_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &result_1);
        result = -0x8000000000000003;
    }
    *arg1 = result;
    return result;
}
