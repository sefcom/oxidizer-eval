
  fn uu_ls::PathData::new::get_file_type::h648e9c795770d343(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i32) -> i64

{
    if arg4 == 0
    {
        goto 'label_59975b;
    }
    
    let mut var_c8: i8;
    std::fs::metadata::h0f528178d24a74c4(&var_c8, arg2);
    
    if var_c8 != 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_c8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_c8);
        'label_59975b:
        std::fs::DirEntry::file_type::h795bcf7de2117d2f(&var_c8, arg1);
        
        if (var_c8 & 1) == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::h45938f03de5a95ed(&var_c8);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::h45938f03de5a95ed(&var_c8);
            std::fs::symlink_metadata::h7b40b87fa5e11ee0(&var_c8, arg2);
            
            if var_c8 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_c8);
                return 2;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_c8);
        }
    }
    
    1
}
