
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::h4cec90c032934a57(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let mut var_68: i32;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(&var_68, arg1, arg2, arg3, *arg1.byte_offset(0x220), *arg1.byte_offset(0x228));
    let result: i64;
    
    if var_68 == 1
    {
        return result;
    }
    
    let mut var_8a: i16 = 0x440;
    let rsi_2: i32 = *arg1.byte_offset(0xc0) - 1;
    let rdi_2: i64 = *arg1.byte_offset(0xb8) - 1;
    let mut var_38: *mut c_void = arg1.byte_offset(0x28);
    let result_1: i64 = result;
    let var_58: i32;
    let var_28_1: i32 = var_58;
    let var_20_1: i64 = rdi_2;
    let var_18_1: i32 = rsi_2;
    let mut var_50: i64;
    core::iter::traits::iterator::Iterator::try_fold::h6c2fb5cc23e75869(&var_50, &var_38, &var_8a);
    let mut var_88: i64;
    
    if var_50 == 0
    {
        var_88 = 0;
    }
    else
    {
        let var_40: i64;
        let var_78_1: i64 = var_40;
        var_88 = var_50;
    }
    
    core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_88, result)
}
