
  fn uu_cp::copy_fifo::h6a16af34214a700e(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i8, arg5: i8) -> *mut i64

{
    let mut var_e0: i32;
    std::fs::metadata::h003d8cdbffde7c56(&var_e0, arg2);
    let rbx: i32 = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_e0);
    let mut var_d0: i128;
    let mut var_c0: i128;
    
    if rbx != 2
    {
        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&var_e0, arg4, arg2, arg3, arg5);
        
        if var_e0 != 0xd
        {
            let zmm0_2: i128 = var_e0;
            let var_b0: i128;
            *arg1.byte_offset(0x30) = var_b0;
            *arg1.byte_offset(0x20) = var_c0;
            *arg1.byte_offset(0x10) = var_d0;
            *arg1 = zmm0_2;
            return arg1;
        }
        
        let rax_4: *mut i64 = std::fs::remove_file::h38159f05e7b4dc34(arg2);
        
        if rax_4 != 0
        {
            *arg1 = 2;
            arg1[1] = rax_4;
            return rax_4;
        }
    }
    
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb0b4810d8b62c0c3(&var_e0, arg2, arg3);
    let mut path: *mut i8;
    let mut rdx_1: i64;
    path = core::result::Result$LT$T$C$E$GT$::unwrap::hb6cd498fe806660e(&var_e0);
    
    if mkfifo(path, 0x1b6) != 0xffffffff
    {
        *arg1 = 0xd;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(path, 
            rdx_1);
    }
    
    let mut var_118: i64 = 1;
    let var_110_1: *mut i8 = arg2;
    let var_108_1: u64 = arg3;
    let var_100_1: i8 = 1;
    let mut var_128: *mut i64 = &var_118;
    let var_120_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_e0 = &data_5b6078;
    let var_d8_1: i64 = 2;
    var_c0 = 0;
    var_d0 = &var_128;
    *var_d0[8] = 1;
    let mut var_f8: i128;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_f8, &var_e0);
    let var_e8: i64;
    arg1[3] = var_e8;
    *arg1.byte_offset(8) = var_f8;
    *arg1 = 4;
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(path, rdx_1)
}
