
  int64_t uu_split::custom_write_all::h79f0c894f91cdf7a(int16_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h332cdf99430ef3b7(arg4, arg2, arg3);
    
    if (!result)
        *arg1 = 0x100;
    else
    {
        int64_t result_1 = result;
        result = uu_split::ignorable_io_error::h1fd98bb79e2f8f89(result, arg5);
        
        if (result)
        {
            *arg1 = 0;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                result_1);
        }
        
        *(arg1 + 8) = result_1;
        *arg1 = 1;
    }
    
    return result;
}
