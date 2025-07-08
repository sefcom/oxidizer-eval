
  int64_t uu_split::custom_write::he4121ae57a3a57a0(int64_t arg1, uint64_t arg2, int64_t* arg3, int64_t arg4)

{
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hb07c88488005409a(arg3, arg1, arg2);
    
    if (!rax)
        return 0;
    
    int64_t result = 1;
    
    if (uu_split::ignorable_io_error::h1fd98bb79e2f8f89(rdx_1, arg4))
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(rdx_1);
        result = 0;
    }
    
    return result;
}
