
  fn just::execution_context::ExecutionContext::tempdir::h39cbfc80d5808fca(arg1: *mut i8, arg2: *mut i64, arg3: *mut c_void) -> *mut c_void

{
    let var_98: i64 = 6;
    let var_a8: i64 = 1;
    let var_a0: i64 = 0;
    let var_90: i16 = 0;
    let mut var_c0: i32 = 0;
    let var_b8: *const i8 = "just-cmdcmd.exepowershellpowersh…";
    let var_b0: i64 = 5;
    let rcx: *mut c_void = *arg2;
    let mut var_108: i128;
    let var_f8: i8;
    let mut var_88: i128;
    let mut rcx_2: *mut c_void;
    
    if !(0 + -(*rcx.byte_offset(0xf0)))
    {
        rcx_2 = rcx.byte_offset(0xf0);
        'label_6675e2:
        let rax_1: *mut c_void = arg2[3];
        std::path::Path::join::h509d33a3bbf89c2c(&var_88, *rax_1.byte_offset(0x20), 
            *rax_1.byte_offset(0x28), rcx_2);
        tempfile::Builder::tempdir_in::h93ae886201734d83(&var_108, &var_c0, &var_88);
        
        if var_f8 == 2
        {
            return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
        }
    }
    else
    {
        let rcx_1: *mut c_void = arg2[2];
        
        if *rcx_1.byte_offset(0x168) != -0x8000000000000000
        {
            rcx_2 = rcx_1.byte_offset(0x168);
            goto 'label_6675e2;
        }
        
        let mut var_d8: i64;
        dirs::runtime_dir::h5ee1631cece24aad(&var_d8);
        
        if var_d8 != -0x8000000000000000
        {
            let mut var_f0: i128;
            let var_d0: i64;
            let var_c8: u64;
            std::path::Path::join::h1eac0ae5e7efa361(&var_f0, var_d0, var_c8, 
                "just\x1b[1mCYAN'{{'[");
            let rax_2: i64 = std::fs::create_dir_all::hed07f7fced9e770a(&var_f0);
            let var_e0: u64;
            
            if rax_2 != 0
            {
                just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h7728784de9bd9dc5(&var_88, *var_f0[8], var_e0, rax_2);
                let rax_3: i8 = var_88;
                let var_28: i64;
                *arg1.byte_offset(0x60) = var_28;
                let var_37: i128;
                *arg1.byte_offset(0x51) = var_37;
                let var_47: i128;
                *arg1.byte_offset(0x41) = var_47;
                let var_57: i128;
                *arg1.byte_offset(0x31) = var_57;
                let var_67: i128;
                *arg1.byte_offset(0x21) = var_67;
                let var_78: i64;
                *arg1.byte_offset(0x11) = *var_78[1];
                *arg1.byte_offset(1) = var_88;
                *arg1 = rax_3;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_f0);
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                    &var_d8);
            }
            
            let var_78_1: u64 = var_e0;
            var_88 = var_f0;
            tempfile::Builder::tempdir_in::h93ae886201734d83(&var_108, &var_c0, &var_88);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_d8);
            
            if var_f8 == 2
            {
                return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
            }
        }
        else
        {
            tempfile::Builder::tempdir::h15970eab596e1a6d(&var_108, &var_c0);
            
            if var_f8 == 2
            {
                return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
            }
        }
    }
    let result: *mut c_void = var_f8;
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(8) = var_108;
    *arg1 = 0x38;
    result
}
