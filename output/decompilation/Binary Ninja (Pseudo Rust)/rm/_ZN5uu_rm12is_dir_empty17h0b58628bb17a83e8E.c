
  fn uu_rm::is_dir_empty::h0b58628bb17a83e8(arg1: i64) -> u64

{
    let mut var_18: i64;
    std::fs::read_dir::h8c3d3d6768148fc1(&var_18, arg1);
    let var_10: i8;
    let mut rbx: i64;
    
    if var_10 != 2
    {
        rbx = core::iter::traits::iterator::Iterator::fold::h262ac07fe20bb310(var_18) == 0;
        
        if var_10 == 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hddcf8dec030b5fbc(&var_18);
        }
    }
    else
    {
        rbx = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hddcf8dec030b5fbc(&var_18);
    }
    
    rbx
}
