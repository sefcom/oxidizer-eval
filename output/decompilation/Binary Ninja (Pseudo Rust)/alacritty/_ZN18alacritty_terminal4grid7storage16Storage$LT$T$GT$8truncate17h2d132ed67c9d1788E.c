
  fn alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rdx: i64 = *arg1.byte_offset(0x18);
    let mut result: i64;
    let mut r14_1: i64;
    
    if rdx == 0
    {
        let r14_2: i64 = *arg1.byte_offset(0x10);
        result = *arg1.byte_offset(0x28);
        r14_1 = r14_2 - result;
        
        if r14_2 >= result
        {
            'label_76eddd:
            let rdi_3: *mut i64 = (result << 5) + *arg1.byte_offset(8);
            *arg1.byte_offset(0x10) = result;
            /* tailcall */
            return core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4(rdi_3, r14_1);
        }
    }
    else
    {
        let r14: i64 = *arg1.byte_offset(0x10);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::rotate_left::h461a6a02631add82(
            *arg1.byte_offset(8), r14, rdx);
        *arg1.byte_offset(0x18) = 0;
        result = *arg1.byte_offset(0x28);
        r14_1 = r14 - result;
        
        if r14 >= result
        {
            goto 'label_76eddd;
        }
    }
    result
}
