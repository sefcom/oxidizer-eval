
  fn uu_uniq::Uniq::print_line::h83673033b9795089(arg1: *mut c_void, arg2: i64, arg3: *mut c_void, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> i64

{
    let r12: i64 = arg4;
    let rbp: *mut c_void = arg3;
    let mut var_78: i64 = arg6;
    let mut rbx: i8 = 0xa;
    
    if *arg1.byte_offset(0x35) != 0
    {
        rbx = 0;
    }
    
    let rax: u32 = *arg1.byte_offset(0x36);
    arg4 = rax == 4;
    arg3 = arg6 != 1;
    arg3 |= arg4;
    let mut result: i64;
    let mut var_70: *mut c_void;
    
    if arg3 != 0 || (arg7 == 0 && (rax | 2) != 3)
    {
        'label_45ce71:
        
        if *arg1.byte_offset(0x33) == 0
        {
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, r12, arg5));
            
            if result == 0
            {
                var_70 = rbx;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
            }
        }
        else
        {
            let mut var_40: *mut i64 = &var_78;
            let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_70 = &data_4f46e0;
            let var_68_1: i64 = 2;
            let var_50_1: *mut c_void = &data_419460;
            let var_48_1: i64 = 1;
            let var_60_1: *mut *mut i64 = &var_40;
            let var_58_1: i64 = 1;
            let mut var_98: i64;
            core::option::Option$LT$T$GT$::map_or_else::h5c88071545ab2f48(&var_98, &var_70);
            let rax_3: i64 = var_98;
            let var_90: i64;
            let var_88: i64;
            core::iter::traits::iterator::Iterator::chain::h9a7e3a90ed01e4ce(&var_70, var_90, 
                var_88 + var_90, r12);
            core::iter::traits::iterator::Iterator::collect::h5ff8954b863752ae(&var_98, &var_70);
            let rax_4: i64 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, var_90, var_88);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_98, 
                var_90);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6d1453c045ffd4fd(rax_3, var_90);
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(rax_4);
            
            if result == 0
            {
                var_70 = rbx;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
            }
        }
    }
    else
    {
        var_70 = rbx;
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
        
        if result == 0
        {
            goto 'label_45ce71;
        }
    }
    result
}
