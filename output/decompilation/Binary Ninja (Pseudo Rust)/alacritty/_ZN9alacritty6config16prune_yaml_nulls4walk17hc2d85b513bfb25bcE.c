
  fn alacritty::config::prune_yaml_nulls::walk::hc2d85b513bfb25bc(arg1: *mut c_void, arg2: i8) -> i64

{
    let mut var_9: i8 = arg2;
    let rcx: i64 = -0x8000000000000000 ^ *arg1;
    let mut rax: i64 = 5;
    
    if rcx < 7
    {
        rax = rcx;
    }
    
    if rax == 5
    {
        indexmap::map::core::IndexMapCore$LT$K$C$V$GT$::retain_in_order::he9a4d152b7a8fd53(arg1, 
            &var_9);
        let mut rax_3: i64;
        rax_3 = *arg1.byte_offset(0x30) == 0;
        return rax_3;
    }
    
    if rax == 4
    {
        alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::hfadf262ef8a2827f(arg1.byte_offset(8), &var_9);
        let mut rax_2: i64;
        rax_2 = *arg1.byte_offset(0x18) == 0;
        return rax_2;
    }
    
    if rax != 0
    {
        return 0;
    }
    
    rax = 1;
    rax
}
