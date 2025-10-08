
  int64_t uu_split::custom_write_all::h5ae19a5a4a9a7063(int16_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h54a0679222e27226(arg4, arg2, arg3);
    
    if (!result)
        *arg1 = 0x100;
    else
    {
        int64_t result_1 = result;
        result = uu_split::ignorable_io_error::hdf5e1be4074d3926(result, arg5);
        
        if (result)
        {
            int64_t result_2 = result_1;
            *arg1 = 0;
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                &result_2);
        }
        
        *(arg1 + 8) = result_1;
        *arg1 = 1;
    }
    
    return result;
}
