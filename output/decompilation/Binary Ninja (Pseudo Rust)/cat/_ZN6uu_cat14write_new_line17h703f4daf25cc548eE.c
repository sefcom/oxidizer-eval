
  fn uu_cat::write_new_line::h703f4daf25cc548e(arg1: *mut *mut *mut [i8; 0x92], arg2: *mut i64, arg3: *mut i8, arg4: *mut i64, arg5: i8) -> *mut *mut [i8; 0x92]

{
    let mut result: *mut *mut [i8; 0x92];
    let mut result_1: *mut *mut [i8; 0x92];
    
    if *arg4.byte_offset(9) == 0
    {
        result = arg4[1];
        
        if result == 0 || *arg3 == 0 || *arg4.byte_offset(0xa) == 0
        {
            *arg4.byte_offset(0xa) = 1;
            
            if result == 0 || arg3[4] != 2
            {
                goto 'label_4b0aa5;
            }
            
            let mut var_70: *mut i64 = arg4;
            let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            result_1 = 2;
            let var_98: i64 = 0;
            let var_90_1: i64 = 6;
            let var_88_1: i64 = 0;
            let var_80_1: i64 = 0x20;
            let var_78_1: i8 = 3;
            let mut var_60: *mut c_void = &data_518728;
            let var_58_1: i64 = 2;
            let var_40_1: *mut *mut *mut [i8; 0x92] = &result_1;
            let var_38_1: i64 = 1;
            let var_50_1: *mut *mut i64 = &var_70;
            let var_48_1: i64 = 1;
            result = std::io::Write::write_fmt::h6cba046ccfa3b685(arg2, &var_60);
            
            if result != 0
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = result;
            }
            else
            {
                *arg4 += 1;
                'label_4b0aa5:
                let mut rcx_1: u64;
                let mut rdx_1: *const i8;
                let mut rdi_3: *mut i64;
                let mut r8_1: i8;
                
                if arg3[2] == 0
                {
                    r8_1 = arg5;
                    rdx_1 = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
                    rdi_3 = &result_1;
                    rcx_1 = 1;
                }
                else
                {
                    r8_1 = arg5;
                    rdx_1 = "$\n^M^I^?unknown filetype: Is a …";
                    rdi_3 = &result_1;
                    rcx_1 = 2;
                }
                
                uu_cat::write_end_of_line::h4ed837c9dff89e3f(rdi_3, arg2, rdx_1, rcx_1, r8_1);
                result = result_1;
                
                if result != -0x7ffffffffffffffa
                {
                    let var_a0: i128;
                    *arg1.byte_offset(8) = var_a0;
                    *arg1 = result;
                }
                else
                {
                    *arg1 = -0x8000000000000006;
                }
            }
        }
        else
        {
            *arg1 = -0x8000000000000006;
        }
    }
    else
    {
        let mut rcx: u64;
        let mut rdx: *const i8;
        let mut rdi_1: *mut i64;
        let mut r8: i8;
        let mut r15_1: *mut i64;
        
        if arg3[2] == 0
        {
            r15_1 = arg2;
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg2, "\r\n-src/uu/cat/src/cat.rs\t$\n^…", 1);
            
            if result == 0
            {
                *arg4.byte_offset(9) = 0;
                r8 = arg5;
                rdx = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
                rdi_1 = &result_1;
                rcx = 1;
                'label_4b0b04:
                result = uu_cat::write_end_of_line::h4ed837c9dff89e3f(rdi_1, r15_1, rdx, rcx, r8);
                
                if result_1 == -0x7ffffffffffffffa
                {
                    *arg1 = -0x8000000000000006;
                }
                else
                {
                    let result_2: *mut *mut [i8; 0x92];
                    result = result_2;
                    arg1[2] = result;
                    *arg1 = result_1;
                }
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = result;
            }
        }
        else
        {
            r15_1 = arg2;
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg2, "^M^I^?unknown filetype: Is a dir…", 2);
            
            if result == 0
            {
                *arg4.byte_offset(9) = 0;
                r8 = arg5;
                rdx = "$\n^M^I^?unknown filetype: Is a …";
                rdi_1 = &result_1;
                rcx = 2;
                goto 'label_4b0b04;
            }
            
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
    }
    result
}
