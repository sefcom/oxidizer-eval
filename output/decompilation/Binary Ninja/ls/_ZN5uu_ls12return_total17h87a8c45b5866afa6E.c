
  int128_t* uu_ls::return_total::h87a8c45b5866afa6(int64_t* arg1, void** arg2, int64_t arg3, void* arg4, int64_t arg5)

{
    void** const var_90 = arg2;
    void* var_88 = arg3 * 0x130 + arg2;
    void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_90);
    int32_t* var_b0;
    int64_t r12;
    
    if (!i)
        r12 = 0;
    else
    {
        int64_t r13_1 = *(arg4 + 0xd8);
        r12 = 0;
        char rbp_1 = *(arg4 + 0xf1);
        
        do
        {
            int32_t* rax_2 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(i);
            var_b0 = rax_2;
            
            if (rax_2)
                rax_2 = &var_b0;
            
            r12 += core::option::Option$LT$T$GT$::map_or::h56c943784bd347cb(rax_2, r13_1, rbp_1);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_90);
        } while (i);
    }
    
    int128_t* result;
    int64_t rdx_1;
    
    if (*(arg4 + 0xee))
        result = uu_ls::dired::indent::h541a64321517b8c5(arg5);
    
    if (!*(arg4 + 0xee) || !result)
    {
        void var_48;
        uu_ls::display_size::hba9b1cbdd7c6b199(&var_48, r12, *(arg4 + 0xf1));
        var_b0 = &var_48;
        int64_t (* var_a8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void* var_a0_1 = arg4 + 0xfa;
        int64_t (* var_98_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_90 = &data_6125c8;
        int64_t var_88_1 = 2;
        int64_t var_70_1 = 0;
        int32_t** var_80_1 = &var_b0;
        int64_t var_78_1 = 2;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_60, &var_90);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_48);
        int128_t* result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
