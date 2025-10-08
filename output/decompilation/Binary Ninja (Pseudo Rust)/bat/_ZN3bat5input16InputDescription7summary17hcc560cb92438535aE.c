
  fn bat::input::InputDescription::summary::hcc560cb92438535a(arg1: *mut u64, arg2: *mut c_void) -> *mut u64

{
    if 0 + -(*arg2.byte_offset(0x48))
    {
        bat::input::InputDescription::summary::_$u7b$$u7b$closure$u7d$$u7d$::h83bfa53055062a9a(
            arg1, arg2);
        return arg1;
    }
    
    let mut var_20: u64;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_20, 
        arg2.byte_offset(0x48));
    let rax_1: u64 = var_20;
    let var_18: i128;
    *arg1.byte_offset(8) = var_18;
    *arg1 = rax_1;
    arg1
}
