
  fn firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(arg1: *mut i8, arg2: i64, arg3: i64)

{
    let mut rcx: i8;
    
    if arg3 == 0
    {
        rcx = 0;
    }
    else
    {
        let mut var_28: i64 = arg2;
        let var_20_1: i64 = arg2 + arg3;
        rcx = 2;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h862a34282a5c52bf(core::iter::traits::iterator::Iterator::try_fold::heb71c9329db38417(&var_28)) != 0
        {
            *arg1.byte_offset(8) = arg2;
            *arg1.byte_offset(0x10) = arg3;
            rcx = 5;
        }
    }
    
    *arg1 = rcx;
}
