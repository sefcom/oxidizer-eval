
  fn uu_sort::KeySettings::set_ignore_non_printing::hb18c264c9cade1ef(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_28: i64;
    let rax: i64 = uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(&var_28, 
        *arg2.byte_offset(5), 1, *arg2.byte_offset(2));
    
    if 0 + -(var_28)
    {
        *arg2.byte_offset(3) = 1;
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    let var_18: i64;
    arg1[2] = var_18;
    *arg1 = var_28;
    var_18
}
