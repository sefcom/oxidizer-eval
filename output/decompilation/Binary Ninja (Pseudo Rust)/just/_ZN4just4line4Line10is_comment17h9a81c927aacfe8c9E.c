
  fn just::line::Line::is_comment::h9a81c927aacfe8c9(arg1: *mut i32, arg2: i64) -> i64

{
    let rax: i64;
    let mut var_18: i64 = rax;
    let mut rax_1: *mut c_void;
    let mut rdx: i64;
    rax_1 = just::line::Line::first::h712dd6f4cff55297(arg1, arg2);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    *var_18[4] = 0;
    let mut rax_2: *mut i8;
    let mut rdx_1: u64;
    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x23, &*var_18[4]);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_1, rdx, rax_2, 
        rdx_1)
}
