
  fn uu_od::multifilereader::MultifileReader::next_file::h88105f385025e3a3(arg1: *mut c_void) -> i64

{
    let mut result: i64;
    
    if *arg1.byte_offset(0x10) != 0
    {
        loop
        {
            let mut var_60: i64;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h89a38a1f2036b4c0(&var_60, arg1);
            let rax_1: i64 = var_60;
            let mut r15_1: u64;
            let var_58: i64;
            
            if rax_1 != 0
            {
                if rax_1 != 1
                {
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
                    *arg1.byte_offset(0x18) = var_58;
                    return result;
                }
                
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                r15_1 = alloc::boxed::Box$LT$T$GT$::new::h6356c2b75d86a9fc(0);
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
            }
            else
            {
                let mut var_e0: i8;
                std::fs::File::open::hdb0c190bcf23afb8(&var_e0, var_58);
                
                if (var_e0 & 1) == 0
                {
                    let var_dc: i32;
                    r15_1 = alloc::boxed::Box$LT$T$GT$::new::h6356c2b75d86a9fc(var_dc);
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
                }
                else
                {
                    let var_d8: i64;
                    let mut var_e8: i64 = var_d8;
                    let mut rax_3: i64;
                    let mut rdx_2: i64;
                    rax_3 = uucore::util_name::h074417a1e6395129();
                    let mut var_d0: i64 = rax_3;
                    let var_c8_1: i64 = rdx_2;
                    let mut var_80: *mut i64 = &var_d0;
                    let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    let mut var_b0: *mut c_void = &data_502438;
                    let var_a8_1: i64 = 2;
                    let var_90_1: i64 = 0;
                    let var_a0_1: *mut *mut i64 = &var_80;
                    let var_98_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    var_d0 = 0;
                    let var_c8_2: i64 = var_58;
                    let var_50: i64;
                    let var_c0_1: i64 = var_50;
                    let var_b8_1: i8 = 0;
                    var_80 = &var_d0;
                    let var_78_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    let var_70_1: *mut i64 = &var_e8;
                    let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_b0 = &data_502458;
                    let var_a8_2: i64 = 3;
                    let var_90_2: i64 = 0;
                    let var_a0_2: *mut *mut i64 = &var_80;
                    let var_98_2: i64 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    *arg1.byte_offset(0x28) = 1;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h719d6e145fb1b245(
                        var_e8);
                    
                    if *arg1.byte_offset(0x10) == 0
                    {
                        break;
                    }
                    
                    continue;
                }
            }
            *arg1.byte_offset(0x18) = r15_1;
            *arg1.byte_offset(0x20) = &data_5024a0;
            return result;
        }
    }
    
    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
    *arg1.byte_offset(0x18) = 0;
    result
}
