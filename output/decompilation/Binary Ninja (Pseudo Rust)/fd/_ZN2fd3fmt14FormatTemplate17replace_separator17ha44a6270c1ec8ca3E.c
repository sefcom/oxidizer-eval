
  fn fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64)

{
    if arg4 == 0
    {
        *arg1.byte_offset(8) = arg2;
        arg1[1] = arg3;
        *arg1 = -0x8000000000000000;
        return;
    }
    
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h48a23d67ea2efec0(arg3, 1, 1);
    let mut var_148: i64 = rax_1;
    let var_140_1: i64 = rdx;
    let var_138_1: i64 = 0;
    let mut var_128: i128;
    std::path::Path::components::hd0346d362206f2e9(&var_128, arg2, arg3);
    let mut var_f8: i128;
    let var_40_1: i128 = var_f8;
    let mut var_108: i128;
    let var_50_1: i128 = var_108;
    let mut var_118: i128;
    let var_60_1: i128 = var_118;
    let mut var_70: i128 = var_128;
    let mut rax_2: i8 = 0xb;
    
    loop
    {
        let mut var_a8: i8 = 0xb;
        
        if rax_2 != 0xb
        {
            let var_78: i64;
            var_f8 = var_78;
            let var_87: i128;
            var_108 = var_87;
            let var_97: i128;
            var_118 = var_97;
            let var_a7: i128;
            var_128 = var_a7;
            var_128 = rax_2;
            
            if rax_2 == 0xa
            {
                break;
            }
        }
        else
        {
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_128, &var_70);
            
            if var_128 == 0xa
            {
                break;
            }
        }
        
        let mut var_e8: i128 = var_128;
        let var_b8_1: i64 = var_f8;
        let rax_5: u64 = var_e8;
        let mut rcx_3: i64 = rax_5 - 5;
        
        if rax_5 - 6 >= 4
        {
            rcx_3 = 0;
        }
        
        if rcx_3 == 0
        {
            let mut rbx_2: i64;
            let mut r13_1: i64;
            
            if rax_5 != 4
            {
                let mut rax_7: i64;
                let mut rdx_9: i64;
                rax_7 = std::path::Component::as_os_str::hf9025a90ab753f63(&var_e8);
                rbx_2 = rax_7;
                r13_1 = rdx_9;
            }
            else
            {
                let r14_1: i64 = *var_e8[8];
                rbx_2 = *var_118[8];
                r13_1 = var_108;
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, r14_1, var_118);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
            }
            
            std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, rbx_2, r13_1);
        }
        else
        {
            if rcx_3 != 1
            {
                let mut rax_6: i64;
                let mut rdx_4: i64;
                rax_6 = std::path::Component::as_os_str::hf9025a90ab753f63(&var_e8);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, rax_6, rdx_4);
                core::option::Option$LT$T$GT$::get_or_insert_with::h7382d7627330a388(&var_a8, 
                    &var_70);
            }
            
            if rcx_3 == 1 || var_a8 != 0xa
            {
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
            }
        }
        
        rax_2 = var_a8;
    }
    
    arg1[1] = var_138_1;
    *arg1 = var_148;
}
