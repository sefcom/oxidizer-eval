
  fn uu_du::get_time_secs::h49debf4b9f55f9aa(arg1: *mut i64, arg2: i8, arg3: *mut c_void) -> i64

{
    if arg2 == 0
    {
        let rax_2: i64 = *arg3.byte_offset(0x70);
        arg1[1] = rax_2;
        *arg1 = 5;
        return rax_2;
    }
    
    if arg2 == 1
    {
        let rax_1: i64 = *arg3.byte_offset(0x78);
        arg1[1] = rax_1;
        *arg1 = 5;
        return rax_1;
    }
    
    let rax_3: i64 = *arg3.byte_offset(0x38);
    let cond:0: bool = (*arg3.byte_offset(0x30) & 1) == 0;
    let mut var_20: i64 = 3;
    
    if !cond:0
    {
        arg1[1] = rax_3;
        *arg1 = 5;
        return core::ptr::drop_in_place$LT$uu_du..DuError$GT$::h2285cec56b29122c(&var_20);
    }
    
    let rax_5: i64 = var_20;
    let var_10: i128;
    *arg1.byte_offset(0x10) = var_10;
    *arg1 = rax_5;
    let var_18: i64;
    arg1[1] = var_18;
    rax_5
}
