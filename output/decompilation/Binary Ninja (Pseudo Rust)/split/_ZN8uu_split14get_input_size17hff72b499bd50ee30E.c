
  fn uu_split::get_input_size::hff72b499bd50ee30(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64) -> i64

{
    let mut r14: i64 = arg5;
    let mut var_118: *mut c_void = arg1;
    
    if arg4 == 0
    {
        *arg1.byte_offset(0x10);
        let mut rax_1: i64;
        rax_1 = uucore::features::fs::sane_blksize::sane_blksize_from_path::haa29efd65464ae5d(
            *arg1.byte_offset(8));
        r14 = rax_1;
    }
    
    let mut var_100: *mut c_void = arg2;
    let var_f8: i64 = r14;
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = std::io::default_read_to_end::h83389f9d77e2b24f(&var_100, arg3, 0, arg4);
    
    if rax_2 == 0
    {
        if r14 > rdx
        {
            return 0;
        }
        
        let mut var_110: *mut *mut c_void;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*arg1.byte_offset(8), *arg1.byte_offset(0x10), "-xmulti-character separator mult…", 1)
            == 0
        {
            std::fs::metadata::h341dbab23461c7c8(&var_100, arg1);
            
            if var_100 != 2
            {
                let var_b0: i64;
                
                if var_b0 >= rdx
                {
                    return 0;
                }
                
                let rax_6: *mut c_void = var_118;
                *rax_6.byte_offset(0x10);
                std::fs::File::open::hf05dc8e7da5fafe3(&var_100, *rax_6.byte_offset(8));
                
                if var_100 == 0
                {
                    let mut var_11c: i32 = *var_100[4];
                    let mut rax_8: i64;
                    let mut rdx_6: i64;
                    rax_8 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        &var_11c, 1, 0);
                    
                    if rax_8 == 0
                    {
                        if rdx_6 != 0
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(
                                &var_11c);
                            return 0;
                        }
                        
                        var_110 = &var_118;
                        let var_108_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
                        var_100 = &data_5483c0;
                        let var_f8_2: i64 = 2;
                        let var_e0_2: i64 = 0;
                        let var_f0_2: *mut *mut *mut c_void = &var_110;
                        let var_e8_2: i64 = 1;
                        let mut var_50: ();
                        core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_50, 0, 
                            &var_100);
                        std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_50);
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(&var_11c);
                }
            }
        }
        else
        {
            var_110 = &var_118;
            let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
            var_100 = &data_5483a0;
            let var_f8_1: i64 = 2;
            let var_e0_1: i64 = 0;
            let var_f0_1: *mut *mut *mut c_void = &var_110;
            let var_e8_1: i64 = 1;
            let mut var_38: ();
            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_38, 0, &var_100);
            std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_38);
        }
    }
    
    1
}
