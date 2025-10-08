
  fn uu_mknod::mknod::hdf9c77b8560e7a8d(arg1: *mut i8, arg2: u64, arg3: *mut i64) -> u64

{
    let mut var_50: ();
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_50, arg1, arg2);
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::result::Result$LT$T$C$E$GT$::expect::h4e7bf038ed69e7c0(&var_50);
    let rbp: i32 = arg3[2];
    let mut rbp_1: i32;
    
    if (!rbp & 0x1b6) != 0
    {
        let rax_4: i32 = umask(0, &data_4e3ff0);
        rbp_1 = mknod(rax, rbp, *arg3);
        umask(rax_4);
        
        if rbp_1 == 0xffffffff
        {
            'label_45a166:
            let mut rax_7: *mut i8;
            let mut rdx_4: u64;
            rax_7 = uucore::execution_phrase::hf0e80cb4793732ad();
            _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h0590d0924c279fb9(&var_50, rax_7, rdx_4);
            let mut s: *mut i8;
            let mut rdx_5: i64;
            s = core::result::Result$LT$T$C$E$GT$::expect::h4e7bf038ed69e7c0(&var_50);
            perror(s);
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hbc3ea3c1703b14a0(s, rdx_5);
        }
    }
    else
    {
        rbp_1 = mknod(rax, rbp, *arg3);
        
        if rbp_1 == 0xffffffff
        {
            goto 'label_45a166;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hbc3ea3c1703b14a0(rax, rdx_1);
    rbp_1
}
