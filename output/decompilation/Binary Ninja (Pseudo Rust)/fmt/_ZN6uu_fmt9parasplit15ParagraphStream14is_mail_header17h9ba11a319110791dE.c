
  fn uu_fmt::parasplit::ParagraphStream::is_mail_header::h9ba11a319110791d(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x18) == 0
    {
        let rbx_1: *mut i8 = *arg1.byte_offset(8);
        let r14_1: i64 = *arg1.byte_offset(0x10);
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(rbx_1, r14_1, 
            "From fatal: expected word not to…", 5) != 0
        {
            return 1;
        }
        
        let mut rax_2: i8;
        let mut rdx_1: i64;
        rax_2 = core::str::_$LT$impl$u20$str$GT$::find::hdd5d4e14db394534(rbx_1, r14_1);
        
        if (rdx_1 != 0 & rax_2) == 1
        {
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_1, rbx_1, r14_1);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbx_1, r14_1, 0, rdx_1);
                /* no return */
            }
            
            let mut var_28: i64 = rax_3;
            let var_20: i64 = rdx_3 + rax_3;
            /* tailcall */
            return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h11ae78aea6a48c46(core::iter::traits::iterator::Iterator::try_fold::hfc019a86165eac7f(&var_28));
        }
    }
    
    0
}
