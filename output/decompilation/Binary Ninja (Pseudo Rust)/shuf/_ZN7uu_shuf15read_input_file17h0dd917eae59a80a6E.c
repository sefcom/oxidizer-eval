
  fn uu_shuf::read_input_file::h0dd917eae59a80a6(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_50: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::haac61b2152f123ac(arg2, arg3, "-read errorsrc/uu/shuf/src/shuf.…", 1) == 0
    {
        std::fs::read::h030b17e0e1466fa8(&var_50, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h18c090cde01c2b9c(arg1, &var_50);
    }
    else
    {
        var_50 = 0;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 0;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        let mut var_38: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let mut rax_1: i8;
        let mut rdx: i64;
        rax_1 =
            _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::h3553e0b49d623411(
            &var_38, &var_50);
        let mut var_30: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7c83e9fc7c9d22e6(&var_30, rax_1, rdx);
        let rax_2: i64 = var_30;
        
        if rax_2 == 0
        {
            arg1[2] = var_40_1;
            *arg1 = var_50;
        }
        else
        {
            arg1[1] = rax_2;
            let var_28: i64;
            arg1[2] = var_28;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7c3318fa84a63376(var_50, 
                var_48_1);
        }
    }
    arg1
}
