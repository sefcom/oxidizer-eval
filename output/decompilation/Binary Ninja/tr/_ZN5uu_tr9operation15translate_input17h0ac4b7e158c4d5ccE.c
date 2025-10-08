
  int64_t uu_tr::operation::translate_input::h0ac4b7e158c4d5cc(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t var_78 = 0;
    int64_t var_70 = 1;
    int64_t var_68 = 0;
    int64_t var_60 = 0;
    int64_t var_58 = 1;
    uint64_t var_50 = 0;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(arg1, 0xa, &var_78);
        int64_t r12_1 = rdx_1;
        
        if (rax_1 & 1)
            goto label_461b7a;
        
        int64_t result;
        
        if (!r12_1)
        {
            r12_1 = 0;
            label_461b7a:
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
            result = 0;
            label_461b98:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(var_60, 
                var_58);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(var_78, 
                var_70);
            core::ptr::drop_in_place$LT$uu_tr..operation..TranslateOperation$GT$::hba9417b013456e17(
                *arg3, arg3[1]);
            return result;
        }
        
        int64_t var_48 = var_70;
        int64_t var_40_1 = var_68 + var_70;
        int64_t* var_38_1 = arg3;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hd3854286173163e1(&var_60, &var_48);
        int64_t result_1 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1c081fbf40a55a1c(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h03d4feaa07dcafdd(arg2, var_58, var_50));
        result = result_1;
        
        if (result_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
            goto label_461b98;
        }
        
        var_68 = 0;
        var_50 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd84acac9d5f9e71f(rax_1, r12_1);
    }
}
