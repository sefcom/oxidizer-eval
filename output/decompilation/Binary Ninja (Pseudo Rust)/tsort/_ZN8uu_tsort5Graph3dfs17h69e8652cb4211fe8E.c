
  fn uu_tsort::Graph::dfs::h69e8652cb4211fe8(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: *mut i64, arg5: *mut i64) -> u64

{
    let mut var_40: *mut i64 = arg2;
    let mut rbp: i64;
    rbp = 1;
    
    if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h3d22f1d0f2c6fda7(
        &var_40, arg5[1], arg5[2]) == 0
    {
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0d0bb528157eeff4(arg4, &var_40)
            == 0
        {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9e44a592f6310d68(arg4, var_40, 
                arg3);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hc06cf8efd6ffa662(arg5, var_40, arg3);
            let rax_2: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hbf23ef7421c68646(
                arg1.byte_offset(0x18), var_40, arg3);
            
            if rax_2 != 0
            {
                let r12_1: i64 = *rax_2.byte_offset(0x20);
                
                if r12_1 != 0
                {
                    let mut i: *mut i64 = *rax_2.byte_offset(0x18);
                    
                    do
                    {
                        if uu_tsort::Graph::dfs::h69e8652cb4211fe8(arg1, *i, i[1], arg4, arg5) != 0
                        {
                            return rbp;
                        }
                        
                        i = &i[2];
                    } while i != &i[r12_1 * 2];
                }
            }
            
            let rax_4: i64 = arg5[2];
            
            if rax_4 != 0
            {
                arg5[2] = rax_4 - 1;
            }
        }
        
        rbp = 0;
    }
    
    rbp
}
