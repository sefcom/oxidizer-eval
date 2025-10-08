
  fn bat::assets::HighlightingAssets::find_syntax_by_name::h9f91e66c04b2ba0b(arg1: *mut i8, arg2: *mut i64) -> *mut c_void

{
    let mut var_70: i8;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_70, arg2);
    let rbp: i8 = var_70;
    let mut result: *mut c_void;
    let result_1: *mut c_void;
    
    if rbp != 0xd
    {
        let var_6f: i32;
        *arg1.byte_offset(4) = var_6f;
        *arg1.byte_offset(1) = var_6f;
        result = result_1;
        let var_50: i128;
        *arg1.byte_offset(0x20) = var_50;
        let var_40: i128;
        *arg1.byte_offset(0x30) = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x40) = var_30;
        let var_60: i128;
        *arg1.byte_offset(0x10) = var_60;
    }
    else
    {
        result = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_name::h8df32158a8fa1b23(
            result_1, "Plain Te");
        *arg1.byte_offset(0x10) = result_1;
    }
    *arg1.byte_offset(8) = result;
    *arg1 = rbp;
    result
}
