
  fn uu_split::number::FixedWidthNumber::increment::h00b6e667aed53161(arg1: *mut c_void) -> u64

{
    let r14: *mut i8 = *arg1.byte_offset(8);
    let i_1: u64 = *arg1.byte_offset(0x10);
    
    if i_1 != 0
    {
        let rbp_1: i8 = *arg1.byte_offset(0x18);
        let mut i: u64 = i_1;
        
        do
        {
            i = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
            
            if i >= i_1
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(i, i_1);
                /* no return */
            }
            
            let rcx_1: i8 = r14[i] + 1;
            r14[i] = rcx_1;
            
            if rcx_1 != rbp_1
            {
                break;
            }
            
            r14[i] = 0;
        } while i != 0;
    }
    
    let mut var_30: ();
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(
        &var_30, i_1);
    let var_28: i64;
    let var_20: i64;
    let rax_1: i32 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h24144f0ec5aeede0(r14, i_1, var_28, var_20);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_30);
    rax_1
}
