
  fn uu_ls::display_grid::h3c5e157ceab431f0(arg1: *mut i128, arg2: i16, arg3: i8, arg4: i64, arg5: i8) -> *mut i128

{
    let mut var_150: i64;
    let var_140: i64;
    let mut var_138: i128;
    let mut var_118: i128;
    let mut var_e8: *mut i128;
    let mut result: *mut i128;
    
    if arg2 == 0
    {
        let var_108_1: i128 = arg1[1];
        var_118 = *arg1;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_150, &var_118);
        
        if var_150 != -0x8000000000000000
        {
            let var_128_2: i64 = var_140;
            var_138 = var_150;
            let mut rax_9: i64;
            
            loop
            {
                let mut var_60: *mut i128 = &var_138;
                let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_e8 = &data_423c10;
                let var_e0_2: i64 = 1;
                let var_c8_1: i64 = 0;
                let var_d8_1: *mut *mut i128 = &var_60;
                let mut var_d0_1: i64 = 1;
                let mut result_1: *mut i128;
                
                if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8) != 0
                {
                    result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_138);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_150, &var_118);
                    
                    if var_150 == -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
                        var_e8 = &data_6125b8;
                        let var_e0_4: i64 = 1;
                        let var_d8_3: i64 = 8;
                        var_d0_1 = {0};
                        rax_9 = std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8);
                        break;
                    }
                    
                    let var_128_3: i64 = var_140;
                    var_138 = var_150;
                    var_e8 = &data_612688;
                    let var_e0_3: i64 = 1;
                    let var_d8_2: i64 = 8;
                    var_d0_1 = {0};
                    
                    if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8) == 0
                    {
                        continue;
                    }
                    else
                    {
                        result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    }
                }
                
                result = result_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
                goto 'label_52a4ae_1;
            }
            
            if rax_9 != 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                'label_52a4ae:
                return result;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
        }
    }
    else
    {
        if arg5 == 0
        {
            core::iter::traits::iterator::Iterator::collect::hd9d48ed126578877(&var_150, arg1);
        }
        else
        {
            let mut var_50: ();
            core::iter::traits::iterator::Iterator::map::hb476dda254653927(&var_50, arg1);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h0bf662e477722034(&var_150, &var_50);
        }
        
        let var_148: *mut i128;
        var_e8 = var_148;
        let var_e0_1: *mut c_void = var_148.byte_offset(var_140 * 0x18);
        let mut rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h2bc0af22b69decc2(&var_e8);
        let mut zmm0_2: i128;
        
        if rax_2 == 0
        {
            zmm0_2 = data_423ad0[0x10][0];
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_e8, "\t?????????+bd-cannot access a T…", 1);
            zmm0_2 = var_e8;
            let var_d8: *mut c_void;
            rax_2 = var_d8;
        }
        
        let var_128_1: i64 = var_140;
        var_138 = var_150;
        let mut var_f8_1: i8 = arg3;
        var_118 = zmm0_2;
        let mut var_108: i128;
        var_108 = rax_2;
        *var_108[8] = arg2;
        term_grid::Grid$LT$T$GT$::new::he78d9ee35961568e(&var_e8, &var_138, &var_118);
        var_138 = &var_e8;
        *var_138[8] =
            _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7f040c401bf95897;
        var_118 = &data_423c10;
        *var_118[8] = 1;
        var_f8_1 = 0;
        var_108 = &var_138;
        *var_108[8] = 1;
        
        if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_118) != 0
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&var_e8);
            'label_52a4ae_1:
            return result;
        }
        
        core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&var_e8);
    }
    nullptr
}
