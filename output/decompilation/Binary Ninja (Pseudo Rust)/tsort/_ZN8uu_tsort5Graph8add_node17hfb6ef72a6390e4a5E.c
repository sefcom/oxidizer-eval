
  fn uu_tsort::Graph::add_node::hfb6ef72a6390e4a5(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    let mut var_20: i64;
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hd7bc3dc93d618077(&var_20, arg1.byte_offset(0x18), arg2, arg3);
    let mut var_48: i64;
    let var_18: i128;
    
    if var_20 != 0
    {
        let var_40: i128 = var_18;
        var_48 = var_20;
        return std::collections::hash::map::Entry$LT$K$C$V$GT$::or_default::h9cebe9bdf1232847(
            &var_48);
    }
    
    let var_40_1: i128 = var_18;
    var_48 = 0;
    std::collections::hash::map::Entry$LT$K$C$V$GT$::or_default::h9cebe9bdf1232847(&var_48)
}
