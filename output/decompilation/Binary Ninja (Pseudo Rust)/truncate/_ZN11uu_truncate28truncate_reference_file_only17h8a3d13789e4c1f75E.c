
  fn uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> *mut i128

{
    let mut var_d8: i32;
    std::fs::metadata::h6368ec5e748c38e4(&var_d8, arg1);
    
    if var_d8 == 2
    {
        let var_d0: i64;
        return uu_truncate::truncate_reference_file_only::_$u7b$$u7b$closure$u7d$$u7d$::h71e741134f9f8f00(arg1, arg2, var_d0);
    }
    
    var_d8 = arg3;
    let var_d0_1: i64 = arg3 + arg4 * 0x18;
    
    loop
    {
        let rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_d8);
        
        if rax_2 == 0
        {
            break;
        }
        
        let var_88: i64;
        let result: *mut i128 = uu_truncate::file_truncate::h8689dfa8e5b80143(
            *rax_2.byte_offset(8), *rax_2.byte_offset(0x10), arg5, var_88);
        
        if result != 0
        {
            return result;
        }
    }
    
    nullptr
}
