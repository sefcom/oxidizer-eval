
  int64_t uu_split::ByteChunkWriter::new::ha12e0ca5c6566437(int64_t* arg1, int64_t arg2, void* arg3)

{
    char const (** const var_108)[0x90];
    uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(&var_108, *(arg3 + 0x30), 
        *(arg3 + 0x38), arg3 + 0x40);
    char const (** const rdx_1)[0x90] = var_108;
    int64_t result_1;
    int64_t result = result_1;
    int128_t** var_f8;
    
    if (rdx_1 == -0x7fffffffffffffff)
    {
        arg1[1] = result;
        arg1[2] = var_f8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_f0;
    int128_t var_60_1 = var_f0;
    char const (** const var_78)[0x90] = rdx_1;
    int128_t** var_68_1 = var_f8;
    int128_t* var_b0;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_b0, &var_78);
    int128_t* r12_1 = var_b0;
    int128_t var_98;
    
    if (r12_1 != -0x8000000000000000)
    {
        int64_t var_a8;
        int64_t rdx_2 = var_a8;
        int64_t var_110_1 = rdx_2;
        int64_t var_a0;
        
        if (*(arg3 + 0xa0))
        {
            var_98 = 0;
            *var_98[8] = rdx_2;
            int64_t var_88_1 = var_a0;
            char var_80_1 = 1;
            var_b0 = &var_98;
            int64_t (* var_a8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_108 = &data_50af08;
            result_1 = 2;
            *var_f0[8] = 0;
            var_f8 = &var_b0;
            var_f0 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
            rdx_2 = var_110_1;
        }
        
        uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_108, arg3, rdx_2, 
            var_a0, 1);
        char const (** const rax_2)[0x90] = var_108;
        
        if (rax_2 != -0x8000000000000000)
        {
            *(arg1 + 0x20) = var_f0;
            *(arg1 + 0x10) = var_f8;
            int128_t var_d0;
            arg1[0xe] = *var_d0[8];
            int128_t zmm0_3 = var_78;
            int128_t var_e0;
            *(arg1 + 0x60) = var_e0;
            *(arg1 + 0x50) = var_60_1;
            *(arg1 + 0x40) = var_68_1;
            *(arg1 + 0x30) = zmm0_3;
            *arg1 = rax_2;
            arg1[1] = result_1;
            arg1[0xf] = arg3;
            arg1[0x10] = arg2;
            arg1[0x11] = 0;
            arg1[0x12] = arg2;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r12_1, 
                var_110_1);
        }
        
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_50bc38;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r12_1, var_110_1);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_98, "output file suffixes exhaustedcr…", 0x1e);
        int64_t var_88;
        int64_t var_f8_1 = var_88;
        var_108 = var_98;
        var_f0 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_108);
        arg1[2] = &data_50ab40;
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(
        var_78, result);
}
