
  fn uu_runcon::errors::write_full_error::h4b9c997c285ea129(arg1: i64, arg2: i64, arg3: i64) -> u64

{
    let mut var_80: i64 = arg3;
    let var_78: *mut *mut c_void = &data_4ebde0;
    let mut var_90: *mut i64 = &var_80;
    let var_88: fn(arg1: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h92b54242ab01e361;
    let mut var_60: *mut c_void = &data_4196b0;
    let var_58: i64 = 1;
    let var_40: i64 = 0;
    let var_50: *mut *mut i64 = &var_90;
    let var_48: i64 = 1;
    let mut rbp: u64;
    rbp = 1;
    
    if core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg1, arg2, &var_60) == 0
    {
        let mut i: i64;
        let mut rdx_1: i64;
        i = var_78[6](var_80);
        
        if i == 0
        {
            rbp = 0;
        }
        else
        {
            do
            {
                let mut i_1: i64 = i;
                var_90 = &i_1;
                let var_88_1: fn(arg1: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h92b54242ab01e361;
                var_60 = &data_4ebdb0;
                let var_58_1: i64 = 1;
                let var_40_1: i64 = 0;
                let var_50_1: *mut *mut i64 = &var_90;
                let var_48_1: i64 = 1;
                let rax_2: i32 =
                    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg1, arg2, &var_60);
                rbp = rax_2;
                
                if rax_2 != 0
                {
                    break;
                }
                
                i = (*(rdx_1 + 0x30))(i_1);
            } while i != 0;
        }
    }
    
    rbp
}
