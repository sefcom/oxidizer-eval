
  fn bat::assets::HighlightingAssets::find_syntax_by_token::h2ed0326e3443b2e3(arg1: *mut i8, arg2: *mut i64, arg3: *mut i8, arg4: i64) -> *mut i8

{
    let mut var_80: i8;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_80, arg2);
    let rbp: i8 = var_80;
    let mut rax: *mut c_void;
    let var_78: *mut c_void;
    
    if rbp != 0xd
    {
        let var_7f: i32;
        *arg1.byte_offset(4) = var_7f;
        *arg1.byte_offset(1) = var_7f;
        rax = var_78;
        let var_60: i128;
        *arg1.byte_offset(0x20) = var_60;
        let var_50: i128;
        *arg1.byte_offset(0x30) = var_50;
        let var_40: i128;
        *arg1.byte_offset(0x40) = var_40;
        let var_70: i128;
        *arg1.byte_offset(0x10) = var_70;
    }
    else
    {
        rax = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token::hd2ebbb585b2e3395(
            var_78, arg3, arg4);
        *arg1.byte_offset(0x10) = var_78;
    }
    *arg1.byte_offset(8) = rax;
    *arg1 = rbp;
    arg1
}
