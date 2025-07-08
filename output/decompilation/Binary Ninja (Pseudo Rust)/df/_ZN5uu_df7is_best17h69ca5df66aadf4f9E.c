
  fn uu_df::is_best::h69ca5df66aadf4f9(arg1: i64, arg2: i64, arg3: *mut c_void) -> *mut c_void

{
    let mut var_38: i64 = arg1;
    let var_30: i64 = arg2 * 0x98 + arg1;
    let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&var_38);
    
    if i != 0
    {
        let mut i_1: *mut c_void = i;
        let r14_1: i64 = *arg3.byte_offset(8);
        let r15_1: i64 = *arg3.byte_offset(0x10);
        
        do
        {
            if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(*i_1.byte_offset(8), *i_1.byte_offset(0x10), r14_1, r15_1) != 0
                && uu_df::mount_info_lt::he7799b73577b1743(arg3, i_1) != 0
            {
                return nullptr;
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&var_38);
            i_1 = i;
        } while i != 0;
    }
    
    i = 1;
    i
}
