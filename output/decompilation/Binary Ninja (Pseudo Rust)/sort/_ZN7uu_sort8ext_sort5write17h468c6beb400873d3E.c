
  fn uu_sort::ext_sort::write::h468c6beb400873d3(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i32, arg4: i64, arg5: i64, arg6: i8) -> *mut i128

{
    let mut var_98: i64;
    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_98, arg3);
    let rdx_1: i64 = var_98;
    let result: *mut i128;
    let mut var_88: i64;
    
    if rdx_1 == -0x8000000000000000
    {
        arg1[1] = result;
        arg1[2] = var_88;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_58: i64 = rdx_1;
    let result_1: *mut i128 = result;
    uu_sort::ext_sort::write_lines::h885deb96e81ca5d5(*arg2.byte_offset(0x20), 
        *arg2.byte_offset(0x28), 
        _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&var_58), 
        arg6);
    let mut var_70: i128;
    *var_70[8] = *var_70[8];
    var_88 = var_88;
    var_98 = var_58;
    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(arg1, &var_98)
}
