
  int64_t* uu_base32::base_common::get_input::hb11f0dc280e05835(int64_t* arg1, void* arg2)

{
    uint64_t var_50;
    void* var_38;
    
    if (!(0 + -(*(arg2 + 0x10))))
    {
        std::fs::File::open::h1ad496a7ceefb856(&var_38, arg2 + 0x10);
        *(arg2 + 0x18);
        *(arg2 + 0x20);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h223c42e18bad111b(&var_50, &var_38);
        uint64_t rax_3 = var_50;
        int64_t var_48;
        
        if (!rax_3)
        {
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::he7c5401255d3159b(var_48);
            arg1[2] = &data_50dfa8;
            *arg1 = 0;
        }
        else
        {
            arg1[1] = rax_3;
            arg1[2] = var_48;
            *arg1 = 1;
        }
    }
    else
    {
        var_50 = 0;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 0;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_38 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        
        if (!(
            _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::h3553e0b49d623411(
            &var_38, &var_50) & 1))
        {
            int64_t var_28_1 = var_40_1;
            var_38 = var_50;
            int64_t var_20_1 = 0;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hf37d0e31ba9d9aaf(&var_38);
            arg1[2] = &data_50dee0;
            *arg1 = 0;
        }
        else
        {
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_50ef08;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(var_50, 
                var_48_1);
        }
    }
    return arg1;
}
