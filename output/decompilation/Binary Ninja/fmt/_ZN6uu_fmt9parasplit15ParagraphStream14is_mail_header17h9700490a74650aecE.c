
  int64_t uu_fmt::parasplit::ParagraphStream::is_mail_header::h9700490a74650aec(void* arg1)

{
    if (*(arg1 + 0x18))
        return 0;
    
    char* rbx_1 = *(arg1 + 8);
    void* r14_1 = *(arg1 + 0x10);
    char result = 1;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(rbx_1, r14_1, 
        "From   fatal: expected word not …", 5))
    {
        int64_t rax;
        void* rdx_1;
        rax = core::str::_$LT$impl$u20$str$GT$::find::h92b5562c589406cd(rbx_1, r14_1);
        result = 0;
        
        if (rax && rdx_1)
        {
            if (rdx_1 >= r14_1)
            {
                if (rdx_1 == r14_1)
                {
                    label_4b9c83:
                    char* var_20 = rbx_1;
                    int64_t var_18 = rdx_1 + rbx_1;
                    /* tailcall */
                    return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h162bfb0b12d90eb8(core::iter::traits::iterator::Iterator::try_fold::h78ccae77746afe6c(
                        &var_20));
                }
            }
            else if (*(rbx_1 + rdx_1) > 0xbf)
                goto label_4b9c83;
            
            core::str::slice_error_fail::h5dbb61534404fe7e(rbx_1, r14_1, nullptr, rdx_1);
            /* no return */
        }
    }
    
    return result;
}
