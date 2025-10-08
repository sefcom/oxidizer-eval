
  fn uu_tr::operation::translate_input::h0ac4b7e158c4d5cc(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_78: i64 = 0;
    let var_70: i64 = 1;
    let mut var_68: i64 = 0;
    let mut var_60: i64 = 0;
    let var_58: i64 = 1;
    let mut var_50: u64 = 0;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(arg1, 0xa, &var_78);
        let mut r12_1: i64 = rdx_1;
        
        if (rax_1 & 1) != 0
        {
            goto 'label_461b7a;
        }
        
        let mut result: i64;
        
        if r12_1 == 0
        {
            r12_1 = 0;
            'label_461b7a:
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
            result = 0;
            'label_461b98:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(var_60, 
                var_58);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(var_78, 
                var_70);
            core::ptr::drop_in_place$LT$uu_tr..operation..TranslateOperation$GT$::hba9417b013456e17(
                *arg3, arg3[1]);
            return result;
        }
        
        let mut var_48: i64 = var_70;
        let var_40_1: i64 = var_68 + var_70;
        let var_38_1: *mut i64 = arg3;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hd3854286173163e1(&var_60, &var_48);
        let result_1: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1c081fbf40a55a1c(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h03d4feaa07dcafdd(arg2, var_58, var_50));
        result = result_1;
        
        if result_1 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
            goto 'label_461b98;
        }
        
        var_68 = 0;
        var_50 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
    }
}
