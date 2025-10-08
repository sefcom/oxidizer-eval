
  fn fd::ensure_search_pattern_is_not_a_path::ha1d173ccdd2458ae(arg1: *mut c_void) -> u64

{
    if *arg1.byte_offset(0x1ee) != 0
    {
        return 0;
    }
    
    let rbx: *mut i8 = *arg1.byte_offset(0x90);
    let r14: *mut c_void = *arg1.byte_offset(0x98);
    
    if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
        rbx, r14) != 0
    {
        let mut rax_2: i8;
        let mut rdx_1: u64;
        rax_2 = std::path::Path::is_dir::h02edbc48c38d7d9e(rbx, r14);
        
        if rax_2 != 0
        {
            let mut var_88: *mut c_void = arg1.byte_offset(0x88);
            let mut var_80: *mut *mut c_void = &var_88;
            let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
            let var_70_1: *const i8 = "/";
            let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            let mut var_60: *mut *mut [i8; 0xc6] = &data_802868;
            let var_58_1: i64 = 6;
            let var_40_1: *mut c_void = &data_47b7e0;
            let var_38_1: i64 = 5;
            let var_50_1: *mut *mut *mut c_void = &var_80;
            let var_48_1: i64 = 2;
            let mut var_30: ();
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_1, 
                &var_60);
            return anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
        }
    }
    
    0
}
