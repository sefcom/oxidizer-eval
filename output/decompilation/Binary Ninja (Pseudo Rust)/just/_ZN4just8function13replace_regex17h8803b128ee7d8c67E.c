
  fn just::function::replace_regex::h8803b128ee7d8c67(arg1: *mut i64, arg2: i64, arg3: *mut i8, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> *mut i64

{
    let mut var_58: i64;
    regex::regex::string::Regex::new::h678b3567117d3be5(&var_58, arg5);
    let rax: i64 = var_58;
    let mut var_98: i128;
    let var_88: u64;
    let mut var_78: i128;
    let var_50: i128;
    let var_40: i64;
    
    if rax == 0
    {
        let var_68_1: i64 = var_40;
        var_78 = var_50;
        just::function::replace_regex::_$u7b$$u7b$closure$u7d$$u7d$::hfbda715b9a178102(&var_98, 
            &var_78);
        let var_68_2: u64 = var_88;
        let zmm0_2: i128 = var_98;
        var_78 = zmm0_2;
        arg1[3] = var_88;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 1;
    }
    else
    {
        var_78 = var_50;
        let var_68: i64 = var_40;
        let var_50_1: i128 = var_50;
        let var_40_1: i64 = var_40;
        var_58 = rax;
        regex::regex::string::Regex::replacen::hee1cc50d8db99275(&var_98, &var_58, arg3, arg4, 
            arg6);
        let mut var_38: i128;
        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_38, *var_98[8], var_88);
        let var_28: i64;
        arg1[3] = var_28;
        *arg1.byte_offset(8) = var_38;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$just..request..Request$GT$::h16e954a6b6741939(&var_98);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h8a6235b02cb1e98d(&var_58);
    }
    arg1
}
