
  fn uu_cut::list_to_ranges::ha2a167a13e4b3412(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i32) -> *mut i128

{
    if arg4 == 0
    {
        uucore::features::ranges::Range::from_list::h55160c8343b59905(arg1, arg2, arg3);
        return arg1;
    }
    
    let mut var_28: i8;
    uucore::features::ranges::Range::from_list::h55160c8343b59905(&var_28, arg2, arg3);
    
    if (var_28 & 1) == 0
    {
        let mut var_20: ();
        uu_cut::list_to_ranges::_$u7b$$u7b$closure$u7d$$u7d$::h22ada85cd920fbe1(
            arg1.byte_offset(8), &var_20);
        *arg1 = 0;
        return arg1;
    }
    
    let zmm0: i128 = var_28;
    let var_18: i128;
    arg1[1] = var_18;
    *arg1 = zmm0;
    arg1
}
