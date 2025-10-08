
  void* alacritty::config::imports::he228980ef6034b5f(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void* result = core::option::Option$LT$T$GT$::or_else::hbd14aba21ff2822d(
        toml::value::Value::get::hdb566b349a2e1877(arg2, "import~/Removing null key "" fro…", 6), 
        arg2);
    
    if (!result)
    {
        arg1[2] = 8;
        arg1[3] = 0;
        *arg1 = {0};
    }
    else if (*(result + 0x1a) != 7)
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Invalid import type: expected a …", 0x28);
        *arg1 = 1;
    }
    else
    {
        int64_t r13_1 = *(result + 0x10);
        
        if (!(!arg5 & r13_1))
        {
            int64_t var_c0 = 0;
            void* result_1 = 8;
            int64_t var_b0_1 = 0;
            
            if (r13_1)
            {
                int64_t rbp_1 = *(result + 8);
                int64_t i = 0;
                
                do
                {
                    int64_t var_98;
                    int128_t var_90;
                    
                    if (*(rbp_1 + i + 0x1a) != 2)
                    {
                        int128_t var_48;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_48, "Invalid import element type: exp…", 0x31);
                        int64_t var_38;
                        int64_t var_80_2 = var_38;
                        var_90 = var_48;
                        var_98 = 1;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::he6dbae5d4f9d6ea0(&var_c0, &var_98);
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_98, *(rbp_1 + i + 8), *(rbp_1 + i + 0x10));
                        int64_t var_68_1 = *var_90[8];
                        int128_t var_78 = var_98;
                        int128_t var_60;
                        alacritty::config::normalize_import::he46573190aa32594(&var_60, arg3, arg4, 
                            &var_78);
                        int64_t var_50;
                        int64_t var_80_1 = var_50;
                        var_90 = var_60;
                        var_98 = 0;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::he6dbae5d4f9d6ea0(&var_c0, &var_98);
                    }
                    i += 0x20;
                } while (r13_1 << 5 != i);
            }
            
            arg1[3] = var_b0_1;
            arg1[1] = var_c0;
            result = result_1;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Exceeded maximum configuration i…", 0x2b);
            *arg1 = 1;
        }
    }
    
    return result;
}
