
  fn uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut result: i64 =
        uu_dd::progress::ReadStat::report::hd53d51fed1f91d80(arg1.byte_offset(0x10), arg2);
    
    if result == 0
    {
        result =
            uu_dd::progress::WriteStat::report::h421ce38315c3961a(arg1.byte_offset(0x30), arg2);
        
        if result == 0
        {
            let rax: i32 = *arg1.byte_offset(0x28);
            
            if rax == 0
            {
                return 0;
            }
            
            let mut var_50: *mut *mut c_void;
            
            if rax != 1
            {
                let mut var_54: i32 = rax;
                let mut var_20: *mut i32 = &var_54;
                let var_18_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09;
                var_50 = &data_5622e8;
                let var_48_2: i64 = 2;
                let var_30_1: i64 = 0;
                let var_40_2: *mut *mut i32 = &var_20;
                let var_38_1: i64 = 1;
            }
            else
            {
                var_50 = &data_5622d8;
                let var_48_1: i64 = 1;
                let var_40_1: i64 = 8;
                let mut var_38: i64;
                var_38 = {0};
            }
            
            return _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_50);
        }
    }
    
    result
}
