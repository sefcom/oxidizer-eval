
  fn uu_stat::Stater::find_mount_point::hb64e131c06b92eb6(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let mut var_48: u64;
    std::fs::canonicalize::h666f0a788dd30df7(&var_48, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3692ed4e621a968b(arg3));
    let r14: u64 = var_48;
    
    if -(r14) == -0x8000000000000000
    {
        let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2e8638ca9d3a432a(&var_48);
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_40: *mut i8;
    
    if *arg2.byte_offset(0x48) == -0x8000000000000000
    {
        'label_47669b:
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut r12_1: *mut c_void = *arg2.byte_offset(0x50);
        let mut rbp_1: i64 = *arg2.byte_offset(0x58) * 0x18;
        let var_38: i64;
        let mut i: i8;
        
        do
        {
            if rbp_1 == 0
            {
                goto 'label_47669b;
            }
            
            i = std::path::Path::starts_with::h81555d14791e5ff7(var_40, var_38, r12_1);
            r12_1 += 0x18;
            rbp_1 -= 0x18;
        } while i == 0;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_48, r12_1.byte_offset(-0x18));
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf5e02e6973b3fafa(r14, var_40)
}
