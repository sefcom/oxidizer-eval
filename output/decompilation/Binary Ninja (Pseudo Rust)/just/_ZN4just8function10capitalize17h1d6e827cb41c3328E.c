
  fn just::function::capitalize::h1d6e827cb41c3328(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_90: i64 = 0;
    let var_88: i64 = 1;
    let var_80: i64 = 0;
    let mut var_78: i64 = arg3;
    let var_70: i64 = arg4 + arg3;
    let var_68: i64 = 0;
    let mut rax: u64;
    let mut i: i32;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf0a80c91f197e22(&var_78);
    
    if i != 0x110000
    {
        do
        {
            let mut var_5c: ();
            let mut var_50: ();
            
            if rax == 0
            {
                core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_5c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_50, &var_5c);
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h0c6cf7086eb16438(&var_90, &var_50);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_lower::hc1521f967a2a0de4(&var_5c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_50, &var_5c);
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h0c6cf7086eb16438(&var_90, &var_50);
            }
            rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf0a80c91f197e22(&var_78);
        } while i != 0x110000;
    }
    
    arg1[3] = var_80;
    *arg1.byte_offset(8) = var_90;
    *arg1 = 0;
    arg1
}
