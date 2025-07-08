
  fn uu_join::State::new::h1e047ff86b763ae6(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64, arg5: *mut i64, arg6: i64, arg7: i8, arg8: i8) -> *mut i64

{
    let mut rax_2: *mut i64;
    let mut rcx: *mut *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(arg3, arg4, "-non-UTF-8 multi-byte tabvalid s…", 1) == 0
    {
        let mut var_60: ();
        std::fs::File::open::h5119db07cecb01a2(&var_60, arg3);
        let mut var_70: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f1f9b7a34a3754b(&var_70, &var_60);
        let rax_3: i64 = var_70;
        let var_68: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hde7863a5cb2c8fe9(
                &var_60, 0x2000, var_68);
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h27c807e2bc113c31(&var_60);
            rcx = &data_535340;
            goto 'label_4c3a3e;
        }
        
        arg1[1] = rax_3;
        arg1[2] = var_68;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut rax_1: *mut i32;
        let mut rdx: i8;
        rax_1 = std::io::stdio::Stdin::lock::h161a36d857331d7f(arg5);
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hf2d7d209ce9381d4(rax_1, rdx & 1);
        rcx = &data_5353c8;
        'label_4c3a3e:
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        arg1[3] = arg3;
        arg1[4] = arg4;
        arg1[5] = rax_2;
        arg1[6] = rcx;
        arg1[7] = arg7;
        arg1[8] = arg6;
        arg1[9] = 1;
        arg1[0xa] = 0;
        arg1[0xb] = arg2;
        *arg1.byte_offset(0x59) = arg8;
        *arg1.byte_offset(0x5a) = 0;
    }
    arg1
}
