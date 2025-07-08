
  uint64_t uu_dircolors::escape::h9e775b2dd37a0760(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_58 = 0;
    int64_t var_50 = 1;
    int64_t var_48 = 0;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 + arg2;
    int32_t rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h87d043ad57c0cd0e(&var_40, arg1);
    
    if (rax)
    {
        int32_t rcx_1 = 0x20;
        int32_t i;
        
        do
        {
            int32_t rbp_1 = rdx_1;
            int64_t rax_1;
            uint64_t rdx_2;
            
            if (rdx_1 == 0x27)
            {
                rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
                    "'\''.svg.flcleft.tar.lzo.swm.mkv…", ".svg.flcleft.tar.lzo.swm.mkv.ogv…");
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_58, rax_1, 
                    rdx_2);
            }
            else if (rdx_1 != 0x3a || rcx_1 == 0x5c)
                alloc::string::String::push::h859ae11851fd8b8e(&var_58, rbp_1);
            else
            {
                rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
                    "\:# Configuration file for dirco…", "# Configuration file for dircolo…");
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_58, rax_1, 
                    rdx_2);
            }
            i = core::str::validations::next_code_point::h87d043ad57c0cd0e(&var_40, arg1);
            rcx_1 = rbp_1;
        } while (i);
    }
    
    *(arg1 + 0x10) = var_48;
    *arg1 = var_58;
    return arg1;
}
