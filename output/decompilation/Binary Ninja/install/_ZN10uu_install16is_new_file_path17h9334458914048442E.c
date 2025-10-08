
  uint64_t uu_install::is_new_file_path::h9334458914048442(int64_t arg1, int64_t arg2)

{
    int32_t var_d0;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_d0, arg1);
    int32_t rbp = var_d0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_d0);
    
    if (rbp != 2)
        rbp = 0;
    else
    {
        char* rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg1, arg2);
        rbp = 1;
        
        if (rax_1 && !std::path::Path::is_dir::h02edbc48c38d7d9e(rax_1, rdx_1))
        {
            char* rax_3;
            int64_t rdx_2;
            rax_3 = std::path::Path::parent::hef287f60afa56900(arg1, arg2);
            
            if (!rax_3)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            rbp = !rdx_2;
        }
    }
    
    return rbp;
}
