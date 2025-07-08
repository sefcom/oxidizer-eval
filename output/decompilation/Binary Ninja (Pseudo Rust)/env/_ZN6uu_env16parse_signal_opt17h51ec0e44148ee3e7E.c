
  fn uu_env::parse_signal_opt::h51ec0e44148ee3e7(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut c_void

{
    let rbx: *mut i64;
    let var_30: *mut i64 = rbx;
    
    if arg3 != 0
    {
        let mut var_80: i64 = arg2;
        let var_78_1: i64 = arg3;
        let var_70_1: i8 = 0;
        let mut var_98: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdbc1dc456658658e(&var_98, &var_80);
        let mut result_1: *mut c_void;
        let var_88: i64;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&result_1, var_88, 
            0);
        let var_110: *mut i64;
        
        if result_1 != 0
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_110);
            /* no return */
        }
        
        let mut var_e0: *mut i64 = var_110;
        let var_108: size_t;
        let var_d8_1: size_t = var_108;
        let var_d0_1: i64 = 0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(&result_1, &var_98);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3d344e0b0e9083cd(&result_1, &var_e0);
        let mut var_68: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(&var_68, &var_e0);
        let mut i_3: *mut i8;
        let mut rdx: i64;
        i_3 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&var_68);
        
        if i_3 != 0
        {
            let mut i_1: *mut i8 = i_3;
            let mut r14_1: i64 = rdx;
            let mut i: *mut i8;
            
            do
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&result_1, i_1, r14_1);
                let mut var_c8: *mut i64;
                let mut result: *mut c_void;
                
                if result_1 != 0
                {
                    var_c8 = 1;
                    let i_2: *mut i8 = i_1;
                    let var_b8_1: i64 = r14_1;
                    let var_b0_1: i8 = 1;
                    let mut var_a8: *mut *mut c_void = &var_c8;
                    let var_a0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    result_1 = &data_5488b0;
                    let var_110_1: i64 = 2;
                    let var_f8_1: i64 = 0;
                    let var_108_1: *mut *mut *mut c_void = &var_a8;
                    let mut var_100_1: i64 = 1;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_48, 
                        &result_1);
                    var_100_1 = 1;
                    result_1 = var_48;
                    let var_38: i64;
                    let var_108_2: i64 = var_38;
                    result = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
                    return result;
                }
                
                uu_env::parse_signal_value::hd39e24cc594f23d4(&result_1, var_110, var_108);
                result = result_1;
                
                if result != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
                    return result;
                }
                
                var_c8 = var_110;
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h4b9b47ba52f5f211(&var_c8, arg1[0xd], arg1[0xe]) == 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h7268e86c4e26498f(&arg1[0xc], var_110);
                }
                
                let mut rdx_1: i64;
                i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&var_68);
                i_1 = i;
                r14_1 = rdx_1;
            } while i != 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
    }
    
    nullptr
}
