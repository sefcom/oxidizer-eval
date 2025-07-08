
  int64_t uu_split::LineChunkWriter::new::hd30d9397c46ea980(int64_t* arg1, int64_t arg2, void* arg3)

{
    char const (** const var_f8)[0x3d];
    uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(&var_f8, *(arg3 + 0x30), 
        *(arg3 + 0x38), arg3 + 0x40);
    char const (** const rdx_1)[0x3d] = var_f8;
    int64_t result;
    int128_t** var_e8;
    
    if (rdx_1 == -0x7fffffffffffffff)
    {
        arg1[1] = result;
        arg1[2] = var_e8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_e0;
    int128_t var_58_1 = var_e0;
    char const (** const var_70)[0x3d] = rdx_1;
    int64_t result_1 = result;
    int128_t** var_60_1 = var_e8;
    int128_t* var_a8;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ad8a6a4076a29c8(&var_a8, &var_70);
    int128_t* rax_1 = var_a8;
    int128_t var_90;
    
    if (rax_1 != -0x8000000000000000)
    {
        int128_t* var_110 = rax_1;
        int64_t var_a0;
        int64_t var_98;
        
        if (*(arg3 + 0xa0))
        {
            var_90 = 0;
            *var_90[8] = var_a0;
            int64_t var_80_1 = var_98;
            char var_78_1 = 1;
            var_a8 = &var_90;
            int64_t (* var_a0_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_f8 = &data_5483e0;
            result = 2;
            *var_e0[8] = 0;
            var_e8 = &var_a8;
            var_e0 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_f8);
        }
        
        uu_split::Settings::instantiate_current_writer::h325c265ed321d02d(&var_f8, arg3, var_a0, 
            var_98, 1);
        char const (** const rax_4)[0x3d] = var_f8;
        
        if (rax_4 != -0x8000000000000000)
        {
            *(arg1 + 0x20) = var_e0;
            *(arg1 + 0x10) = var_e8;
            int128_t var_c0;
            arg1[0xe] = *var_c0[8];
            int128_t zmm0_3 = var_70;
            int128_t var_d0;
            *(arg1 + 0x60) = var_d0;
            *(arg1 + 0x50) = var_58_1;
            *(arg1 + 0x40) = var_60_1;
            *(arg1 + 0x30) = zmm0_3;
            *arg1 = rax_4;
            arg1[1] = result;
            arg1[0xf] = arg3;
            arg1[0x10] = arg2;
            arg1[0x11] = 0;
            arg1[0x12] = arg2;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(
                &var_110);
        }
        
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_549a38;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(&var_110);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_90, 
            "output file suffixes exhaustedcr…", 0x1e);
        int64_t var_80;
        int64_t var_e8_1 = var_80;
        var_f8 = var_90;
        var_e0 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&var_f8);
        arg1[2] = &data_548438;
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h4a1cc4a00f07c721(
        &var_70);
}
