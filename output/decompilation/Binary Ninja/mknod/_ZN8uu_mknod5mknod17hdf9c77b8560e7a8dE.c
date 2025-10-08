
  uint64_t uu_mknod::mknod::hdf9c77b8560e7a8d(char* arg1, uint64_t arg2, int64_t* arg3)

{
    void var_50;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_50, arg1, arg2);
    char* rax;
    int64_t rdx_1;
    rax = core::result::Result$LT$T$C$E$GT$::expect::h4e7bf038ed69e7c0(&var_50);
    int32_t rbp = arg3[2];
    int32_t rbp_1;
    
    if (~rbp & 0x1b6)
    {
        int32_t rax_4 = umask(0, &data_4e3ff0);
        rbp_1 = mknod(rax, rbp, *arg3);
        umask(rax_4);
        
        if (rbp_1 == 0xffffffff)
        {
            label_45a166:
            char* rax_7;
            uint64_t rdx_4;
            rax_7 = uucore::execution_phrase::hf0e80cb4793732ad();
            _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_50, rax_7, rdx_4);
            char* s;
            int64_t rdx_5;
            s = core::result::Result$LT$T$C$E$GT$::expect::h4e7bf038ed69e7c0(&var_50);
            perror(s);
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hbc3ea3c1703b14a0(s, rdx_5);
        }
    }
    else
    {
        rbp_1 = mknod(rax, rbp, *arg3);
        
        if (rbp_1 == 0xffffffff)
            goto label_45a166;
    }
    
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hbc3ea3c1703b14a0(rax, rdx_1);
    return rbp_1;
}
