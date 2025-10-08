
  uint64_t uu_mv::handle_multiple_paths::h97c89a5ca649d47f(void* arg1, int64_t arg2, void* arg3)

{
    uint64_t result;
    
    if (!*(arg3 + 0x30))
    {
        if (!arg2)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t r15_1 = (arg2 - 1) * 3;
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hfa85d5bb3948d4f8(arg2 - 1, arg1, arg2);
        result = uu_mv::move_files_into_dir::h52a820120b69cecf(rax_1, rdx_2, 
            *(arg1 + (r15_1 << 3) + 8), *(arg1 + (r15_1 << 3) + 0x10), arg3);
    }
    else
    {
        if (arg2 <= 2)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(2, arg2);
            /* no return */
        }
        
        int64_t rax = *(arg1 + 0x38);
        int64_t rcx = *(arg1 + 0x40);
        int64_t var_88 = 1;
        int64_t var_80_1 = rax;
        int64_t var_78_1 = rcx;
        char var_70_1 = 1;
        int64_t* var_98 = &var_88;
        int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        char const (** const var_68)[0xe5] = &data_541878;
        int64_t var_60_1 = 1;
        int64_t var_48_1 = 0;
        int64_t** var_58_1 = &var_98;
        int64_t var_50_1 = 1;
        void var_38;
        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_38, &var_68);
        int32_t var_20_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hbfa620bc4db9cfd6(&var_38);
    }
    
    return result;
}
