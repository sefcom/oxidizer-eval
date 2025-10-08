
  int64_t alacritty::gl::metaloadfn::h7eed37a2c35596e4(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t* r14 = arg4;
    int64_t result = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hb2ea25bc5a20bd77();
    
    if (result)
        return result;
    
    if (!arg5)
        return 0;
    
    while (true)
    {
        result = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hb2ea25bc5a20bd77(arg1, *r14, r14[1]);
        
        if (result)
            return result;
        
        r14 = &r14[2];
        
        if (r14 == &r14[arg5 * 2])
            return 0;
    }
}
