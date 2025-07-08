
  int64_t uu_ptx::format_roff_line::h4297720d7d6a4583(int128_t* arg1, char const (** arg2)[0x90], void* arg3, void* arg4, char* arg5, void* arg6, int64_t arg7, int64_t arg8, char* arg9, int64_t arg10)

{
    void* var_200 = arg3;
    int64_t var_1e0 = 0;
    int64_t var_1d8 = 1;
    int64_t var_1d0 = 0;
    char const (** const var_d8)[0x90] = arg2;
    int64_t (* var_d0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    char const (** const var_1c8)[0x91] = &data_6ee100;
    int64_t var_1c0 = 1;
    int64_t var_1a8 = 0;
    int64_t* var_1b8 = &var_d8;
    int64_t var_1b0 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&var_1e0, &var_1c8));
    char rax_2 = *(arg2 + 0x5a);
    void* r14;
    void* rsi_6;
    void* r14_2;
    
    if (!rax_2)
    {
        r14_2 = nullptr;
        rsi_6 = var_200;
        label_5b85e9:
        int64_t rax_6;
        int64_t rdx_6;
        rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(r14_2, rsi_6, arg7, arg8);
        r14 = var_200;
        void* rax_7;
        int64_t rdx_8;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r14, arg4, arg5, arg6);
        
        if (rax_7)
        {
            int64_t rax_8;
            int64_t rdx_10;
            rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(arg4, arg8, arg7, arg8);
            uu_ptx::get_output_chunks::h767f800997394e82(&var_1c8, rax_6, rdx_6, rdx_8, rax_8, 
                rdx_10, arg2);
            int128_t var_168 = var_1c8;
            int128_t var_148 = var_1b0;
            int128_t var_198;
            int128_t var_128 = var_198;
            int128_t var_180;
            int128_t var_108 = var_180;
            void var_90;
            uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_90, *var_168[8], var_1b8);
            int64_t var_1a0;
            void var_78;
            uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_78, *var_148[8], var_1a0);
            void var_60;
            uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_60, rax_7, rdx_8);
            int64_t var_188;
            void var_48;
            uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_48, *var_128[8], var_188);
            int64_t var_170;
            char const (** const* var_a8)[0x90];
            uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_a8, *var_108[8], var_170);
            var_1c8 = &var_90;
            int64_t (* var_1c0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            void* var_1b8_1 = &var_78;
            int64_t (* var_1b0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            void* var_1a8_1 = &var_60;
            int64_t (* var_1a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_198 = &var_48;
            *var_198[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t* var_188_1 = &var_a8;
            var_180 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_d8 = &data_6ee110;
            int64_t var_d0_1 = 6;
            int64_t var_b8 = 0;
            char const (** const* var_c8)[0x91] = &var_1c8;
            int64_t var_c0 = 5;
            core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&var_1e0, &var_d8));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_48);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_78);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_90);
            
            if (rax_2 | *(arg2 + 0x59))
            {
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&var_d8, arg9, arg10);
                var_a8 = &var_d8;
                int64_t (* var_a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1c8 = &data_6ee170;
                int64_t var_1c0_2 = 2;
                int64_t var_1a8_2 = 0;
                char const (** const** var_1b8_2)[0x90] = &var_a8;
                int64_t var_1b0_2 = 1;
                core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&var_1e0, &var_1c8));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_d8);
            }
            
            arg1[1] = var_1d0;
            *arg1 = var_1e0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_108);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_128);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_148);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                &var_168);
        }
        
        var_200 = arg4;
    }
    else
    {
        r14 = nullptr;
        void* rax_3;
        int64_t rdx_1;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, var_200, arg5, arg6);
        
        if (rax_3)
        {
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h6c3139838afd9563(rax_3, 
                rdx_1, arg9, arg10);
            r14_2 = var_200 -
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he60d0121d8eb8a5f(rax_4, 
                rdx_3);
            rsi_6 = core::cmp::max_by::h25e6646c8b089280(rdx_1, r14_2);
            goto label_5b85e9;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(arg5, arg6, r14, var_200);
    /* no return */
}
