
  fn uu_install::is_new_file_path::h9334458914048442(arg1: i64, arg2: i64) -> u64

{
    let mut var_d0: i32;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_d0, arg1);
    let mut rbp: i32 = var_d0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_d0);
    
    if rbp != 2
    {
        rbp = 0;
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: u64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg1, arg2);
        rbp = 1;
        
        if rax_1 != 0 && std::path::Path::is_dir::h02edbc48c38d7d9e(rax_1, rdx_1) == 0
        {
            let mut rax_3: *mut i8;
            let mut rdx_2: i64;
            rax_3 = std::path::Path::parent::hef287f60afa56900(arg1, arg2);
            
            if rax_3 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            rbp = rdx_2 == 0;
        }
    }
    
    rbp
}
