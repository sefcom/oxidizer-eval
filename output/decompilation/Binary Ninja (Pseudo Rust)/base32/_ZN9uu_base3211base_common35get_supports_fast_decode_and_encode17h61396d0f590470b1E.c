
  fn uu_base32::base_common::get_supports_fast_decode_and_encode::h61396d0f590470b1(arg1: i8) -> u64

{
    let mut var_58: i128;
    let mut var_40: ();
    let mut result: u64;
    let mut r8_1: *const i8;
    
    match jump_table_418a0c[arg1]
    {
        0xa8efd =>
        {
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\x55\x8c\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8_1 = "abcdefghijklmnopqrstuvwxyzABCDEF…";
            'label_4c19f9:
            uucore::features::encoding::EncodingWrapper::new::hfafc98e3bfda4370(&var_40, &var_58, 
                4, 3, r8_1, 0x41);
            result = alloc::boxed::Box$LT$T$GT$::new::hb288881b73ca06d1(&var_40);
        }
        0xa8f20 =>
        {
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xe0\x94\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            uucore::features::encoding::EncodingWrapper::new::hfafc98e3bfda4370(&var_40, &var_58, 
                2, 1, "0123456789ABCDEF", 0x10);
            result = alloc::boxed::Box$LT$T$GT$::new::hb288881b73ca06d1(&var_40);
        }
        0xa8f5b =>
        {
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xbb\x90\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567…";
            'label_4c19aa:
            uucore::features::encoding::EncodingWrapper::new::hfafc98e3bfda4370(&var_40, &var_58, 
                8, 5, r8_1, 0x21);
            result = alloc::boxed::Box$LT$T$GT$::new::hb288881b73ca06d1(&var_40);
        }
        0xa8f7b =>
        {
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xde\x92\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8_1 = "0123456789ABCDEFGHIJKLMNOPQRSTUV…";
            goto 'label_4c19aa;
        }
        0xa8fb6 =>
        {
            result = alloc::boxed::Box$LT$T$GT$::new::h13d233e013dd4b95();
        }
        0xa8fca =>
        {
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\x98\x8e\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8_1 = "abcdefghijklmnopqrstuvwxyzABCDEF…";
            goto 'label_4c19f9;
        }
        0xa9002 =>
        {
            goto 'label_4c1a36;
        }
        0xa9017 =>
        {
            let var_48_1: i64 = 0x202;
            'label_4c1a36:
            __builtin_memcpy(&var_58, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xe4\x96\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            uucore::features::encoding::EncodingWrapper::new::hfafc98e3bfda4370(&var_40, &var_58, 
                8, 1, "01010101010101010101010101010101…", 2);
            result = alloc::boxed::Box$LT$T$GT$::new::hb288881b73ca06d1(&var_40);
        }
    }
    
    result
}
