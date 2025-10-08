
  int64_t alacritty::input::keyboard::SequenceBuilder::try_build_textual::he80f562459c5cd3a(uint64_t arg1, void* arg2, int16_t* arg3, int64_t arg4)

{
    char var_a8;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_a8, arg3);
    
    if (var_a8 != 0x20 || !*(arg2 + 5))
    {
        *arg1 = -0x7fffffffffffffff;
        return 
            core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_a8);
    }
    
    char* var_a0;
    void* var_98;
    void* rbp_2 = var_98 + var_a0;
    int64_t result = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_a0, rbp_2, 
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_a8));
    
    if (result == 1)
    {
        char r12_1 = *(arg2 + 4);
        var_a8 = var_a0;
        void* var_a0_1 = rbp_2;
        char rax;
        uint64_t rdx;
        rax = core::str::validations::next_code_point::h6519aaf344192553(&var_a8, arg1);
        uint32_t rbp_3;
        
        if (rax & 1)
            rbp_3 = rdx;
        
        if (!(rax & 1) || rdx == 0x110000)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uint32_t var_b0;
        uint32_t var_ac;
        char var_78;
        uint32_t rax_1;
        
        if (r12_1 & 1)
        {
            core::unicode::unicode_data::conversions::to_lower::hc1521f967a2a0de4(&var_78, rbp_3);
            core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_a8, &var_78);
            rax_1 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h38e379bedf5f54dc(&var_a8);
            
            if (rax_1 == 0x110000)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_ac = rbp_3;
            var_b0 = rax_1;
            
            if (rbp_3 == rax_1)
            {
                _$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha91dda63f770d88e(&var_a8, &arg3[0x10]);
                winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_78, &var_a8);
                
                if (var_78 != 0x20)
                {
                    core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(&var_78);
                    rdx = core::ptr::drop_in_place$LT$winit..keyboard..Key$GT$::h52f71c141f8140f2(
                        &var_a8);
                    rax_1 = rbp_3;
                }
                else
                {
                    int64_t var_70;
                    int64_t var_58 = var_70;
                    int64_t var_68;
                    int64_t var_50_1 = var_68 + var_70;
                    char rax_3;
                    uint32_t rdx_1;
                    rax_3 =
                        core::str::validations::next_code_point::h6519aaf344192553(&var_58, arg1);
                    uint32_t rax_4 = 0x110000;
                    
                    if (rax_3 & 1)
                        rax_4 = rdx_1;
                    
                    if (rax_4 == 0x110000)
                        rax_4 = rbp_3;
                    
                    var_b0 = rax_4;
                    core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(&var_78);
                    rdx = core::ptr::drop_in_place$LT$winit..keyboard..Key$GT$::h52f71c141f8140f2(
                        &var_a8);
                    rax_1 = rax_4;
                }
            }
        }
        else
        {
            var_ac = rbp_3;
            var_b0 = rbp_3;
            rax_1 = rbp_3;
        }
        
        int128_t var_48;
        
        if (!(*(arg2 + 2) & 0x10) || rbp_3 == rax_1)
        {
            int64_t rax_5;
            uint64_t rdx_2;
            rax_5 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(rax_1, 
                &var_a8, 0xa);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_48, rax_5, rdx_2);
        }
        else
        {
            var_78 = &var_b0;
            uint64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            int32_t* var_68_1 = &var_ac;
            uint64_t (* var_60_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_a8 = &data_c82c90;
            int64_t var_a0_2 = 2;
            int64_t var_88_1 = 0;
            char* var_98_1 = &var_78;
            int64_t var_90_1 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx, &var_a8);
        }
        
        int64_t result_1;
        result = result_1;
        *(arg1 + 0x10) = result;
        *arg1 = var_48;
        *(arg1 + 0x18) = 0x110000;
    }
    else if (!arg4 || !*(arg2 + 6))
        *arg1 = -0x7fffffffffffffff;
    else
    {
        *arg1 = -0x8000000000000000;
        *(arg1 + 8) = "0$^mw%p+At@Colon.\ReturnEquals12…";
        *(arg1 + 0x10) = 1;
        *(arg1 + 0x18) = 0x110000;
    }
    
    return result;
}
