
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_right::h18d14e89e94ed13a(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let mut var_70: i32;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(&var_70, arg1, arg2, arg3, *arg1.byte_offset(0x220), *arg1.byte_offset(0x228));
    let result: i64;
    
    if var_70 == 1
    {
        return result;
    }
    
    let rsi_2: i32 = *arg1.byte_offset(0xc0) - 1;
    let rdi_2: i64 = *arg1.byte_offset(0xb8) - 1;
    let mut var_58: *mut c_void = arg1.byte_offset(0x28);
    let result_1: i64 = result;
    let var_60: i32;
    let var_48_1: i32 = var_60;
    let var_40_1: i64 = rdi_2;
    let var_38_1: i32 = rsi_2;
    let mut var_30: ();
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, &var_58);
    core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_30, result)
}
