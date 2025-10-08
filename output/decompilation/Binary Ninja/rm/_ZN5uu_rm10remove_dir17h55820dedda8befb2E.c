
  void* const uu_rm::remove_dir::h55820dedda8befb2(int64_t arg1, int64_t arg2, void* arg3)

{
    if (uu_rm::prompt_dir::h2b47d5798effefb0(arg1, arg2, *(arg3 + 6), *(arg3 + 7)))
    {
        void* const var_a0;
        int64_t* var_70;
        uint64_t* var_58;
        void* const result;
        
        if (!*(arg3 + 4) && *(arg3 + 3) != 1)
        {
            uint64_t* rax_5;
            int64_t rdx_4;
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_58 = rax_5;
            int64_t var_50_4 = rdx_4;
            var_70 = &var_58;
            int64_t (* var_68_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_a0 = &data_4ea4a0;
            int64_t var_98_4 = 2;
            int64_t var_80_4 = 0;
            int64_t** var_90_4 = &var_70;
            int64_t var_88_4 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            var_58 = 1;
            int64_t var_50_5 = arg1;
            int64_t var_48_2 = arg2;
            char var_40_2 = 1;
            var_70 = &var_58;
            int64_t (* var_68_3)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a0 = &data_4ea5a0;
            int64_t var_98_5 = 2;
            int64_t var_80_5 = 0;
            int64_t** var_90_5 = &var_70;
            int64_t var_88_5 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            result = 1;
            return result;
        }
        
        uint64_t var_38;
        
        if (std::fs::remove_dir::hddc5f5b6184df82a(arg1))
        {
            var_38 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
            uint64_t* rax_3;
            int64_t rdx_2;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_58 = rax_3;
            int64_t var_50_1 = rdx_2;
            var_70 = &var_58;
            int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_a0 = &data_4ea4a0;
            int64_t var_98_1 = 2;
            int64_t var_80_1 = 0;
            int64_t** var_90_1 = &var_70;
            int64_t var_88_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            var_58 = &var_38;
            int64_t (* var_50_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
            var_a0 = &data_4ea4e0;
            int64_t var_98_2 = 2;
            int64_t var_80_2 = 0;
            uint64_t** var_90_2 = &var_58;
            int64_t var_88_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_38);
            result = 1;
            return result;
        }
        
        if (*(arg3 + 5) == 1)
        {
            uu_rm::normalize::h371ce75c5c819b8d();
            var_58 = 1;
            int64_t var_68;
            int64_t var_50_3 = var_68;
            int64_t var_60;
            int64_t var_48_1 = var_60;
            char var_40_1 = 1;
            var_38 = &var_58;
            int64_t (* var_30_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a0 = &data_4ea520;
            int64_t var_98_3 = 2;
            int64_t var_80_3 = 0;
            uint64_t* var_90_3 = &var_38;
            int64_t var_88_3 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_a0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(var_70, var_68);
        }
    }
    
    return nullptr;
}
