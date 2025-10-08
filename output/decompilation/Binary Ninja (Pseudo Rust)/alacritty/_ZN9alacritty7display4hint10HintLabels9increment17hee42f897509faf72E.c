
  fn alacritty::display::hint::HintLabels::increment::hee42f897509faf72(arg1: *mut c_void) -> *mut i64

{
    let mut result: *mut i64 = *arg1.byte_offset(0x28);
    
    if result == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let result_2: *mut i64 = *arg1.byte_offset(0x20);
    let rdx: i64 = *result_2;
    let rsi: i64 = *arg1.byte_offset(0x30);
    
    if rdx < rsi
    {
        *result_2 = rdx + 1;
        return result;
    }
    
    *result_2 = 0;
    let r14_1: i64 = *arg1.byte_offset(0x10);
    let rax: *mut c_void = &result_2[result];
    let mut result_1: *mut i64 = result_2;
    let mut var_28_1: i64 = 1;
    let rsi_1: i64 = rsi + 1;
    let mut rax_1: i64 = 1;
    'label_847f5b:
    var_28_1 = 0;
    result = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h08e8c2d962a0de09(&result_1, rax_1);
    
    if result != 0
    {
        loop
        {
            let rcx_2: i64 = *result + 1;
            
            if rcx_2 != r14_1
            {
                *result = rcx_2;
                return result;
            }
            
            *result = rsi_1;
            rax_1 = var_28_1;
            
            if rax_1 != 0
            {
                goto 'label_847f5b;
            }
            
            result = result_1;
            
            if result == rax
            {
                break;
            }
            
            result_1 = &result[1];
        }
    }
    
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::push::hbb074ecf83bd895a(arg1.byte_offset(0x18), rsi_1)
}
