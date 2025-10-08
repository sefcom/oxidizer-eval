
  fn uu_tail::args::parse_args::h43d18e920560b20a(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_3c0: ();
    core::iter::traits::iterator::Iterator::collect::h5984bb7f8993d976(&var_3c0, arg2);
    let mut var_2f8: i64;
    uu_tail::args::uu_app::hd081dd888e6e468a(&var_2f8);
    let mut var_410: i64;
    let var_3b8: *mut c_void;
    let var_3b0: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h73cfdb5bac2ffe65(
        &var_410, var_3b8, var_3b0);
    let mut var_330: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h15062d3cf749cb3f(&var_330, 
        &var_2f8, &var_410);
    let mut var_408_1: u64;
    let mut var_400_1: *mut *mut c_void;
    let mut var_3f8: i128;
    let mut var_3e8: i128;
    let mut var_3d8: i128;
    let var_2f0: u64;
    let var_2e8: *mut *mut c_void;
    let var_2e0: i128;
    let var_2d0: i128;
    let var_2c0: i128;
    let var_2b0: i64;
    
    if !(0 + -(var_330))
    {
        let var_300: i64;
        let var_378_1: i64 = var_300;
        let var_310: i128;
        let var_388_1: i128 = var_310;
        let var_320: i128;
        let var_398_1: i128 = var_320;
        let mut var_3a8: i128 = var_330;
        uu_tail::args::Settings::from::hd259b094c0210bc3(&var_2f8, &var_3a8);
        let rdx_4: i64 = var_2f8;
        
        if rdx_4 != 5
        {
            let var_3c8_1: i64 = var_2b0;
            var_3d8 = var_2c0;
            var_3e8 = var_2d0;
            var_3f8 = var_2e0;
            var_410 = rdx_4;
            var_408_1 = var_2f0;
            var_400_1 = var_2e8;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b2fde32d6c4974f(&var_3a8);
            
            if (0x7fffffffffffffe & var_3b0) != 2
            {
                goto 'label_48ba28;
            }
            
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_2f8, 
                *var_3b8.byte_offset(0x20), *var_3b8.byte_offset(0x28));
            let r12_1: i64 = var_2f8;
            var_3a8 = 0;
            let rax_7: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h5a1cc7adb4f9676f(var_2f0, 
                var_2e8, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_3a8));
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h91db048b2022e0e1(r12_1, 
                var_2f0);
            
            if rax_7 != 0
            {
                goto 'label_48b880;
            }
            
            'label_48bab0:
            *arg1.byte_offset(0x40) = var_3d8;
            let zmm0_3: i128 = var_410;
            *arg1.byte_offset(0x30) = var_3e8;
            *arg1.byte_offset(0x20) = var_3f8;
            *arg1.byte_offset(0x10) = var_400_1;
            *arg1 = zmm0_3;
        }
        else
        {
            arg1[1] = var_2f0;
            arg1[2] = var_2e8;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b2fde32d6c4974f(&var_3a8);
        }
    }
    else
    {
        let var_328: i64;
        var_408_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_328);
        var_400_1 = &data_575d58;
        var_410 = 5;
        
        if (0x7fffffffffffffe & var_3b0) != 2
        {
            'label_48ba28:
            *arg1.byte_offset(0x40) = var_3d8;
            let rax_8: i64 = var_410;
            *arg1.byte_offset(0x30) = var_3e8;
            *arg1.byte_offset(0x20) = var_3f8;
            arg1[2] = var_400_1;
            arg1[3] = var_3f8;
            *arg1 = rax_8;
            arg1[1] = var_408_1;
        }
        else
        {
            'label_48b880:
            let mut rdx_2: *mut c_void = nullptr;
            
            if var_3b0 >= 3
            {
                rdx_2 = var_3b8.byte_offset(0x30);
            }
            
            uu_tail::args::parse_obsolete::h0a35ef9ac867d2bb(&var_2f8, var_3b8.byte_offset(0x18), 
                rdx_2);
            let rdx_3: i64 = var_2f8;
            
            if rdx_3 != 6
            {
                if rdx_3 == 5
                {
                    goto 'label_48bab0;
                }
                
                arg1[9] = var_2b0;
                *arg1.byte_offset(0x38) = var_2c0;
                *arg1.byte_offset(0x28) = var_2d0;
                *arg1.byte_offset(0x18) = var_2e0;
                *arg1 = rdx_3;
                arg1[1] = var_2f0;
                arg1[2] = var_2e8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hf34a3916ba1d9edc(&var_410);
            }
            else
            {
                arg1[1] = var_2f0;
                arg1[2] = var_2e8;
                *arg1 = 5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hf34a3916ba1d9edc(&var_410);
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h868a47c059183b02(&var_3c0)
}
