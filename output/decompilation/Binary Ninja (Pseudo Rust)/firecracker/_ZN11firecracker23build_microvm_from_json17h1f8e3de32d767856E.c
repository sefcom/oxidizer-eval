
  fn firecracker::build_microvm_from_json::h1f8e3de32d767856(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: *mut i64, arg5: fn(arg1: *mut i32, arg2: *mut c_void, arg3: *mut c_void) -> *mut i32, arg6: i8, arg7: i64, arg8: *mut i8, arg9: i64) -> i64

{
    let mut var_320: *mut *mut [i8; 0x104];
    vmm::resources::VmResources::from_json::h0181225b5ca3964a(&var_320, arg4[1], arg4[2], arg5, 
        arg7, arg8, arg9);
    let r12: *mut *mut [i8; 0x104] = var_320;
    let mut var_318: i8;
    let mut var_317: i128;
    let var_307: i128;
    let var_2f7: i128;
    
    if -(r12) != -0x8000000000000000
    {
        let var_378_1: i128 = var_2f7;
        let mut var_2d8: ();
        let mut var_160: ();
        memcpy(&var_160, &var_2d8, 0x130);
        let var_19f_1: i128 = var_317;
        let var_18f_1: i128 = var_307;
        let mut var_17f_1: i128 = var_2f7;
        var_17f_1 = var_2f7;
        let mut var_1a8: *mut *mut [i8; 0x104] = r12;
        let var_1a0_1: i8 = var_318;
        let r9: i8;
        let var_38_1: i8 = r9;
        let var_37_1: i8 = arg6;
        vmm::builder::build_and_boot_microvm::hc7426a70ff4a868a(&var_320, arg5, &var_1a8, arg3, 
            arg2);
        let rax_6: i8 = var_320;
        
        if rax_6 != 0x1b
        {
            let rcx_3: i32 = *var_320[1];
            *arg1.byte_offset(0xc) = *var_320[4];
            *arg1.byte_offset(9) = rcx_3;
            *arg1.byte_offset(0x28) = var_307;
            *arg1.byte_offset(0x38) = var_2f7;
            *arg1.byte_offset(0x18) = var_317;
            arg1[1] = rax_6;
            arg1[2] = var_318;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$vmm..resources..VmResources$GT$::h68977f9def7baa44(
                &var_1a8);
        }
        else
        {
            let r12_1: i64 = var_318;
            
            if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
            {
                var_320 = &data_7a4138;
                var_318 = 1;
                *var_317[7] = 8;
                var_317 = {0};
                let rax_8: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a4148);
                let mut var_348: *const i8 = "firecrackerPath to unix domain s…";
                let var_340_1: i64 = 0xb;
                let var_338_1: *const i8 = "firecrackerPath to unix domain s…";
                let var_330_1: i64 = 0xb;
                let var_328_1: i64 = rax_8;
                log::__private_api::log_impl::h05439a06b798919c(&var_320, 3, &var_348);
            }
            
            memcpy(arg1, &var_1a8, 0x178);
            arg1[0x2f] = r12_1;
        }
    }
    else
    {
        arg1[7] = *var_307[0xf];
        arg1[8] = *var_2f7[0xf];
        *arg1.byte_offset(0x29) = var_307;
        *arg1.byte_offset(0x19) = var_317;
        *arg1.byte_offset(9) = var_318;
        arg1[1] = 0x1b;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(
        arg5);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(arg4)
}
