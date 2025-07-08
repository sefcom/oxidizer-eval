
  fn uu_sort::month_parse::h15c772d462e6ea25(arg1: i64) -> u64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    let rsi: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h13cb0d7168f45d26(arg1, rsi);
    let mut var_30: *mut *mut [i8; 0x97] = &data_5ffe20;
    let var_28: *mut *mut c_void = &data_5fff40;
    let i_2: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&var_30);
    
    if i_2 != 0
    {
        let mut i_1: *mut i64 = i_2;
        let mut i: *mut i64;
        
        do
        {
            let mut rcx_1: i64 = i_1[1];
            let mut rsi_1: i64;
            let mut rdi_1: *mut i8;
            
            if rcx_1 == 0
            {
                rdi_1 = rax;
                rsi_1 = 0;
                rcx_1 = 0;
                'label_5245b7:
                
                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(rdi_1, rsi_1, *i_1, rcx_1) != 0
                {
                    return i_1[2];
                }
            }
            else if rcx_1 >= rdx
            {
                if rcx_1 == rdx
                {
                    'label_5245f2:
                    rdi_1 = rax;
                    rsi_1 = rcx_1;
                    goto 'label_5245b7;
                }
            }
            else if rax[rcx_1] > 0xbf
            {
                goto 'label_5245f2;
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&var_30);
            i_1 = i;
        } while i != 0;
    }
    
    0
}
