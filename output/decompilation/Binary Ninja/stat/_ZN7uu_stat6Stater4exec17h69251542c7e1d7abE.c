
  uint64_t uu_stat::Stater::exec::h69251542c7e1d7ab(void* arg1)

{
    int32_t var_e0;
    std::fs::metadata::h65b87d3586103590(&var_e0);
    int64_t rbp;
    rbp = var_e0 != 2;
    int32_t var_a8;
    int64_t r15;
    r15 = (var_a8 & 0xf000) == 0x1000;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h5bd07a05211b9dc2(&var_e0);
    int64_t rax_2 = *(arg1 + 0x10);
    int32_t rbp_1;
    
    if (!rax_2)
        rbp_1 = 0;
    else
    {
        rbp &= r15;
        int64_t r15_1 = *(arg1 + 8);
        int64_t i = 0;
        rbp_1 = 0;
        
        do
        {
            rbp_1 |= uu_stat::Stater::do_stat::he2e3ae60926a8076(arg1, *(r15_1 + i + 8), 
                *(r15_1 + i + 0x10), rbp);
            i += 0x18;
        } while (rax_2 * 0x18 != i);
    }
    
    return rbp_1;
}
