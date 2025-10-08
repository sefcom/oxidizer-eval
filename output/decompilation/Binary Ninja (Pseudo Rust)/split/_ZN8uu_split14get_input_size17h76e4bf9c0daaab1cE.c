
  fn uu_split::get_input_size::h76e4bf9c0daaab1c(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i64, arg4: i8, arg5: i64) -> i64

{
    let mut r14: i64 = arg5;
    let mut var_118: *mut c_void = arg1;
    
    if (arg4 & 1) == 0
    {
        r14 = uucore::features::fs::sane_blksize::sane_blksize_from_path::h50cbcdc20fa4ef11(
            *arg1.byte_offset(8));
    }
    
    let mut var_e8: *mut c_void = arg2;
    let var_e0: i64 = r14;
    let var_d8: i64 = r14;
    let mut rax_2: i8;
    let mut rdx: i64;
    rax_2 = std::io::default_read_to_end::hb855d02ac9073fed(&var_e8, arg3);
    
    if (rax_2 & 1) == 0
    {
        if r14 > rdx
        {
            return 0;
        }
        
        let mut var_110: *mut *mut c_void;
        let mut var_100: *mut *mut c_void;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(*arg1.byte_offset(8), *arg1.byte_offset(0x10), "-rlsrc/uu/split/src/strategy.rsb…", 1)
            == 0
        {
            std::fs::metadata::h87fecb55dab6d3cc(&var_e8, arg1);
            
            if var_e8 != 2
            {
                let var_98: i64;
                
                if var_98 >= rdx
                {
                    return 0;
                }
                
                let rax_7: *mut c_void = var_118;
                *rax_7.byte_offset(0x10);
                std::fs::File::open::h02f17a72580f2f54(&var_e8, *rax_7.byte_offset(8));
                
                if (var_e8 & 1) == 0
                {
                    var_110 = *var_e8[4];
                    let mut rax_9: i8;
                    let mut rdx_6: *mut c_void;
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        &var_110, 1, 0);
                    
                    if (rax_9 & 1) != 0
                    {
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(&var_110);
                    }
                    else
                    {
                        if rdx_6 != 0
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(
                                &var_110);
                            return 0;
                        }
                        
                        var_100 = &var_118;
                        let var_f8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfe3dd68d76795a20;
                        var_e8 = &data_50aee8;
                        let var_e0_2: i64 = 2;
                        let var_c8_2: i64 = 0;
                        let var_d8_2: *mut *mut *mut c_void = &var_100;
                        let var_d0_2: i64 = 1;
                        let mut var_38: ();
                        core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_38, 0, 
                            &var_e8);
                        std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                            alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_38), 
                            &data_50ad88);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(&var_110);
                    }
                }
            }
        }
        else
        {
            var_110 = &var_118;
            let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfe3dd68d76795a20;
            var_e8 = &data_50aec8;
            let var_e0_1: i64 = 2;
            let var_c8_1: i64 = 0;
            let var_d8_1: *mut *mut *mut c_void = &var_110;
            let var_d0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_100, 0, &var_e8);
            std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_100), &data_50ad88);
        }
    }
    
    1
}
