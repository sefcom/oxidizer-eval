
  fn uu_dd::progress::ProgUpdate::write_io_lines::hb8d567bd29ca3197(arg1: *mut c_void, arg2: i64) -> *mut c_void

{
    let mut result: *mut c_void =
        uu_dd::progress::ReadStat::report::hbca14eda554cb06a(arg1.byte_offset(0x10), arg2);
    
    if result == 0
    {
        result =
            uu_dd::progress::WriteStat::report::hc78063a235cbbca9(arg1.byte_offset(0x30), arg2);
        
        if result == 0
        {
            let rax: i32 = *arg1.byte_offset(0x28);
            
            if rax == 0
            {
                return 0;
            }
            
            let mut var_50: *mut *mut [i8; 0xbe];
            
            if rax != 1
            {
                let mut var_54: i32 = rax;
                let mut var_20: *mut i32 = &var_54;
                let var_18_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_50 = &data_53d970;
                let var_48_1: i64 = 2;
                let var_30_1: i64 = 0;
                let var_40_1: *mut *mut i32 = &var_20;
                let var_38_1: i64 = 1;
            }
            else
            {
                var_50 = &data_53d960;
                let var_48: i64 = 1;
                let var_40: i64 = 8;
                let mut var_38: i64;
                var_38 = {0};
            }
            
            return _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_50);
        }
    }
    
    result
}
