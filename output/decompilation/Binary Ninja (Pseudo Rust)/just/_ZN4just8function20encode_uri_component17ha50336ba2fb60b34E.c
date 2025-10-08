
  fn just::function::encode_uri_component::ha50336ba2fb60b34(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_20: i64 = arg3;
    let rcx: i64;
    let var_18: i64 = rcx;
    let var_10: *mut c_void =
        &just::function::encode_uri_component::PERCENT_ENCODE::hfc878719f503a33a;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc1f96c52e9d9d8e3(&arg1[1], 
        &var_20);
    *arg1 = 0;
    arg1
}
