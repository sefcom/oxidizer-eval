
  fn uu_split::custom_write::he4121ae57a3a57a0(arg1: i64, arg2: u64, arg3: *mut i64, arg4: i64) -> i64

{
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hb07c88488005409a(arg3, arg1, arg2);
    
    if rax == 0
    {
        return 0;
    }
    
    let mut result: i64 = 1;
    
    if uu_split::ignorable_io_error::h1fd98bb79e2f8f89(rdx_1, arg4) != 0
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(rdx_1);
        result = 0;
    }
    
    result
}
