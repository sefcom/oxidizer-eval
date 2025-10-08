
  fn firecracker::api_server::parsed_request::method_to_error::h4698b3af70462059(arg1: *mut i64, arg2: i8) -> i64

{
    let mut var_28: i128;
    let mut rdx: u64;
    let mut rsi: *const i8;
    let mut rdi: *mut i64;
    
    if arg2 == 0
    {
        rsi = "GET request cannot have a body.s…";
        rdi = &var_28;
        rdx = 0x1f;
    }
    else if arg2 != 1
    {
        rsi = "Empty PATCH request.Empty PUT re…";
        rdi = &var_28;
        rdx = 0x14;
    }
    else
    {
        rsi = "Empty PUT request.GET request ca…";
        rdi = &var_28;
        rdx = 0x12;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(rdi, rsi, rdx);
    arg1[1] = 0x301;
    arg1[3] = *var_28[8];
    let result: i64;
    arg1[4] = result;
    let var_46: i128;
    *arg1.byte_offset(0xa) = var_46;
    *arg1 = 1;
    result
}
