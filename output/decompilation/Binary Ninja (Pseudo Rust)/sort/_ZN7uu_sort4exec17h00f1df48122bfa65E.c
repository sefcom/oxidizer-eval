
  fn uu_sort::exec::h00f1df48122bfa65(arg1: *mut i64, arg2: i64, arg3: *mut c_void, arg4: *mut i64, arg5: *mut c_void) -> *mut c_void

{
    let mut var_d8: i128;
    let mut var_c8: i128;
    
    if *arg3.byte_offset(0x81) != 0
    {
        let mut rax: i64;
        
        if *arg4 == -0x8000000000000000
        {
            rax = 0;
        }
        else
        {
            rax = arg4[1];
        }
        
        uu_sort::merge::merge::h37f56e954177d019(&var_d8, arg1, arg2, arg3, rax, arg4[2], arg5);
        let rdx_1: i64 = var_d8;
        let rax_3: *mut c_void = *var_d8[8];
        
        if rdx_1 != 3
        {
            let var_80: i64;
            let var_20_1: i64 = var_80;
            let var_90: i128;
            let var_30_1: i128 = var_90;
            let var_a0: i128;
            let var_40_1: i128 = var_a0;
            let var_b0: i128;
            let var_50_1: i128 = var_b0;
            let var_60_1: i128 = var_c8;
            let mut var_78: i64 = rdx_1;
            let var_70_1: *mut c_void = rax_3;
            let var_68_1: i64 = var_c8;
            let var_c8_1: i128 = *arg4.byte_offset(0x10);
            var_d8 = *arg4;
            return uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(&var_78, arg3, &var_d8);
        }
        
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg4);
        return rax_3;
    }
    
    let mut var_f0: *mut i64;
    
    if *arg3.byte_offset(0x85) == 0
    {
        var_f0 = arg1;
        let var_e8_1: *mut c_void = &arg1[arg2 * 3];
        let var_c8_2: i128 = *arg4.byte_offset(0x10);
        var_d8 = *arg4;
        return uu_sort::ext_sort::ext_sort::hc251c769f969c18a(&var_f0, arg3, &var_d8, arg5);
    }
    
    let mut r14_1: *mut c_void;
    
    if arg2 <= 1
    {
        if arg2 != 1
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let mut rax_7: *mut c_void;
        let mut rdx_6: *mut *mut c_void;
        rax_7 = uu_sort::check::check::h20d514b4388b3f7e(arg1[1], arg1[2], arg3);
        r14_1 = rax_7;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_f0, 
            "only one file allowed with -cinf…", 0x1d);
        let var_e0: i64;
        var_c8 = var_e0;
        var_d8 = var_f0;
        *var_c8[8] = 2;
        r14_1 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg4);
    r14_1
}
