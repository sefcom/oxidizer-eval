
  fn fuel_core_keygen::print_value::h4e8c20a34f891bad(arg1: *mut i8, arg2: i32) -> u64

{
    let mut var_30: i64;
    
    if arg2 == 0
    {
        serde_json::ser::to_vec::h0a10c859241e3c16(&var_30, arg1);
    }
    else
    {
        serde_json::ser::to_vec_pretty::ha5a7532e0ebd2ff3(&var_30, arg1);
    }
    
    let rax: i64 = var_30;
    let var_28: *mut i8;
    
    if -(rax) == -0x8000000000000000
    {
        let result: u64 =
            anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h2274890af54b0b4d(var_28);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h1073727cd256d0e5(arg1);
        return result;
    }
    
    var_30 = rax;
    let var_28_1: *mut i8 = var_28;
    let var_20: i64;
    let var_20_1: i64 = var_20;
    let mut var_18: u64 = fuel_core_keygen::display_string_discreetly::h814b2e84e256ed26(var_28);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h538a4214196f009b(&var_18);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h620ef3d513ef5c65(&var_30);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h1073727cd256d0e5(arg1);
    0
}
