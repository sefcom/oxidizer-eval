
  int128_t* uu_head::arg_iterate::h2f4030183cfe2e94(int64_t* arg1, int64_t arg2)

{
    int64_t var_1a8 = arg2;
    int64_t rdx;
    int64_t var_1a0 = rdx;
    void** const var_198;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&var_198, &var_1a8);
    
    if (var_198 == -0x8000000000000000)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int128_t var_138 = var_198;
    int64_t var_120;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&var_120, &var_1a8);
    int128_t* result;
    void* var_188;
    int128_t var_e8;
    int64_t rbp;
    
    if (var_120 == -0x8000000000000000)
    {
        int128_t* rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
        
        if (!rax_3)
        {
            rbp = 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        rax_3[1] = var_188;
        *rax_3 = var_138;
        alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_e8, rax_3, 1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_198, &var_e8);
        result = alloc::boxed::Box$LT$T$GT$::new::hc4846b01d8406131(&var_198);
        arg1[1] = result;
        arg1[2] = &data_52a500;
        *arg1 = 0;
        
        if (var_120 != -0x8000000000000000)
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                &var_120);
    }
    else
    {
        int128_t var_a8 = var_120;
        int64_t var_110;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_198, *var_a8[8], var_110);
        int128_t* rax_2;
        
        if (!var_198)
        {
            char* var_190;
            int64_t var_88;
            uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(&var_88, var_190, var_188);
            
            if (var_88)
            {
                int128_t var_108;
                int64_t var_80;
                
                if (var_80)
                {
                    int128_t var_70;
                    int128_t var_f8_1 = var_70;
                    var_108 = var_80;
                    int128_t* rax_4 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                    
                    if (!rax_4)
                    {
                        rbp = 1;
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                        /* no return */
                    }
                    
                    rax_4[1] = var_188;
                    *rax_4 = var_138;
                    alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_e8, rax_4, 1);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_198, &var_e8);
                    core::iter::traits::iterator::Iterator::chain::ha0a0ba46a8cbd376(&var_e8, 
                        &var_198, &var_108);
                    core::iter::traits::iterator::Iterator::chain::he5b09284c7fcbb4e(&var_198, 
                        &var_e8, var_1a8);
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8b06367608b97cc0(&var_198);
                    arg1[2] = &data_52a420;
                    *arg1 = 0;
                    rbp = 0;
                    goto label_46c260;
                }
                
                char var_78;
                int32_t var_180;
                
                if (!var_78)
                {
                    var_e8 = 0;
                    *var_e8[8] = var_190;
                    void* var_d8_2 = var_188;
                    char var_d0_2 = 1;
                    var_108 = &var_e8;
                    *var_108[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_198 = &data_52a3a0;
                    int64_t var_190_2 = 1;
                    int64_t var_178_2 = 0;
                    int128_t* var_188_5 = &var_108;
                    var_180 = 1;
                    int128_t var_60;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a(&var_60, 
                        &var_198);
                    int32_t var_180_3 = 1;
                    var_198 = var_60;
                    int64_t var_50;
                    int64_t var_188_6 = var_50;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
                }
                else
                {
                    var_e8 = 0;
                    *var_e8[8] = var_190;
                    void* var_d8_1 = var_188;
                    char var_d0_1 = 1;
                    var_108 = &var_e8;
                    *var_108[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_198 = &data_52a3b0;
                    int64_t var_190_1 = 2;
                    int64_t var_178_1 = 0;
                    int128_t* var_188_3 = &var_108;
                    var_180 = 1;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a(&var_48, 
                        &var_198);
                    int32_t var_180_2 = 1;
                    var_198 = var_48;
                    int64_t var_38;
                    int64_t var_188_4 = var_38;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
                }
                goto label_46c23f;
            }
            
            int128_t* rax_6 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x30);
            
            if (!rax_6)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            var_198 = var_a8;
            rax_6[1] = var_188;
            *rax_6 = var_138;
            *(rax_6 + 0x18) = var_198;
            *(rax_6 + 0x28) = var_110;
            alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_198, rax_6, 2);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_e8, &var_198);
            core::iter::traits::iterator::Iterator::chain::h3acfa52a063c782b(&var_198, &var_e8, 
                var_1a8);
            result = alloc::boxed::Box$LT$T$GT$::new::h74b85d809da0db73(&var_198);
            arg1[1] = result;
            arg1[2] = &data_52a3e8;
            *arg1 = 0;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40b4874b68ac2e0f(
                &var_e8);
            int64_t var_d8;
            int64_t var_188_1 = var_d8;
            var_198 = var_e8;
            int32_t var_180_1 = 1;
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
            label_46c23f:
            arg1[1] = rax_2;
            arg1[2] = &data_52a490;
            *arg1 = 1;
            rbp = 1;
            label_46c260:
            result = core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                &var_a8);
            
            if (rbp)
                return 
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                    &var_138);
        }
    }
    return result;
}
