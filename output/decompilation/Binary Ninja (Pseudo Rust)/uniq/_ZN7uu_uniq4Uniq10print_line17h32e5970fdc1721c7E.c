
  fn uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1: *mut c_void, arg2: i64, arg3: *mut c_void, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> *mut i128

{
    let mut var_b0: i64 = arg6;
    let mut rbp: i8 = 0xa;
    
    if *arg1.byte_offset(0x35) != 0
    {
        rbp = 0;
    }
    
    let mut result: *mut i128;
    let mut var_e8: i64;
    
    if arg6 != 1
    {
        'label_470481:
        
        if *arg1.byte_offset(0x33) == 0
        {
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, arg4, arg5));
            
            if result == 0
            {
                var_e8 = rbp;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7b8303005c683fae(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
            }
        }
        else
        {
            let mut var_90: *mut i64 = &var_b0;
            let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_e8 = 2;
            let var_d8_1: i64 = 0;
            let var_d0_1: i64 = 7;
            let var_c8_1: i64 = 0;
            let var_c0_1: i64 = 0x20;
            let var_b8_1: i8 = 3;
            let mut var_80: *mut c_void = &data_52d918;
            let var_78_1: i64 = 2;
            let var_60_1: *mut i64 = &var_e8;
            let var_58_1: i64 = 1;
            let var_70_1: *mut *mut i64 = &var_90;
            let var_68_1: i64 = 1;
            let mut var_a8: ();
            core::option::Option$LT$T$GT$::map_or_else::hf9a5e71691484ed0(&var_a8, &var_80);
            let var_a0: i64;
            let var_98: i64;
            let mut var_50: ();
            core::iter::traits::iterator::Iterator::chain::hdcb7d762b52e317b(&var_50, var_a0, 
                var_98 + var_a0, arg4);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hac39029f6d8a5f03(&var_e8, &var_50);
            let var_e0: i64;
            let rax_5: i64 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, var_e0, var_d8_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79de3313e0d66245(&var_a8);
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(rax_5);
            
            if result == 0
            {
                var_e8 = rbp;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7b8303005c683fae(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
            }
        }
    }
    else
    {
        let rax_1: i8 = *arg1.byte_offset(0x36);
        
        if rax_1 == 4 || (arg7 == 0 && (rax_1 | 2) != 3)
        {
            goto 'label_470481;
        }
        
        var_e8 = rbp;
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfa9427f084ffcfe7(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
        
        if result == 0
        {
            goto 'label_470481;
        }
    }
    result
}
