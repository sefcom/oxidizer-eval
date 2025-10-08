
  fn uu_sort::ext_sort::write::h6c40a425f9d84fbb(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i32, arg4: i64, arg5: u64, arg6: i8) -> *mut i64

{
    let mut var_108: i64;
    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h0b8ecde962a5ff3a(&var_108, arg3, arg4, arg5);
    let rdx_1: i64 = var_108;
    let result: *mut i64;
    let mut var_f8: i64;
    
    if -(rdx_1) == -0x8000000000000000
    {
        arg1[1] = result;
        arg1[2] = var_f8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_a0: i64;
    let var_28_1: i64 = var_a0;
    let mut var_90: i64 = rdx_1;
    let result_1: *mut i64 = result;
    uu_sort::ext_sort::write_lines::h52eb50a69352cfad(*arg2.byte_offset(0x20), 
        *arg2.byte_offset(0x28), 
        _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::ha4082f868beb8d8c(&var_90), 
        arg6);
    var_f8 = var_f8;
    var_108 = var_90;
    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hc7e70b8b6ae55049(arg1, &var_108)
}
