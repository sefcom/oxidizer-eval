
  fn uu_fmt::parasplit::ParagraphStream::is_mail_header::h9700490a74650aec(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x18) != 0
    {
        return 0;
    }
    
    let rbx_1: *mut i8 = *arg1.byte_offset(8);
    let r14_1: *mut c_void = *arg1.byte_offset(0x10);
    let mut result: i8 = 1;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(rbx_1, r14_1, 
        "From   fatal: expected word not …", 5) == 0
    {
        let mut rax: i64;
        let mut rdx_1: *mut c_void;
        rax = core::str::_$LT$impl$u20$str$GT$::find::h92b5562c589406cd(rbx_1, r14_1);
        result = 0;
        
        if rax != 0 && rdx_1 != 0
        {
            if rdx_1 >= r14_1
            {
                if rdx_1 == r14_1
                {
                    'label_4b9c83:
                    let mut var_20: *mut i8 = rbx_1;
                    let var_18: i64 = rdx_1.byte_offset(rbx_1);
                    /* tailcall */
                    return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h162bfb0b12d90eb8(core::iter::traits::iterator::Iterator::try_fold::h78ccae77746afe6c(
                        &var_20));
                }
            }
            else if *rbx_1.byte_offset(rdx_1) > 0xbf
            {
                goto 'label_4b9c83;
            }
            
            core::str::slice_error_fail::h5dbb61534404fe7e(rbx_1, r14_1, nullptr, rdx_1);
            /* no return */
        }
    }
    
    result
}
