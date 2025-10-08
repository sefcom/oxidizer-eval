
  fn bat::assets::HighlightingAssets::get_syntax_for_file_extension::hc845356bd5e7f68c(arg1: *mut i8, arg2: *mut i64, arg3: *mut i8, arg4: i64, arg5: *mut c_void) -> *mut i8

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = std::path::Path::extension::h0018158968ea260f(arg3, arg4);
    let mut var_78: i8;
    bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(&var_78, arg2, 
        rax, rdx);
    let mut rax_1: i8 = var_78;
    let var_70: i128;
    
    if rax_1 != 0xd
    {
        'label_83655e:
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
        *arg1 = rax_1;
        *arg1.byte_offset(8) = var_70;
    }
    else if var_70 != 0
    {
        *arg1.byte_offset(8) = var_70;
        *arg1 = 0xd;
    }
    else
    {
        bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h37767f9b3f101424(&var_78, arg5, arg3, arg4, arg2);
        rax_1 = var_78;
        
        if rax_1 != 0xd
        {
            goto 'label_83655e;
        }
        
        *arg1.byte_offset(8) = var_70;
        *arg1 = 0xd;
    }
    arg1
}
