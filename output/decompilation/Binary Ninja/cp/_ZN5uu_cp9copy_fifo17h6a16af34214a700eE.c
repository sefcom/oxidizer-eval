
  int64_t* uu_cp::copy_fifo::h6a16af34214a700e(int64_t* arg1, char* arg2, uint64_t arg3, char arg4, char arg5)

{
    int32_t var_e0;
    std::fs::metadata::h003d8cdbffde7c56(&var_e0, arg2);
    int32_t rbx = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_e0);
    int128_t var_d0;
    int128_t var_c0;
    
    if (rbx != 2)
    {
        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&var_e0, arg4, arg2, arg3, arg5);
        
        if (var_e0 != 0xd)
        {
            int128_t zmm0_2 = var_e0;
            int128_t var_b0;
            *(arg1 + 0x30) = var_b0;
            *(arg1 + 0x20) = var_c0;
            *(arg1 + 0x10) = var_d0;
            *arg1 = zmm0_2;
            return arg1;
        }
        
        int64_t* rax_4 = std::fs::remove_file::h38159f05e7b4dc34(arg2);
        
        if (rax_4)
        {
            *arg1 = 2;
            arg1[1] = rax_4;
            return rax_4;
        }
    }
    
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb0b4810d8b62c0c3(&var_e0, arg2, arg3);
    char* path;
    int64_t rdx_1;
    path = core::result::Result$LT$T$C$E$GT$::unwrap::hb6cd498fe806660e(&var_e0);
    
    if (mkfifo(path, 0x1b6) != 0xffffffff)
    {
        *arg1 = 0xd;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(path, 
            rdx_1);
    }
    
    int64_t var_118 = 1;
    char* var_110_1 = arg2;
    uint64_t var_108_1 = arg3;
    char var_100_1 = 1;
    int64_t* var_128 = &var_118;
    int64_t (* var_120_1)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_e0 = &data_5b6078;
    int64_t var_d8_1 = 2;
    var_c0 = 0;
    var_d0 = &var_128;
    *var_d0[8] = 1;
    int128_t var_f8;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_f8, &var_e0);
    int64_t var_e8;
    arg1[3] = var_e8;
    *(arg1 + 8) = var_f8;
    *arg1 = 4;
    return core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(path, 
        rdx_1);
}
