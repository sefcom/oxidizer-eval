
  int64_t* uu_sum::open::h97fd496028ff67a9(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t* rax_1;
    void* const rcx;
    int64_t rdx_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd4eb9e54b05204c5(arg2, arg3))
    {
        char* var_d8 = arg2;
        uint64_t var_d0_1 = arg3;
        int64_t* var_128;
        int64_t var_118;
        int64_t* var_f8;
        void* const var_c8;
        void* const rax_3;
        
        if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3))
        {
            std::fs::metadata::h15734e0affd720b1(&var_c8, arg2);
            void* const rdi_3 = var_c8;
            int64_t var_c0;
            
            if (rdi_3 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf120e8ad81360a82(2, var_c0);
                var_118 = 0;
                char* var_110_2 = arg2;
                uint64_t var_108_2 = arg3;
                char var_100_2 = 0;
                var_128 = &var_118;
                int64_t (* var_120_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                rax_3 = &data_4e1b78;
                goto label_457362;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf120e8ad81360a82(rdi_3, var_c0);
            std::fs::File::open::h42d9f349de7578b2(&var_c8, &var_d8);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbb66ee632401819e(&var_f8, &var_c8);
            rax_1 = var_f8;
            int32_t var_f0;
            
            if (!rax_1)
            {
                rax_1 = alloc::boxed::Box$LT$T$GT$::new::h3400401390123d8c(var_f0);
                rcx = &data_4e1b98;
                rdx_1 = 0;
            }
            else
            {
                rcx = var_f0;
                rdx_1 = 1;
            }
        }
        else
        {
            var_118 = 0;
            char* var_110_1 = arg2;
            uint64_t var_108_1 = arg3;
            char var_100_1 = 0;
            var_128 = &var_118;
            int64_t (* var_120_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_4e1b58;
            label_457362:
            var_c8 = rax_3;
            int64_t var_c0_1 = 2;
            int64_t var_a8_1 = 0;
            int64_t** var_b8_1 = &var_128;
            int64_t var_b0_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h5edfc5779a6c968c(&var_f8, &var_c8);
            int32_t var_e0_1 = 2;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::hdf1801492e78d9ca(&var_f8);
            rdx_1 = 1;
            rcx = &data_4e1c10;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hcc811c181a3c74a1(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rcx = &data_4e1c78;
        rdx_1 = 0;
    }
    
    arg1[1] = rax_1;
    arg1[2] = rcx;
    *arg1 = rdx_1;
    return arg1;
}
