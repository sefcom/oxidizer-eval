
  fn uu_rm::prompt_dir::h3ebab050e61d8097(arg1: i64, arg2: i64, arg3: i8) -> u64

{
    let mut rbx: u64;
    
    if arg3 == 0
    {
        rbx = 1;
    }
    else
    {
        let mut var_d0: i32;
        std::fs::metadata::h6df0603967c240bb(&var_d0, arg1);
        rbx = 1;
        let var_98: i8;
        
        if var_d0 != 2
        {
            rbx = uu_rm::handle_writable_directory::hdb36aba62dc09786(arg1, arg2, arg3, var_98);
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_d0);
    }
    
    rbx
}
