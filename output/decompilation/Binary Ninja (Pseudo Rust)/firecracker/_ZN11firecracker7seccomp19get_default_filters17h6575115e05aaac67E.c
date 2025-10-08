
  fn firecracker::seccomp::get_default_filters::h6575115e05aaac67(arg1: *mut i128) -> i64

{
    let mut result_1: i64;
    vmm::seccomp::deserialize_binary::h9d92e16560a10d85(&result_1);
    let result: i64 = result_1;
    let var_80: i128;
    let var_70: i128;
    
    if result != 0
    {
        let mut result_2: i64 = result;
        let var_50: i128 = var_80;
        let var_40: i128 = var_70;
        let var_60: i64;
        let var_30: i64 = var_60;
        return firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(arg1, &result_2);
    }
    
    let var_28: i128 = var_80;
    let var_18: i128 = var_70;
    *arg1.byte_offset(0x18) = var_70;
    *arg1.byte_offset(8) = var_80;
    *arg1 = 0;
    result
}
