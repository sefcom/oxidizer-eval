
  fn uu_split::custom_write_all::h79f0c894f91cdf7a(arg1: *mut i16, arg2: i64, arg3: u64, arg4: *mut i64, arg5: i64) -> i64

{
    let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h332cdf99430ef3b7(arg4, arg2, arg3);
    
    if result == 0
    {
        *arg1 = 0x100;
    }
    else
    {
        let result_1: i64 = result;
        result = uu_split::ignorable_io_error::h1fd98bb79e2f8f89(result, arg5);
        
        if result != 0
        {
            *arg1 = 0;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                result_1);
        }
        
        *arg1.byte_offset(8) = result_1;
        *arg1 = 1;
    }
    
    result
}
