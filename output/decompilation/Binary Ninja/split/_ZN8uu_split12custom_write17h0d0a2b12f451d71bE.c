
  int64_t uu_split::custom_write::h0d0a2b12f451d71b(int64_t arg1, uint64_t arg2, int64_t* arg3, int64_t arg4)

{
    char rax;
    int64_t rdx_1;
    rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hec7dc5b7edb0f9a4(arg3, arg1, arg2);
    
    if (!(rax & 1))
        return 0;
    
    int64_t result = 1;
    
    if (uu_split::ignorable_io_error::hdf5e1be4074d3926(rdx_1, arg4))
    {
        int64_t var_20 = rdx_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(&var_20);
        result = 0;
    }
    
    return result;
}
