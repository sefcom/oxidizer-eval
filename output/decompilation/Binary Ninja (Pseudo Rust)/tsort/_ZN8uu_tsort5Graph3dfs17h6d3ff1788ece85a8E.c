
  fn uu_tsort::Graph::dfs::h6d3ff1788ece85a8(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut i64, arg5: *mut i64) -> u64

{
    let mut var_48: *mut i64 = arg2;
    let mut rbp: i64;
    rbp = 1;
    
    if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h42d257bc62dd9328(
        &var_48, arg5[1], arg5[2]) == 0
    {
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h9808ee5d91771ad7(arg4, &var_48)
            == 0
        {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2be3e5d0a6b37c2d(arg4, var_48, 
                arg3);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbbd106ac298c97ce(arg5, var_48, arg3);
            let rax_2: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfa0a63b39f7acc9f(arg1, 
                var_48, arg3);
            
            if rax_2 != 0
            {
                let rcx: i64 = *rax_2.byte_offset(0x18);
                let rax_5: i64 = (*rax_2.byte_offset(0x20) << 4) + rcx;
                let mut var_38: i64 = rcx;
                let var_30_1: i64 = rax_5;
                
                loop
                {
                    let rax_6: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c0c46eaf379cb40(&var_38);
                    
                    if rax_6 == 0
                    {
                        break;
                    }
                    
                    if uu_tsort::Graph::dfs::h6d3ff1788ece85a8(arg1, *rax_6, rax_6[1], arg4, arg5)
                        != 0
                    {
                        return rbp;
                    }
                }
            }
            
            let rax_8: i64 = arg5[2];
            
            if rax_8 != 0
            {
                arg5[2] = rax_8 - 1;
            }
        }
        
        rbp = 0;
    }
    
    rbp
}
