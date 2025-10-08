
  fn uu_join::State::new::hab21adfd9d97a2fd(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64, arg5: *mut i64, arg6: i64, arg7: i8, arg8: i8) -> *mut i64

{
    let mut rax_2: u64;
    let mut rcx: *mut *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg3, arg4, "-non-UTF-8 multi-byte tabvalid s…", 1) == 0
    {
        let mut var_60: ();
        std::fs::File::open::h123aad933b4bca75(&var_60, arg3);
        let mut var_70: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hadc359ee40c1b991(&var_70, &var_60);
        let rax_3: i64 = var_70;
        let var_68: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7f82d3637640fb6b(
                &var_60, var_68);
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::ha0ab546ee9cbc98b(&var_60);
            rcx = &data_4fe3e0;
            goto 'label_46d3c6;
        }
        
        arg1[1] = rax_3;
        arg1[2] = var_68;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut rax_1: *mut i32;
        let mut rdx: i8;
        rax_1 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(arg5);
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h25e583750da886e1(rax_1, rdx & 1);
        rcx = &data_4fe468;
        'label_46d3c6:
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
