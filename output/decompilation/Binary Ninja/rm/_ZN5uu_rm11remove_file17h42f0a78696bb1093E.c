
  int64_t uu_rm::remove_file::h42f0a78696bb1093(int64_t arg1, int64_t arg2, void* arg3)

{
    if (uu_rm::prompt_file::h7c1fa3f92c48040a(arg1, arg2, *(arg3 + 6), *(arg3 + 7)))
    {
        int64_t* rax_1 = std::fs::remove_file::h5bdbb078dd574c13(arg1);
        void* const var_a8;
        int64_t var_78;
        int64_t* var_58;
        int64_t* var_38;
        
        if (rax_1)
        {
            int64_t* r15_1 = rax_1;
            var_38 = rax_1;
            
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rax_1) != 1)
            {
                int64_t rax_5;
                int64_t rdx_3;
                rax_5 = uucore::util_name::h074417a1e6395129();
                var_78 = rax_5;
                int64_t var_70_4 = rdx_3;
                var_58 = &var_78;
                int64_t (* var_50_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a8 = &data_4ea4a0;
                int64_t var_a0_4 = 2;
                int64_t var_88_4 = 0;
                int64_t** var_98_4 = &var_58;
                int64_t var_90_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                var_78 = 1;
                int64_t var_70_5 = arg1;
                int64_t var_68_3 = arg2;
                char var_60_3 = 1;
                var_58 = &var_78;
                int64_t (* var_50_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int64_t* var_48_1 = &var_38;
                int64_t (* var_40_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_a8 = &data_4ea5e0;
                int64_t var_a0_5 = 3;
                int64_t var_88_5 = 0;
                int64_t** var_98_5 = &var_58;
                int64_t var_90_5 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                r15_1 = var_38;
            }
            else
            {
                int64_t rax_3;
                int64_t rdx_1;
                rax_3 = uucore::util_name::h074417a1e6395129();
                var_78 = rax_3;
                int64_t var_70_1 = rdx_1;
                var_58 = &var_78;
                int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a8 = &data_4ea4a0;
                int64_t var_a0_1 = 2;
                int64_t var_88_1 = 0;
                int64_t** var_98_1 = &var_58;
                int64_t var_90_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                var_78 = 1;
                int64_t var_70_2 = arg1;
                int64_t var_68_1 = arg2;
                char var_60_1 = 1;
                var_58 = &var_78;
                int64_t (* var_50_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a8 = &data_4ea500;
                int64_t var_a0_2 = 2;
                int64_t var_88_2 = 0;
                int64_t** var_98_2 = &var_58;
                int64_t var_90_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
            int64_t result;
            result = 1;
            return result;
        }
        
        if (*(arg3 + 5) == 1)
        {
            uu_rm::normalize::h371ce75c5c819b8d();
            var_78 = 1;
            int64_t var_50;
            int64_t var_70_3 = var_50;
            int64_t var_48;
            int64_t var_68_2 = var_48;
            char var_60_2 = 1;
            var_38 = &var_78;
            int64_t (* var_30_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a8 = &data_4ea5c0;
            int64_t var_a0_3 = 2;
            int64_t var_88_3 = 0;
            int64_t** var_98_3 = &var_38;
            int64_t var_90_3 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(var_58, var_50);
        }
    }
    
    return 0;
}
