
  fn uu_ptx::get_reference::hde200eae24bcb508(arg1: *mut i128, arg2: i8, arg3: i8, arg4: *mut c_void, arg5: *mut i8, arg6: *mut c_void, arg7: *mut c_void, arg8: *mut c_void)

{
    let mut var_a0: *mut c_void;
    
    if arg2 != 0
    {
        let zmm0: i128 = *arg4.byte_offset(0x20);
        let mut var_48: i64 = 0;
        let var_40_1: i128 = zmm0;
        let var_30_1: i8 = 0;
        let mut var_70: i64 = *arg4.byte_offset(0x38) + 1;
        let mut var_68: *mut i64 = &var_48;
        let var_60_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_58_1: *mut i64 = &var_70;
        let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        var_a0 = &data_6eddd0;
        let var_98_1: i64 = 2;
        let var_80_1: i64 = 0;
        let var_90_1: *mut *mut i64 = &var_68;
        let var_88_1: i64 = 2;
        core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(arg1, &var_a0);
    }
    else if arg3 == 0
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = 1;
        arg1[1] = 0;
    }
    else
    {
        regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&var_a0, arg7, arg8, arg5, arg6);
        let mut r15_1: *mut i128 = var_a0;
        let mut r12_1: *mut c_void = r15_1;
        let var_90: *mut i128;
        
        if r15_1 != 0
        {
            r15_1 = var_90;
            let var_88: *mut c_void;
            r12_1 = var_88;
        }
        
        let mut rax_3: *mut c_void;
        let mut rdx_2: u64;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r15_1, r12_1, arg5, arg6);
        
        if rax_3 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg5, arg6, r15_1, r12_1);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_a0, 
            rax_3, rdx_2);
        arg1[1] = var_90;
        *arg1 = var_a0;
    }
}
