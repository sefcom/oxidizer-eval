
  fn uu_sort::ext_sort::write::h9263e275eb902110(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i32, arg4: i64, arg5: u64, arg6: i8) -> *mut i64

{
    let mut var_108: i64;
    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_108, arg3, arg4, arg5);
    let rdx_1: i64 = var_108;
    let result: *mut i64;
    let mut var_f8: i64;
    
    if rdx_1 == -0x8000000000000000
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
    uu_sort::ext_sort::write_lines::he98d063bf4fa553b(*arg2.byte_offset(0x20), 
        *arg2.byte_offset(0x28), 
        _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&var_90), 
        arg6);
    var_f8 = var_f8;
    var_108 = var_90;
    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(arg1, &var_108)
}
