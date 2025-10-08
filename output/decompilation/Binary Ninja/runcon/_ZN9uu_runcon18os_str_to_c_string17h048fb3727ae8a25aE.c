
  int64_t uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(int32_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_28;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_28, arg2, arg3);
    int64_t rdi_1 = var_28;
    char* var_20;
    char const* const rsi = var_20;
    int32_t result;
    int64_t rcx;
    
    if (-(rdi_1) != -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa51e23776abbce(rdi_1, rsi);
        *(arg1 + 0x18) = 0x1400000003;
        result = 0xf;
        rcx = 0xe;
        rsi = "CString::new() failed failed on …";
    }
    else
    {
        result = 0x11;
        int64_t var_18;
        rcx = var_18;
    }
    
    *(arg1 + 8) = rsi;
    *(arg1 + 0x10) = rcx;
    *arg1 = result;
    return result;
}
