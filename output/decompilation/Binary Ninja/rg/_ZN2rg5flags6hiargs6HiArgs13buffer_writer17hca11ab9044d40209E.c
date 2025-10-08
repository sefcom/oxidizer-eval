
  int64_t rg::flags::hiargs::HiArgs::buffer_writer::hca11ab9044d40209(int128_t* arg1, void* arg2)

{
    int128_t var_60;
    termcolor::BufferWriter::stdout::h9ebd8187d1df1ab7(&var_60, 0x1000203 >> *(arg2 + 0x395) << 3);
    int128_t var_98;
    
    if (!(0 + -(*(arg2 + 0x280))))
    {
        int128_t var_78;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_78, *(arg2 + 0x288), *(arg2 + 0x290));
        int64_t var_68;
        int64_t var_88_1 = var_68;
        var_98 = var_78;
    }
    else
        var_98 = -0x8000000000000000;
    
    int64_t result = termcolor::BufferWriter::separator::h5ba86de9085671e6(&var_60, &var_98);
    int128_t var_20;
    arg1[4] = var_20;
    int128_t zmm0_2 = var_60;
    int128_t var_30;
    arg1[3] = var_30;
    int128_t var_40;
    arg1[2] = var_40;
    int128_t var_50;
    arg1[1] = var_50;
    *arg1 = zmm0_2;
    return result;
}
