
  fn uu_od::multifilereader::MultifileReader::next_file::h7ce1d576af53818d(arg1: *mut c_void) -> *mut *mut c_void

{
    let mut result: *mut *mut c_void;
    
    if *arg1.byte_offset(0x10) != 0
    {
        loop
        {
            let mut var_98: i64;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h5ed5aa81710c39da(&var_98, arg1, 0);
            let rax_1: i64 = var_98;
            let mut var_c8: *mut c_void;
            let var_90: i64;
            let var_88: i64;
            
            if rax_1 != 0
            {
                if rax_1 != 1
                {
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
                    *arg1.byte_offset(0x18) = var_90;
                    *arg1.byte_offset(0x20) = var_88;
                    return result;
                }
                
                std::io::stdio::stdin::h7215cc131abb55d8();
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hdd333a46d728f0dc(
                    &var_c8, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                let rax_4: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h76e6865e403783a0(&var_c8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
                *arg1.byte_offset(0x18) = rax_4;
                result = &data_543218;
            }
            else
            {
                let mut var_80: i32;
                std::fs::File::open::h35a119a0b35fa654(&var_80, var_90);
                
                if var_80 == 0
                {
                    let var_7c: i32;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha0adff11cdf1efa4(&var_c8, 0x2000, var_7c);
                    let rax_5: *mut i128 =
                        alloc::boxed::Box$LT$T$GT$::new::h22131294aa53784e(&var_c8);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
                    *arg1.byte_offset(0x18) = rax_5;
                    result = &data_5431c0;
                }
                else
                {
                    let var_78: i64;
                    let mut var_d0: i64 = var_78;
                    let mut rax_3: i64;
                    let mut rdx_2: i64;
                    rax_3 = uucore::util_name::h60d842bf27b05e82();
                    let mut var_70: i64 = rax_3;
                    let var_68_1: i64 = rdx_2;
                    let mut var_50: *mut i64 = &var_70;
                    let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    var_c8 = &data_543158;
                    let var_c0_1: i64 = 2;
                    let var_a8_1: i64 = 0;
                    let var_b8_1: *mut *mut i64 = &var_50;
                    let var_b0_1: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                    var_70 = 0;
                    let var_68_2: i64 = var_90;
                    let var_60_1: i64 = var_88;
                    let var_58_1: i8 = 0;
                    var_50 = &var_70;
                    let var_48_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    let var_40_1: *mut i64 = &var_d0;
                    let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_c8 = &data_543178;
                    let var_c0_2: i64 = 3;
                    let var_a8_2: i64 = 0;
                    let var_b8_2: *mut *mut i64 = &var_50;
                    let var_b0_2: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                    *arg1.byte_offset(0x28) = 1;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he48ae13975420feb(
                        var_d0);
                    
                    if *arg1.byte_offset(0x10) == 0
                    {
                        break;
                    }
                    
                    continue;
                }
            }
            *arg1.byte_offset(0x20) = result;
            return result;
        }
    }
    
    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
    *arg1.byte_offset(0x18) = 0;
    result
}
