
  int64_t uu_tr::operation::translate_input::hd58ae3eaa3f14818(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t var_88 = 0;
    int64_t var_80 = 1;
    int64_t var_78 = 0;
    int64_t var_70 = 0;
    int64_t var_68 = 1;
    uint64_t var_60 = 0;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(arg1, 0xa, &var_88);
        int64_t var_58 = rax_1;
        int64_t var_50_1 = rdx_1;
        
        if (rax_1 || !rdx_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&var_58);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_70);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_88);
            return core::ptr::drop_in_place$LT$uu_tr..operation..ChainedSymbolTranslator$LT$uu_tr..operation..TranslateOperation$C$uu_tr..operation..SqueezeOperation$GT$$GT$::hf3ef7a5e03e34340(arg3);
        }
        
        int64_t var_48 = var_80;
        int64_t var_40_1 = var_78 + var_80;
        int64_t* var_38_1 = arg3;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hd45417de63711eb1(&var_70, &var_48);
        core::result::Result$LT$T$C$E$GT$::unwrap::hdacc8680b3e233fd(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h266d567e2e387c1e(arg2, var_68, var_60));
        var_78 = 0;
        var_60 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h3721ff3632bfcddf(&var_58);
    }
}
