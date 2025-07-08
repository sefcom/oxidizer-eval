
  fn uu_ls::PathData::new::get_file_type::h50456aa863ca9f3a(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> u64

{
    if arg4 == 0
    {
        goto 'label_526ea3;
    }
    
    let mut var_d0: i32;
    std::fs::metadata::h459aac21f85cb4df(&var_d0, arg2);
    let mut rbp_1: i32;
    
    if var_d0 != 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
        rbp_1 = 1;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
        'label_526ea3:
        let mut var_e0: i32;
        std::fs::DirEntry::file_type::hd81c8483f7ba6043(&var_e0, arg1);
        
        if var_e0 == 0
        {
            rbp_1 = 1;
        }
        else
        {
            std::fs::symlink_metadata::haff3ff196e1dc22b(&var_d0, arg2);
            let r14_1: i32 = var_d0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
            let mut rbp: i32;
            rbp = r14_1 == 2;
            rbp_1 = rbp + 1;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::hcb401049192dd8f7(&var_e0);
    }
    
    rbp_1
}
