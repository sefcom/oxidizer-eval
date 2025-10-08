
  fn uu_ls::display_uname::h7c414fef392325b1(arg1: i32, arg2: i8, arg3: *mut c_void) -> *mut c_void

{
    let mut var_28: i64;
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h51f17f2f0e1d34a5(&var_28, arg3.byte_offset(0x88), arg1);
    let mut var_48: i64;
    let var_20: i128;
    
    if var_28 == 0
    {
        let var_40_1: i128 = var_20;
        var_48 = 0;
    }
    else
    {
        let mut var_40: i128;
        *var_40[8] = *var_20[8];
        var_48 = var_28;
    }
    std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::hdd1791e9fc9dd94a(&var_48, 
        arg2)
}
