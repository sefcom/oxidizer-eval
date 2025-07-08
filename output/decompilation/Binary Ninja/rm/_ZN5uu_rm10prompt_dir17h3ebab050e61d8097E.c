
  uint64_t uu_rm::prompt_dir::h3ebab050e61d8097(int64_t arg1, int64_t arg2, char arg3)

{
    uint64_t rbx;
    
    if (!arg3)
        rbx = 1;
    else
    {
        int32_t var_d0;
        std::fs::metadata::h6df0603967c240bb(&var_d0, arg1);
        rbx = 1;
        char var_98;
        
        if (var_d0 != 2)
            rbx = uu_rm::handle_writable_directory::hdb36aba62dc09786(arg1, arg2, arg3, var_98);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_d0);
    }
    
    return rbx;
}
