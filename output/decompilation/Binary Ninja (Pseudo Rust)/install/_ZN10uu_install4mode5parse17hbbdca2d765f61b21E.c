
  fn uu_install::mode::parse::hbbdca2d765f61b21(arg1: *mut *mut *mut [i8; 0x88], arg2: *mut c_void, arg3: *mut c_void, arg4: i8, arg5: i32) -> i64

{
    let mut var_38: *mut c_void = arg2;
    let var_30: *mut c_void = arg2.byte_offset(arg3);
    
    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hcf3b57975be3c5bb(core::iter::traits::iterator::Iterator::try_fold::hc0f81444595a2639(&var_38)) == 0
    {
        /* tailcall */
        return uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(arg1, 0, arg2, arg3, arg5, 
            arg4);
    }
    
    /* tailcall */
    uucore::features::mode::parse_numeric::hf54e809090b43181(arg1, 0, arg2, arg3, arg4)
}
