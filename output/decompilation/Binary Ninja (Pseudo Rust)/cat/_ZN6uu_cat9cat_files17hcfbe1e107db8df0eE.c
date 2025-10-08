
  fn uu_cat::cat_files::hcfbe1e107db8df0e(arg1: i64, arg2: i64, arg3: *mut i8) -> u64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_178: i8;
    uucore::features::fs::FileInformation::from_file::h1c5b8b34aaabd4d7(&var_178);
    let mut var_c8: i8;
    let mut var_c0: ();
    
    if (var_178 & 1) == 0
    {
        let mut var_170: ();
        memcpy(&var_c0, &var_170, 0x90);
        var_c8 = 1;
    }
    else
    {
        var_c8 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hc263a3b15372b709(&var_178);
    }
    
    uu_cat::LineNumber::new::he2164f0c2cf54569(&var_178);
    let var_140: i16 = 1;
    let var_13e: i8 = 0;
    let mut var_210: i64 = 0;
    let var_208: i64 = 8;
    let var_200: i64 = 0;
    let mut var_248: *mut c_void;
    let mut var_1f8: i64;
    let mut var_1f0: *mut i8;
    let mut var_1e8: i64;
    let mut var_1d8: i128;
    let mut var_1b0: *mut i64;
    
    if arg2 != 0
    {
        let mut i: i64 = 0;
        let mut var_230: i64;
        
        do
        {
            let r15_2: *mut i8 = *(arg1 + i + 8);
            let r13_1: i64 = *(arg1 + i + 0x10);
            let mut r9_1: *mut i64 = nullptr;
            
            if var_c8 != 0
            {
                r9_1 = &var_c0;
            }
            
            let mut var_190: i64;
            uu_cat::cat_path::h2dae90d146b12434(&var_190, r15_2, r13_1, arg3, &var_178, r9_1);
            
            if var_190 == -0x7ffffffffffffffa
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cat..CatError$GT$$GT$::h698f1a96b81da228(&var_190);
            }
            else
            {
                let var_180: i64;
                let var_1c8_1: i64 = var_180;
                var_1d8 = var_190;
                var_1f8 = 0;
                var_1f0 = r15_2;
                var_1e8 = r13_1;
                let var_1e0_1: i8 = 0;
                var_1b0 = &var_1f8;
                let var_1a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_1a0_1: *mut i128 = &var_1d8;
                let var_198_1: fn(arg1: i64, arg2: *mut i64) -> i64 =
                    _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::hf1b120a760cf5cdb;
                var_248 = &data_4eab28;
                let var_240_1: i64 = 2;
                let var_228_1: i64 = 0;
                let var_238_1: *mut *mut i64 = &var_1b0;
                var_230 = 2;
                let mut var_e0: ();
                core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(&var_e0, &var_248);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc802380a4422d572(&var_210, &var_e0);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::h14d6c146dec8346b(&var_1d8);
            }
            
            i += 0x18;
        } while arg2 * 0x18 != i;
        
        if (*var_140[1] & 1) != 0
        {
            var_248 = &data_4eab48;
            let var_240_2: i64 = 1;
            let var_238_2: i64 = 8;
            var_230 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_248);
        }
    }
    
    let mut result: u64;
    
    if arg2 == 0 || var_200 == 0
    {
        result = 0;
    }
    else
    {
        let mut rax_2: *mut i64;
        let mut rdx_1: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_1b0 = rax_2;
        let var_1a8_2: i64 = rdx_1;
        var_1d8 = &var_1b0;
        *var_1d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h74b3dbe6826d9b3d;
        var_248 = &data_4eab58;
        let var_240_3: i64 = 2;
        let var_228_2: i64 = 0;
        let var_238_3: *mut i128 = &var_1d8;
        let mut var_230_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(&var_1f8, &var_248);
        let r14_1: i64 = var_1f8;
        alloc::str::join_generic_copy::hf9249603796c30e8(&var_1f8, var_208, var_200, var_1f0, 
            var_1e8);
        let var_238_4: i64 = var_1e8;
        var_248 = var_1f8;
        var_230_1 = var_200;
        result = alloc::boxed::Box$LT$T$GT$::new::h8ad1939ef5a5c6bf(&var_248);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4305df3840418334(r14_1, var_1f0);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9e77e8d7d316b011(
        &var_210);
    result
}
