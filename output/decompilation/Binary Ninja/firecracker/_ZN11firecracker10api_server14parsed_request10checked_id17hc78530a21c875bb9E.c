
  void firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(char* arg1, int64_t arg2, int64_t arg3)

{
    char rcx;
    
    if (!arg3)
        rcx = 0;
    else
    {
        int64_t var_28 = arg2;
        int64_t var_20_1 = arg2 + arg3;
        rcx = 2;
        
        if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h862a34282a5c52bf(core::iter::traits::iterator::Iterator::try_fold::heb71c9329db38417(&var_28)))
        {
            *(arg1 + 8) = arg2;
            *(arg1 + 0x10) = arg3;
            rcx = 5;
        }
    }
    
    *arg1 = rcx;
}
