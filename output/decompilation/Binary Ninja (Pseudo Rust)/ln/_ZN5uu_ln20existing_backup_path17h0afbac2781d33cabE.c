
  fn uu_ln::existing_backup_path::h0afbac2781d33cab(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_f0: ();
    uu_ln::simple_backup_path::hd90ca54508e22200(&var_f0, arg2, arg3, &data_415fc8[0x10], 4);
    let var_e8: i64;
    let mut var_d8: i64;
    std::fs::metadata::hebad4fc3d3e825b8(&var_d8, var_e8);
    let rdi_2: i64 = var_d8;
    let var_d0: i64;
    
    if rdi_2 != 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(rdi_2, var_d0);
        uu_ln::numbered_backup_path::h43f0286cb18b9b8f(arg1, arg2, arg3);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, var_d0);
        uu_ln::simple_backup_path::hd90ca54508e22200(arg1, arg2, arg3, arg4, arg5);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_f0)
}
