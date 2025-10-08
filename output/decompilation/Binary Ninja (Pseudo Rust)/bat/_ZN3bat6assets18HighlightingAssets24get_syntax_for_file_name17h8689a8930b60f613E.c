
  fn bat::assets::HighlightingAssets::get_syntax_for_file_name::h8689a8930b60f613(arg1: *mut i8, arg2: *mut i64, arg3: *mut i8, arg4: i64, arg5: *mut c_void) -> *mut i8

{
    let mut var_78: i8;
    bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(&var_78, arg2, 
        arg3, arg4);
    let mut rax: i8 = var_78;
    let var_70: i128;
    
    if rax != 0xd
    {
        'label_836489:
        let var_77: i32;
        *arg1.byte_offset(4) = var_77;
        *arg1.byte_offset(1) = var_77;
        let var_60: i128;
        *arg1.byte_offset(0x18) = var_60;
        let var_50: i128;
        *arg1.byte_offset(0x28) = var_50;
        let var_40: i128;
        *arg1.byte_offset(0x38) = var_40;
        let var_30: i64;
        *arg1.byte_offset(0x48) = var_30;
        *arg1 = rax;
        *arg1.byte_offset(8) = var_70;
    }
    else if var_70 != 0
    {
        *arg1.byte_offset(8) = var_70;
        *arg1 = 0xd;
    }
    else
    {
        bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h9cfb1c3da0d07350(&var_78, arg5, arg3, arg4, arg2);
        rax = var_78;
        
        if rax != 0xd
        {
            goto 'label_836489;
        }
        
        *arg1.byte_offset(8) = var_70;
        *arg1 = 0xd;
    }
    arg1
}
