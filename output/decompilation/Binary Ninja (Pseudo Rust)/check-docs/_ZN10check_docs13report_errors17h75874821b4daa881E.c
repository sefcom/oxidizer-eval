
  fn check_docs::report_errors::h75874821b4daa881(arg1: i64, arg2: i64, arg3: i64, arg4: i64)

{
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg2;
    
    if arg4 != 0
    {
        let mut r14_1: i64 = arg3;
        let mut var_88: *mut i64 = &var_40;
        let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        let mut var_70: *mut *mut c_void = &data_5d33f8;
        let var_68_1: i64 = 2;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut i64 = &var_88;
        let var_58_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        let mut i_1: i64 = arg4 << 3;
        let mut i: i64;
        
        do
        {
            let mut var_78: i64 = r14_1;
            r14_1 += 8;
            var_88 = &var_78;
            let var_80_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fa94dfe70534f88;
            var_70 = &data_5d3418;
            let var_68_2: i64 = 2;
            let var_50_2: i64 = 0;
            let var_60_2: *mut *mut i64 = &var_88;
            let var_58_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            i = i_1;
            i_1 -= 8;
        } while i != 8;
    }
}
