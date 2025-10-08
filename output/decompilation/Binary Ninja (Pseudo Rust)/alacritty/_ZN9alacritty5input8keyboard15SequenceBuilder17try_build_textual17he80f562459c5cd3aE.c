
  fn alacritty::input::keyboard::SequenceBuilder::try_build_textual::he80f562459c5cd3a(arg1: u64, arg2: *mut c_void, arg3: *mut i16, arg4: i64) -> i64

{
    let mut var_a8: i8;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_a8, arg3);
    
    if var_a8 != 0x20 || *arg2.byte_offset(5) == 0
    {
        *arg1 = -0x7fffffffffffffff;
        return 
            core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_a8);
    }
    
    let var_a0: *mut i8;
    let var_98: *mut c_void;
    let rbp_2: *mut c_void = var_98.byte_offset(var_a0);
    let mut result: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_a0, rbp_2, 
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_a8));
    
    if result == 1
    {
        let r12_1: i8 = *arg2.byte_offset(4);
        var_a8 = var_a0;
        let var_a0_1: *mut c_void = rbp_2;
        let mut rax: i8;
        let mut rdx: u64;
        rax = core::str::validations::next_code_point::h6519aaf344192553(&var_a8, arg1);
        let mut rbp_3: u32;
        
        if (rax & 1) != 0
        {
            rbp_3 = rdx;
        }
        
        if (rax & 1) == 0 || rdx == 0x110000
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_b0: u32;
        let mut var_ac: u32;
        let mut var_78: i8;
        let mut rax_1: u32;
        
        if (r12_1 & 1) != 0
        {
            core::unicode::unicode_data::conversions::to_lower::hc1521f967a2a0de4(&var_78, rbp_3);
            core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_a8, &var_78);
            rax_1 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h38e379bedf5f54dc(&var_a8);
            
            if rax_1 == 0x110000
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_ac = rbp_3;
            var_b0 = rax_1;
            
            if rbp_3 == rax_1
            {
                _$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha91dda63f770d88e(&var_a8, &arg3[0x10]);
                winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_78, &var_a8);
                
                if var_78 != 0x20
                {
                    core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(&var_78);
                    rdx = core::ptr::drop_in_place$LT$winit..keyboard..Key$GT$::h52f71c141f8140f2(
                        &var_a8);
                    rax_1 = rbp_3;
                }
                else
                {
                    let var_70: i64;
                    let mut var_58: i64 = var_70;
                    let var_68: i64;
                    let var_50_1: i64 = var_68 + var_70;
                    let mut rax_3: i8;
                    let mut rdx_1: u32;
                    rax_3 =
                        core::str::validations::next_code_point::h6519aaf344192553(&var_58, arg1);
                    let mut rax_4: u32 = 0x110000;
                    
                    if (rax_3 & 1) != 0
                    {
                        rax_4 = rdx_1;
                    }
                    
                    if rax_4 == 0x110000
                    {
                        rax_4 = rbp_3;
                    }
                    
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
        
        let mut var_48: i128;
        
        if (*arg2.byte_offset(2) & 0x10) == 0 || rbp_3 == rax_1
        {
            let mut rax_5: i64;
            let mut rdx_2: u64;
            rax_5 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(rax_1, 
                &var_a8, 0xa);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_48, rax_5, rdx_2);
        }
        else
        {
            var_78 = &var_b0;
            let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            let var_68_1: *mut i32 = &var_ac;
            let var_60_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_a8 = &data_c82c90;
            let var_a0_2: i64 = 2;
            let var_88_1: i64 = 0;
            let var_98_1: *mut i8 = &var_78;
            let var_90_1: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx, &var_a8);
        }
        
        let result_1: i64;
        result = result_1;
        *(arg1 + 0x10) = result;
        *arg1 = var_48;
        *(arg1 + 0x18) = 0x110000;
    }
    else if arg4 == 0 || *arg2.byte_offset(6) == 0
    {
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        *arg1 = -0x8000000000000000;
        *(arg1 + 8) = "0$^mw%p+At@Colon.\ReturnEquals12…";
        *(arg1 + 0x10) = 1;
        *(arg1 + 0x18) = 0x110000;
    }
    
    result
}
