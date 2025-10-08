
  fn bat::assets::HighlightingAssets::get_syntaxes::hb13e605a35b83eb8(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let mut var_58: i8;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_58, arg2);
    let rax: i8 = var_58;
    let mut rcx: *mut c_void;
    let var_50: *mut c_void;
    
    if rax != 0xd
    {
        let var_57: i32;
        *arg1.byte_offset(4) = var_57;
        *arg1.byte_offset(1) = var_57;
        rcx = var_50;
        let var_38: i128;
        *arg1.byte_offset(0x20) = var_38;
        let var_28: i128;
        *arg1.byte_offset(0x30) = var_28;
        let var_18: i128;
        *arg1.byte_offset(0x40) = var_18;
        let var_48: i128;
        *arg1.byte_offset(0x10) = var_48;
    }
    else
    {
        rcx = *var_50.byte_offset(8);
        *arg1.byte_offset(0x10) = *var_50.byte_offset(0x10);
    }
    *arg1.byte_offset(8) = rcx;
    *arg1 = rax;
    arg1
}
