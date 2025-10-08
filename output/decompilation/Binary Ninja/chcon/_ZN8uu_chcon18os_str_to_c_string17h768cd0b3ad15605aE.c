
  int32_t* uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(int32_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_28;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_28, arg2, arg3);
    int64_t rdi_1 = var_28;
    char* var_20;
    char const* const rsi = var_20;
    int32_t rax_2;
    int64_t rcx;
    
    if (-(rdi_1) != -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$alloc..ffi..c_str..NulError$GT$::he727792f05ff88ed(rdi_1, rsi);
        *(arg1 + 0x18) = 0x1400000003;
        rax_2 = 0x10;
        rcx = 0xe;
        rsi = "CString::new()/std::fs::symlink_…";
    }
    else
    {
        rax_2 = 0x12;
        int64_t var_18;
        rcx = var_18;
    }
    
    *(arg1 + 8) = rsi;
    *(arg1 + 0x10) = rcx;
    *arg1 = rax_2;
    return arg1;
}
