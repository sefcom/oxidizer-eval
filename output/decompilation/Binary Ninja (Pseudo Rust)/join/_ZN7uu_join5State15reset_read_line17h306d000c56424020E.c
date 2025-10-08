
  fn uu_join::State::reset_read_line::h306d000c56424020(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_68: i64;
    uu_join::State::read_line::h10a0d716756ca345(&var_68, arg1, arg2);
    let rcx: i64 = var_68;
    let result: i64;
    
    if rcx == -0x7fffffffffffffff
    {
        return result;
    }
    
    let var_48: i128;
    let var_18_1: i128 = var_48;
    let var_58: i128;
    let var_28_1: i128 = var_58;
    let mut var_38: i64 = rcx;
    let result_1: i64 = result;
    uu_join::State::reset::hf11a3d581915b2af(arg1, &var_38);
    0
}
