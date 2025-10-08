
  fn bat::get_new_terminal_title::h8b51db7900522cfa(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_60: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_60, "bat: LC_ALLPAGERXDG_CACHE_HOMEXD…", 5);
    let mut var_48: i64 = arg2;
    let var_40: i64 = arg3 * 0xa0 + arg2;
    let var_38: i64 = 0;
    let mut rax_3: i64;
    let mut i: *mut c_void;
    rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcd5efa96571fd292(&var_48);
    
    if i != 0
    {
        let mut rbx_1: i64 = rax_3;
        
        do
        {
            let mut rax_5: *mut c_void = i.byte_offset(0x40);
            
            if 0 + -(*i.byte_offset(0x40))
            {
                rax_5 = i.byte_offset(0x28);
            }
            
            let rsi: i64 = *rax_5.byte_offset(8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_60, rsi, *rax_5.byte_offset(0x10) + rsi);
            
            if rbx_1 < arg3 - 1
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_60, ", ,: ", ",: ");
            }
            
            let mut rax_4: i64;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcd5efa96571fd292(&var_48);
            rbx_1 = rax_4;
        } while i != 0;
    }
    
    let result: i64;
    arg1[1] = result;
    *arg1 = var_60;
    result
}
