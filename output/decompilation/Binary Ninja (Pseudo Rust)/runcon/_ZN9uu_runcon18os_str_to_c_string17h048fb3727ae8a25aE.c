
  fn uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_28: i64;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_28, arg2, arg3);
    let rdi_1: i64 = var_28;
    let var_20: *mut i8;
    let mut rsi: *const i8 = var_20;
    let mut result: i32;
    let mut rcx: i64;
    
    if -(rdi_1) != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa51e23776abbce(rdi_1, rsi);
        *arg1.byte_offset(0x18) = 0x1400000003;
        result = 0xf;
        rcx = 0xe;
        rsi = "CString::new() failed failed on …";
    }
    else
    {
        result = 0x11;
        let var_18: i64;
        rcx = var_18;
    }
    
    *arg1.byte_offset(8) = rsi;
    *arg1.byte_offset(0x10) = rcx;
    *arg1 = result;
    result
}
