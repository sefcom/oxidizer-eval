
  fn uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg1: *mut c_void)

{
    if *arg1.byte_offset(0x38) == 0
    {
        let rax: *mut c_void = *arg1.byte_offset(0x20);
        
        if *rax.byte_offset(0x62) == 1 && *arg1.byte_offset(0x30) == 0
        {
            *arg1.byte_offset(0x28) -= 1;
            return;
        }
        
        if *rax.byte_offset(0x61) == 0
        {
            let mut var_40: *mut c_void = arg1.byte_offset(0x30);
            let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            let mut var_30: *mut c_void = &data_642c88;
            let var_28: i64 = 2;
            let var_10: i64 = 0;
            let var_20: *mut *mut c_void = &var_40;
            let var_18: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_30);
        }
    }
}
