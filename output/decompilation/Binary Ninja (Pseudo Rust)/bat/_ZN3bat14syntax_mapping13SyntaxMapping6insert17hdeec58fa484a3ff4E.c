
  fn bat::syntax_mapping::SyntaxMapping::insert::hdeec58fa484a3ff4(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i128) -> *mut i128

{
    let mut var_90: i64;
    bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(&var_90, arg3);
    let rax: i64 = var_90;
    let var_88: i128;
    let var_78: i128;
    let var_68: i128;
    let var_58: i128;
    let var_48: i128;
    
    if -(rax) != -0x8000000000000000
    {
        let var_48_1: i128 = var_48;
        let var_58_1: i128 = var_58;
        let var_68_1: i128 = var_68;
        let var_78_1: i128 = var_78;
        let var_88_1: i128 = var_88;
        var_90 = rax;
        let var_38: i64;
        let var_38_1: i64 = var_38;
        let var_30_1: i128 = *arg5;
        let var_20_1: i64 = arg5[1];
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc656419b1ae5f038(arg2, &var_90);
        *arg1 = 0xd;
    }
    else
    {
        arg1[4] = var_48;
        arg1[3] = var_58;
        arg1[2] = var_68;
        arg1[1] = var_78;
        *arg1 = var_88;
    }
    arg1
}
