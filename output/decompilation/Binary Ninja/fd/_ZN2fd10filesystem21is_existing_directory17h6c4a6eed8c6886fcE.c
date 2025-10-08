
  uint64_t fd::filesystem::is_existing_directory::h6c4a6eed8c6886fc(int64_t arg1, uint64_t arg2)

{
    int64_t rbp;
    
    if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2))
        rbp = 0;
    else
    {
        rbp = 1;
        
        if (!std::path::Path::file_name::h6d40d88bf3fb287a(arg1, arg2))
        {
            int64_t var_38;
            normpath::imp::normalize::h59e357bf70bb8f7b(&var_38, arg1);
            rbp = !(0 + -(var_38));
            core::ptr::drop_in_place$LT$core..result..Result$LT$normpath..base..BasePathBuf$C$std..io..error..Error$GT$$GT$::h5196cef524be1b6a(&var_38);
        }
    }
    
    return rbp;
}
