
  fn uu_dircolors::escape::h43afab8edf490a36(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_60: i64 = 0;
    let var_58: i64 = 1;
    let var_50: i64 = 0;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 + arg2;
    let mut rax: i8;
    let mut rdx_1: i32;
    rax = core::str::validations::next_code_point::h89d139d84d7ee604(&var_40, rbx);
    
    if (rax & 1) != 0
    {
        let mut rcx_1: i32 = 0x20;
        let mut rax_2: i8;
        
        do
        {
            let rbp_1: i32 = rdx_1;
            let mut rsi: *const i8 = "'\''.svg.flcleft -> .tar.lzo.swm…";
            let mut rax_1: *const i8 = ".svg.flcleft -> .tar.lzo.swm.mkv…";
            
            if rdx_1 != 0x27 && rdx_1 == 0x3a
            {
                rsi = "\:# Configuration file for dirco…";
                rax_1 = "# Configuration file for dircolo…";
            }
            
            if rdx_1 == 0x27 || (rdx_1 == 0x3a && rcx_1 != 0x5c)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(&var_60, rsi, rax_1);
            }
            else
            {
                alloc::string::String::push::h0ede46164189e411(&var_60, rbp_1);
            }
            
            rax_2 = core::str::validations::next_code_point::h89d139d84d7ee604(&var_40, 
                "\:# Configuration file for dirco…");
            rcx_1 = rbp_1;
        } while (rax_2 & 1) != 0;
    }
    
    arg1[1] = var_50;
    *arg1 = var_60;
    arg1
}
