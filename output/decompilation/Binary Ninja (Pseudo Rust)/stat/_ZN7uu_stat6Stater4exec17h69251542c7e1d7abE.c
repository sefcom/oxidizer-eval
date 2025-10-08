
  fn uu_stat::Stater::exec::h69251542c7e1d7ab(arg1: *mut c_void) -> u64

{
    let mut var_e0: i32;
    std::fs::metadata::h65b87d3586103590(&var_e0);
    let mut rbp: i64;
    rbp = var_e0 != 2;
    let var_a8: i32;
    let mut r15: i64;
    r15 = (var_a8 & 0xf000) == 0x1000;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h5bd07a05211b9dc2(&var_e0);
    let rax_2: i64 = *arg1.byte_offset(0x10);
    let mut rbp_1: i32;
    
    if rax_2 == 0
    {
        rbp_1 = 0;
    }
    else
    {
        rbp &= r15;
        let r15_1: i64 = *arg1.byte_offset(8);
        let mut i: i64 = 0;
        rbp_1 = 0;
        
        do
        {
            rbp_1 |= uu_stat::Stater::do_stat::he2e3ae60926a8076(arg1, *(r15_1 + i + 8), 
                *(r15_1 + i + 0x10), rbp);
            i += 0x18;
        } while rax_2 * 0x18 != i;
    }
    
    rbp_1
}
