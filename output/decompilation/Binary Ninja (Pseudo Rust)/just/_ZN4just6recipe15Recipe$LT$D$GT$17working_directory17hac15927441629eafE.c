
  fn just::recipe::Recipe$LT$D$GT$::working_directory::hac15927441629eaf(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void) -> u64

{
    let mut result: u64 =
        just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg2.byte_offset(0xd8), 9);
    
    if result == 0
    {
        let mut var_a0: i128;
        just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_a0, 
            arg3, arg4);
        let rax: i64 = *arg2.byte_offset(0xd8);
        let rcx: i64 = *arg2.byte_offset(0xe0);
        let mut rsi_1: i64 = rax;
        let mut rdx_1: i64;
        rdx_1 = rax != 0;
        
        if rax != 0
        {
            rsi_1 = *arg2.byte_offset(0xe8);
        }
        
        let mut var_88: i64 = rdx_1;
        let var_80_1: i64 = 0;
        let var_78_1: i64 = rax;
        let var_70_1: i64 = rcx;
        let var_68_1: i64 = rdx_1;
        let var_60_1: i64 = 0;
        let var_58_1: i64 = rax;
        let var_50_1: i64 = rcx;
        let var_48_1: i64 = rsi_1;
        
        loop
        {
            let rax_1: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_88);
            let result_1: u64;
            
            if rax_1 == 0
            {
                result = result_1;
                arg1[2] = result;
                *arg1 = var_a0;
                break;
            }
            
            if *rax_1 == -0x7fffffffffffffec
            {
                let mut var_40: i128;
                std::path::Path::join::h509d33a3bbf89c2c(&var_40, *var_a0[8], result_1, &rax_1[1]);
                let var_30: i64;
                arg1[2] = var_30;
                *arg1 = var_40;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                    &var_a0);
            }
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    result
}
