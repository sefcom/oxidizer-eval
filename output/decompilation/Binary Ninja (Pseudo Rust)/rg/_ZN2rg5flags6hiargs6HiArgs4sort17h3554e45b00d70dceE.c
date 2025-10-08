
  fn rg::flags::hiargs::HiArgs::sort::h3554e45b00d70dce(arg1: *mut c_void, arg2: i64) -> u64

{
    let rax: i8 = *arg1.byte_offset(0x320);
    let mut var_190: ();
    let mut var_160: ();
    
    if rax != 2
    {
        match *arg1.byte_offset(0x321)
        {
            0 =>
            {
                if (rax & 1) != 0
                {
                    let mut var_178: ();
                    core::iter::traits::iterator::Iterator::collect::h1ed20c5bae70b13d(&var_178, 
                        arg2);
                    let var_170: *mut c_void;
                    let var_168: i64;
                    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::he452b10ec11dd926(
                        var_170, var_168);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd60a1aec30ef6fdb(&var_160, &var_178);
                    return alloc::boxed::Box$LT$T$GT$::new::h80588f52c10d4189(&var_160);
                }
            }
            1 =>
            {
                core::iter::traits::iterator::Iterator::map::h10b30e1df260725c(&var_160, arg2);
                core::iter::traits::iterator::Iterator::collect::h20081fed68645860(&var_190, 
                    &var_160);
                goto 'label_6502f8;
            }
            2 =>
            {
                core::iter::traits::iterator::Iterator::map::h10b30e1df260725c(&var_160, arg2);
                core::iter::traits::iterator::Iterator::collect::h7a1bc59298f034e6(&var_190, 
                    &var_160);
                'label_6502f8:
                let var_188: *mut c_void;
                let var_180: i64;
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::hd2458b5d255f4926(var_188, 
                    var_180, arg1.byte_offset(0x320));
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h70819a8a82c53c42(&var_160, &var_190);
                return alloc::boxed::Box$LT$T$GT$::new::h38a55ed589db3961(&var_160);
            }
            3 =>
            {
                core::iter::traits::iterator::Iterator::map::h10b30e1df260725c(&var_160, arg2);
                core::iter::traits::iterator::Iterator::collect::h944c2ea24c581be2(&var_190, 
                    &var_160);
                goto 'label_6502f8;
            }
        }
    }
    alloc::boxed::Box$LT$T$GT$::new::h437fba98ae43dda4(arg2)
}
