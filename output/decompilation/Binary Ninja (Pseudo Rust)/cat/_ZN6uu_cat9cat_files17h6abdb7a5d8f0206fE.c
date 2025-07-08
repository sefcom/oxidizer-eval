
  fn uu_cat::cat_files::h6abdb7a5d8f0206f(arg1: i64, arg2: i64, arg3: *mut i32) -> *mut i128

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_220: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_198: *mut c_void;
    uucore::features::fs::FileInformation::from_file::h44cb74378482ad19(&var_198);
    let mut var_190: i64;
    let mut var_c8: *mut i64;
    let mut var_c0: ();
    
    if var_198 == 0
    {
        memcpy(&var_c0, &var_190, 0x90);
        var_c8 = 1;
    }
    else
    {
        var_c8 = nullptr;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h88aced0ed65ad377(&var_198);
    }
    
    let mut var_1e8: i64 = 1;
    let var_1e0: i16 = 1;
    let var_1de: i8 = 0;
    let mut var_200: i64 = 0;
    let var_1f8: *mut *mut [i8; 0x52] = 8;
    let var_1f0: i64 = 0;
    let mut var_1d8: i64 = arg1;
    let var_1d0: i64 = arg1 + arg2 * 0x18;
    let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&var_1d8);
    let mut var_248: *mut *mut i64;
    let mut var_210: u64;
    
    if i != 0
    {
        let mut var_180: i64;
        
        do
        {
            let r15_1: i64 = *i.byte_offset(8);
            let r12_1: u64 = *i.byte_offset(0x10);
            let mut r9_1: *mut i64 = var_c8;
            
            if r9_1 != 0
            {
                r9_1 = &var_c0;
            }
            
            let mut var_1b0: i64;
            uu_cat::cat_path::h3f1de2b8bdfd86c8(&var_1b0, r15_1, r12_1, arg3, &var_1e8, r9_1);
            
            if var_1b0 != -0x7ffffffffffffffa
            {
                let var_1a0: i64;
                let var_1b8_1: i64 = var_1a0;
                let mut var_1c8: i128 = var_1b0;
                var_220 = nullptr;
                let var_218_1: i64 = r15_1;
                var_210 = r12_1;
                let var_208_1: i8 = 0;
                var_248 = &var_220;
                let var_240_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_238_1: *mut i128 = &var_1c8;
                let var_230_1: fn(arg1: i64, arg2: *mut c_void) -> i64 =
                    _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::h57a85781e439a5e8;
                var_198 = &data_5185e8;
                var_190 = 2;
                let var_178_1: i64 = 0;
                let var_188_1: *mut *mut *mut i64 = &var_248;
                var_180 = 2;
                let mut var_e0: ();
                core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&var_e0, &var_198);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf1bb32e3c1651b49(&var_200, &var_e0);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::hfbd18e323f720f0a(&var_1c8);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&var_1d8);
        } while i != 0;
        
        if *var_1e0[1] != 0
        {
            var_198 = &data_518608;
            var_190 = 1;
            let var_188_2: i64 = 8;
            var_180 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&var_198);
        }
    }
    
    let mut result: *mut i128;
    
    if var_1f0 == 0
    {
        result = nullptr;
    }
    else
    {
        let mut rax_3: *mut i64;
        let mut rdx_1: i64;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_220 = rax_3;
        let var_218_2: i64 = rdx_1;
        var_248 = &var_220;
        let var_240_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59ee80d913007d2d;
        var_198 = &data_518618;
        var_190 = 2;
        let var_178_2: i64 = 0;
        let var_188_3: *mut *mut *mut i64 = &var_248;
        let mut var_180_1: i64 = 1;
        let mut var_f8: i128;
        core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&var_f8, &var_198);
        var_248 = var_f8;
        let var_e8: i64;
        let var_238_2: i64 = var_e8;
        alloc::str::join_generic_copy::h1c39acc797b18d82(&var_220, var_1f8, var_1f0, var_240_2, 
            var_e8);
        let var_188_4: u64 = var_210;
        var_198 = var_220;
        var_180_1 = var_1f0;
        result = alloc::boxed::Box$LT$T$GT$::new::hb263d7b6b0ccd5df(&var_198);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3711f10ec472aa2e(&var_248);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h407b6df26ef1b321(
        &var_200);
    result
}
