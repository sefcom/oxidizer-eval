
  void* uu_split::LineChunkWriter::start_new_chunk::h270b7287cecb38e1(int64_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t var_90;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_90, arg3);
    int64_t r14 = var_90;
    char const (** const var_60)[0x90];
    
    if (-(r14) == -0x8000000000000000)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_60, "output file suffixes exhaustedcr…", 0x1e);
        void* result = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_60), &data_50ad88);
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_88;
    int64_t var_80;
    
    if (*(arg2 + 0xa0))
    {
        var_90 = 0;
        int64_t var_88_1 = var_88;
        int64_t var_80_1 = var_80;
        char var_78_1 = 1;
        int64_t* var_70 = &var_90;
        int64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_60 = &data_50af08;
        int64_t var_58_1 = 2;
        int64_t var_40_1 = 0;
        int64_t** var_50_1 = &var_70;
        int64_t var_48_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_60);
    }
    
    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(arg1, arg2, var_88, var_80, 
        1);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r14, var_88);
}
