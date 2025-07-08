
  void uu_ptx::get_reference::hde200eae24bcb508(int128_t* arg1, char arg2, char arg3, void* arg4, char* arg5, void* arg6, void* arg7, void* arg8)

{
    void* const var_a0;
    
    if (arg2)
    {
        int128_t zmm0 = *(arg4 + 0x20);
        int64_t var_48 = 0;
        int128_t var_40_1 = zmm0;
        char var_30_1 = 0;
        int64_t var_70 = *(arg4 + 0x38) + 1;
        int64_t* var_68 = &var_48;
        int64_t (* var_60_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int64_t* var_58_1 = &var_70;
        uint64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        var_a0 = &data_6eddd0;
        int64_t var_98_1 = 2;
        int64_t var_80_1 = 0;
        int64_t** var_90_1 = &var_68;
        int64_t var_88_1 = 2;
        core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(arg1, &var_a0);
    }
    else if (!arg3)
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        arg1[1] = 0;
    }
    else
    {
        regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&var_a0, arg7, arg8, arg5, arg6);
        int128_t* r15_1 = var_a0;
        void* r12_1 = r15_1;
        int128_t* var_90;
        
        if (r15_1)
        {
            r15_1 = var_90;
            void* var_88;
            r12_1 = var_88;
        }
        
        void* rax_3;
        uint64_t rdx_2;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r15_1, r12_1, arg5, arg6);
        
        if (!rax_3)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg5, arg6, r15_1, r12_1);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_a0, 
            rax_3, rdx_2);
        arg1[1] = var_90;
        *arg1 = var_a0;
    }
}
