
  fn uu_dircolors::escape::h9e775b2dd37a0760(arg1: u64, arg2: i64, arg3: i64) -> u64

{
    let mut var_58: i64 = 0;
    let var_50: i64 = 1;
    let var_48: i64 = 0;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 + arg2;
    let mut rax: i32;
    let mut rdx_1: i32;
    rax = core::str::validations::next_code_point::h87d043ad57c0cd0e(&var_40, arg1);
    
    if rax != 0
    {
        let mut rcx_1: i32 = 0x20;
        let mut i: i32;
        
        do
        {
            let rbp_1: i32 = rdx_1;
            let mut rax_1: i64;
            let mut rdx_2: u64;
            
            if rdx_1 == 0x27
            {
                rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
                    "'\''.svg.flcleft.tar.lzo.swm.mkv…", ".svg.flcleft.tar.lzo.swm.mkv.ogv…");
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_58, rax_1, 
                    rdx_2);
            }
            else if rdx_1 != 0x3a || rcx_1 == 0x5c
            {
                alloc::string::String::push::h859ae11851fd8b8e(&var_58, rbp_1);
            }
            else
            {
                rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
                    "\:# Configuration file for dirco…", "# Configuration file for dircolo…");
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_58, rax_1, 
                    rdx_2);
            }
            i = core::str::validations::next_code_point::h87d043ad57c0cd0e(&var_40, arg1);
            rcx_1 = rbp_1;
        } while i != 0;
    }
    
    *(arg1 + 0x10) = var_48;
    *arg1 = var_58;
    arg1
}
