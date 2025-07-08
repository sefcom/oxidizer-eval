
  void* uu_sort::exec::h00f1df48122bfa65(int64_t* arg1, int64_t arg2, void* arg3, int64_t* arg4, void* arg5)

{
    int128_t var_d8;
    int128_t var_c8;
    
    if (*(arg3 + 0x81))
    {
        int64_t rax;
        
        if (*arg4 == -0x8000000000000000)
            rax = 0;
        else
            rax = arg4[1];
        
        uu_sort::merge::merge::h37f56e954177d019(&var_d8, arg1, arg2, arg3, rax, arg4[2], arg5);
        int64_t rdx_1 = var_d8;
        void* rax_3 = *var_d8[8];
        
        if (rdx_1 != 3)
        {
            int64_t var_80;
            int64_t var_20_1 = var_80;
            int128_t var_90;
            int128_t var_30_1 = var_90;
            int128_t var_a0;
            int128_t var_40_1 = var_a0;
            int128_t var_b0;
            int128_t var_50_1 = var_b0;
            int128_t var_60_1 = var_c8;
            int64_t var_78 = rdx_1;
            void* var_70_1 = rax_3;
            int64_t var_68_1 = var_c8;
            int128_t var_c8_1 = *(arg4 + 0x10);
            var_d8 = *arg4;
            return uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(&var_78, arg3, &var_d8);
        }
        
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg4);
        return rax_3;
    }
    
    int64_t* var_f0;
    
    if (!*(arg3 + 0x85))
    {
        var_f0 = arg1;
        void* var_e8_1 = &arg1[arg2 * 3];
        int128_t var_c8_2 = *(arg4 + 0x10);
        var_d8 = *arg4;
        return uu_sort::ext_sort::ext_sort::hc251c769f969c18a(&var_f0, arg3, &var_d8, arg5);
    }
    
    void* r14_1;
    
    if (arg2 <= 1)
    {
        if (arg2 != 1)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        void* rax_7;
        void** rdx_6;
        rax_7 = uu_sort::check::check::h20d514b4388b3f7e(arg1[1], arg1[2], arg3);
        r14_1 = rax_7;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_f0, 
            "only one file allowed with -cinf…", 0x1d);
        int64_t var_e0;
        var_c8 = var_e0;
        var_d8 = var_f0;
        *var_c8[8] = 2;
        r14_1 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg4);
    return r14_1;
}
