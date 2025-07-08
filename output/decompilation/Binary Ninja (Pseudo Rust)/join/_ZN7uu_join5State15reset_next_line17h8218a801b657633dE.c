
  fn uu_join::State::reset_next_line::h8218a801b657633d(arg1: *mut i128, arg2: *mut i64, arg3: *mut i8) -> *mut i128

{
    let mut var_78: i64;
    uu_join::State::next_line::hdcd6fa155f18f200(&var_78, arg2, arg3);
    let rax: i64 = var_78;
    let mut result: *mut i128;
    let var_70: i128;
    let result_1: *mut i128;
    
    if rax != -0x7fffffffffffffff
    {
        let var_58: i128;
        let var_28_1: i128 = var_58;
        let mut var_48: i64 = rax;
        let var_40_1: i128 = var_70;
        let result_2: *mut i128 = result_1;
        result = uu_join::State::reset::h80c820df90bbe344(arg2, &var_48);
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        result = result_1;
        arg1[1] = result;
        *arg1 = var_70;
    }
    result
}
