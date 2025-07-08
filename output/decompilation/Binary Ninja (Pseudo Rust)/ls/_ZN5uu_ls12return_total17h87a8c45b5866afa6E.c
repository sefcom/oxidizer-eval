
  fn uu_ls::return_total::h87a8c45b5866afa6(arg1: *mut i64, arg2: *mut *mut c_void, arg3: i64, arg4: *mut c_void, arg5: i64) -> *mut i128

{
    let mut var_90: *mut *mut c_void = arg2;
    let var_88: *mut c_void = (arg3 * 0x130).byte_offset(arg2);
    let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_90);
    let mut var_b0: *mut i32;
    let mut r12: i64;
    
    if i == 0
    {
        r12 = 0;
    }
    else
    {
        let r13_1: i64 = *arg4.byte_offset(0xd8);
        r12 = 0;
        let rbp_1: i8 = *arg4.byte_offset(0xf1);
        
        do
        {
            let mut rax_2: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(i);
            var_b0 = rax_2;
            
            if rax_2 != 0
            {
                rax_2 = &var_b0;
            }
            
            r12 += core::option::Option$LT$T$GT$::map_or::h56c943784bd347cb(rax_2, r13_1, rbp_1);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_90);
        } while i != 0;
    }
    
    let mut result: *mut i128;
    let mut rdx_1: i64;
    
    if *arg4.byte_offset(0xee) != 0
    {
        result = uu_ls::dired::indent::h541a64321517b8c5(arg5);
    }
    
    if *arg4.byte_offset(0xee) == 0 || result == 0
    {
        let mut var_48: ();
        uu_ls::display_size::hba9b1cbdd7c6b199(&var_48, r12, *arg4.byte_offset(0xf1));
        var_b0 = &var_48;
        let var_a8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_a0_1: *mut c_void = arg4.byte_offset(0xfa);
        let var_98_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_90 = &data_6125c8;
        let var_88_1: i64 = 2;
        let var_70_1: i64 = 0;
        let var_80_1: *mut *mut i32 = &var_b0;
        let var_78_1: i64 = 2;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_60, &var_90);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_48);
        let result_1: *mut i128;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x8000000000000000;
    }
    
    result
}
