
  fn uvx::main::h46717cb7913c9f08() -> u64

{
    let mut var_58: i32;
    uvx::run::he42f7266f97e898d(&var_58);
    
    if var_58 != 1
    {
        let var_54: i32;
        
        if (var_54 & 0x7f) == 0
        {
            return var_54 >> 8;
        }
        
        return 2;
    }
    
    let var_50: i64;
    let mut var_60: i64 = var_50;
    let mut var_48: *mut i64 = &var_60;
    let var_40: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    let mut var_38: *mut *mut [i8; 0x8] = &data_4630a0;
    let var_30: i64 = 2;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_48;
    let var_20: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_38);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h65e5ef1b69c12763(var_60);
    let mut result: i64;
    result = 2;
    result
}
