
  fn just::subcommand::Subcommand::variables::hc98f87f2340c147d(arg1: *mut c_void) -> *mut c_void

{
    let rax_1: i64 = *arg1.byte_offset(0x280);
    let rcx: i64 = *arg1.byte_offset(0x288);
    let mut rsi: i64 = rax_1;
    let mut rdx: *mut *mut [i8; 0x1];
    rdx = rax_1 != 0;
    
    if rax_1 != 0
    {
        rsi = *arg1.byte_offset(0x290);
    }
    
    let mut var_c0: *mut *mut [i8; 0x1] = rdx;
    let var_b8: i64 = 0;
    let var_b0: i64 = rax_1;
    let mut var_a8: i64 = rcx;
    let var_a0: *mut *mut [i8; 0x1] = rdx;
    let var_98: i64 = 0;
    let var_90: i64 = rax_1;
    let var_88: i64 = rcx;
    let var_80: i64 = rsi;
    let var_78: i64 = 0;
    let mut var_d8: i64;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08848c209115bb0a(&var_d8, &var_c0);
    let i: i64;
    
    while i != 0
    {
        let mut var_70: *mut *mut [i8; 0x90];
        let mut var_58: i64;
        
        if var_d8 != 0
        {
            var_70 = &data_82f150;
            let var_68_2: i64 = 1;
            let var_60_2: i64 = 8;
            var_58 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_70);
        }
        
        let var_c8: i64;
        let mut var_40: i64 = var_c8 + 0x80;
        let var_38_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_70 = &data_465db0;
        let var_68_1: i64 = 1;
        let var_50_1: i64 = 0;
        let var_60_1: *mut i64 = &var_40;
        var_58 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_70);
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08848c209115bb0a(&var_d8, &var_c0);
    }
    
    var_c0 = &data_82dbf8;
    let var_b8_1: i64 = 1;
    let var_b0_1: i64 = 8;
    var_a8 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_c0)
}
