
  fn uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut var_b8: i32 = 0;
    let mut result_1: i64 = 0;
    let var_78: i128 = arg2[1];
    let mut var_88: i128 = *arg2;
    
    for let mut i: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb2cad82e47e650(&var_88); i != 0; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb2cad82e47e650(&var_88)
    {
        let mut rax: *mut i8;
        let mut rdx_1: u64;
        rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h1e9ed5ccbb1261f3(i);
        let mut var_68: i64;
        uu_cp::Attributes::parse_single_string::h449cff6f35e43c9c(&var_68, rax, rdx_1);
        let rax_1: i64 = var_68;
        let var_60: i64;
        let mut var_b0: i64 = var_60;
        
        if rax_1 != -0x7ffffffffffffff4
        {
            let var_34: i32;
            *arg1.byte_offset(0x34) = var_34;
            let var_44: i128;
            *arg1.byte_offset(0x24) = var_44;
            let var_54: i128;
            *arg1.byte_offset(0x14) = var_54;
            let var_58: i32;
            arg1[2] = var_58;
            arg1[1] = var_b0;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h1635ce62a861a981(&var_88);
        }
        
        let mut result_2: i64;
        uu_cp::Attributes::union::h43e8d826b0daba39(&result_2, &result_1, &var_b0);
        let var_8c: i32;
        var_b8 = var_8c;
        result_1 = result_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h1635ce62a861a981(&var_88);
    arg1[2] = var_b8;
    let result: i64 = result_1;
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffff4;
    result
}
