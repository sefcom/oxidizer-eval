
  fn alacritty::gl::metaloadfn::h7eed37a2c35596e4(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: i64) -> i64

{
    let mut r14: *mut i64 = arg4;
    let mut result: i64 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hb2ea25bc5a20bd77();
    
    if result != 0
    {
        return result;
    }
    
    if arg5 == 0
    {
        return 0;
    }
    
    loop
    {
        result = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hb2ea25bc5a20bd77(arg1, *r14, r14[1]);
        
        if result != 0
        {
            return result;
        }
        
        r14 = &r14[2];
        
        if r14 == &r14[arg5 * 2]
        {
            return 0;
        }
    }
}
