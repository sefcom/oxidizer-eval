
  uint64_t uu_ls::PathData::new::get_file_type::h50456aa863ca9f3a(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
        goto label_526ea3;
    
    int32_t var_d0;
    std::fs::metadata::h459aac21f85cb4df(&var_d0, arg2);
    int32_t rbp_1;
    
    if (var_d0 != 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
        rbp_1 = 1;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
        label_526ea3:
        int32_t var_e0;
        std::fs::DirEntry::file_type::hd81c8483f7ba6043(&var_e0, arg1);
        
        if (!var_e0)
            rbp_1 = 1;
        else
        {
            std::fs::symlink_metadata::haff3ff196e1dc22b(&var_d0, arg2);
            int32_t r14_1 = var_d0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_d0);
            int32_t rbp;
            rbp = r14_1 == 2;
            rbp_1 = rbp + 1;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::hcb401049192dd8f7(&var_e0);
    }
    
    return rbp_1;
}
