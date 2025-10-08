
  fn uu_split::custom_write_all::h5ae19a5a4a9a7063(arg1: *mut i16, arg2: i64, arg3: u64, arg4: *mut i64, arg5: i64) -> i64

{
    let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h54a0679222e27226(arg4, arg2, arg3);
    
    if result == 0
    {
        *arg1 = 0x100;
    }
    else
    {
        let result_1: i64 = result;
        result = uu_split::ignorable_io_error::hdf5e1be4074d3926(result, arg5);
        
        if result != 0
        {
            let mut result_2: i64 = result_1;
            *arg1 = 0;
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                &result_2);
        }
        
        *arg1.byte_offset(8) = result_1;
        *arg1 = 1;
    }
    
    result
}
