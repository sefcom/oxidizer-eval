
  fn uu_split::custom_write::h0d0a2b12f451d71b(arg1: i64, arg2: u64, arg3: *mut i64, arg4: i64) -> i64

{
    let mut rax: i8;
    let mut rdx_1: i64;
    rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hec7dc5b7edb0f9a4(arg3, arg1, arg2);
    
    if (rax & 1) == 0
    {
        return 0;
    }
    
    let mut result: i64 = 1;
    
    if uu_split::ignorable_io_error::hdf5e1be4074d3926(rdx_1, arg4) != 0
    {
        let mut var_20: i64 = rdx_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(&var_20);
        result = 0;
    }
    
    result
}
