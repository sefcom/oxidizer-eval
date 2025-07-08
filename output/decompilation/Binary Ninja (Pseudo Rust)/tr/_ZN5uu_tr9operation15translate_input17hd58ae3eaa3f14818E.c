
  fn uu_tr::operation::translate_input::hd58ae3eaa3f14818(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_88: i64 = 0;
    let var_80: i64 = 1;
    let mut var_78: i64 = 0;
    let mut var_70: i64 = 0;
    let var_68: i64 = 1;
    let mut var_60: u64 = 0;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(arg1, 0xa, &var_88);
        let mut var_58: i64 = rax_1;
        let var_50_1: i64 = rdx_1;
        
        if rax_1 != 0 || rdx_1 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&var_58);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_70);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_88);
            return core::ptr::drop_in_place$LT$uu_tr..operation..ChainedSymbolTranslator$LT$uu_tr..operation..TranslateOperation$C$uu_tr..operation..SqueezeOperation$GT$$GT$::hf3ef7a5e03e34340(arg3);
        }
        
        let mut var_48: i64 = var_80;
        let var_40_1: i64 = var_78 + var_80;
        let var_38_1: *mut i64 = arg3;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hd45417de63711eb1(&var_70, &var_48);
        core::result::Result$LT$T$C$E$GT$::unwrap::hdacc8680b3e233fd(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h266d567e2e387c1e(arg2, var_68, var_60));
        var_78 = 0;
        var_60 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&var_58);
    }
}
