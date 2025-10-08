
  fn uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> *mut i32

{
    let mut var_28: i64;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_28, arg2, arg3);
    let rdi_1: i64 = var_28;
    let var_20: *mut i8;
    let mut rsi: *const i8 = var_20;
    let mut rax_2: i32;
    let mut rcx: i64;
    
    if -(rdi_1) != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$alloc..ffi..c_str..NulError$GT$::he727792f05ff88ed(rdi_1, rsi);
        *arg1.byte_offset(0x18) = 0x1400000003;
        rax_2 = 0x10;
        rcx = 0xe;
        rsi = "CString::new()/std::fs::symlink_…";
    }
    else
    {
        rax_2 = 0x12;
        let var_18: i64;
        rcx = var_18;
    }
    
    *arg1.byte_offset(8) = rsi;
    *arg1.byte_offset(0x10) = rcx;
    *arg1 = rax_2;
    arg1
}
