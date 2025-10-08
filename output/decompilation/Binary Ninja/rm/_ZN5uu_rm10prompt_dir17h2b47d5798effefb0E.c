
  uint64_t uu_rm::prompt_dir::h2b47d5798effefb0(int64_t arg1, int64_t arg2, char arg3, int32_t arg4)

{
    int32_t rbp;
    
    if (!arg4)
        rbp = 1;
    else
    {
        int64_t var_d8;
        std::fs::metadata::h578d377c5d8d0272(&var_d8, arg1);
        int64_t rbx_1 = var_d8;
        int32_t var_a0;
        
        if (rbx_1 != 2)
            rbp =
                uu_rm::handle_writable_directory::ha4e75ec62de4407c(arg1, arg2, arg3, arg4, var_a0);
        else
        {
            rbp = 1;
            rbx_1 = 2;
        }
        int64_t var_d0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rbx_1, var_d0);
    }
    
    return rbp;
}
