
  fn uu_rm::prompt_dir::h2b47d5798effefb0(arg1: i64, arg2: i64, arg3: i8, arg4: i32) -> u64

{
    let mut rbp: i32;
    
    if arg4 == 0
    {
        rbp = 1;
    }
    else
    {
        let mut var_d8: i64;
        std::fs::metadata::h578d377c5d8d0272(&var_d8, arg1);
        let mut rbx_1: i64 = var_d8;
        let var_a0: i32;
        
        if rbx_1 != 2
        {
            rbp =
                uu_rm::handle_writable_directory::ha4e75ec62de4407c(arg1, arg2, arg3, arg4, var_a0);
        }
        else
        {
            rbp = 1;
            rbx_1 = 2;
        }
        let var_d0: i64;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rbx_1, var_d0);
    }
    
    rbp
}
