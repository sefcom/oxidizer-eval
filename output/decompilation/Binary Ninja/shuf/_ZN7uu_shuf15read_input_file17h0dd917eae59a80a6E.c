
  int64_t* uu_shuf::read_input_file::h0dd917eae59a80a6(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_50;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::haac61b2152f123ac(arg2, arg3, "-read errorsrc/uu/shuf/src/shuf.…", 1))
    {
        std::fs::read::h030b17e0e1466fa8(&var_50, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h18c090cde01c2b9c(arg1, &var_50);
    }
    else
    {
        var_50 = 0;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 0;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        void* var_38 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        char rax_1;
        int64_t rdx;
        rax_1 =
            _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::h3553e0b49d623411(
            &var_38, &var_50);
        int64_t var_30;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7c83e9fc7c9d22e6(&var_30, rax_1, rdx);
        int64_t rax_2 = var_30;
        
        if (!rax_2)
        {
            arg1[2] = var_40_1;
            *arg1 = var_50;
        }
        else
        {
            arg1[1] = rax_2;
            int64_t var_28;
            arg1[2] = var_28;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7c3318fa84a63376(var_50, 
                var_48_1);
        }
    }
    return arg1;
}
