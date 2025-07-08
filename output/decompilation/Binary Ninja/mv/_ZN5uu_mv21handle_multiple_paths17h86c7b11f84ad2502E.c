
  int128_t* uu_mv::handle_multiple_paths::h86c7b11f84ad2502(void* arg1, int64_t arg2, void* arg3)

{
    int128_t* result;
    
    if (!*(arg3 + 0x30))
    {
        if (!arg2)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t r15_1 = (arg2 - 1) * 3;
        int64_t rax;
        int64_t rdx_2;
        rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1ae6fd92abd5a845(arg2 - 1, arg1, arg2);
        result = uu_mv::move_files_into_dir::hea74a81b456dd214(rax, rdx_2, 
            *(arg1 + (r15_1 << 3) + 8), *(arg1 + (r15_1 << 3) + 0x10), arg3);
    }
    else
    {
        if (arg2 <= 2)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(2, arg2);
            /* no return */
        }
        
        int128_t zmm0 = *(arg1 + 0x38);
        int64_t var_58 = 1;
        int128_t var_50_1 = zmm0;
        char var_40_1 = 1;
        int64_t* var_98 = &var_58;
        int64_t (* var_90_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        void** const var_88 = &data_587fd0;
        int64_t var_80_1 = 1;
        int64_t var_68_1 = 0;
        int64_t** var_78_1 = &var_98;
        int64_t var_70_1 = 1;
        void var_38;
        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_38, &var_88);
        int32_t var_20_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hbe638d0f99162453(&var_38);
    }
    
    return result;
}
