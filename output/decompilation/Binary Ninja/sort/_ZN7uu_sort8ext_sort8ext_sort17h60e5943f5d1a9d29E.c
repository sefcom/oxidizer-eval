
  void* uu_sort::ext_sort::ext_sort::h60e5943f5d1a9d29(int64_t* arg1, void* arg2, int64_t* arg3, void* arg4)

{
    int128_t* var_1a8;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1a8, 1);
    int128_t* r12 = var_1a8;
    int128_t* var_1d8 = r12;
    int64_t* var_1a0;
    int64_t* var_1d0 = var_1a0;
    int128_t* var_198;
    int128_t* var_1e8 = var_198;
    int64_t var_190;
    int64_t var_1e0 = var_190;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1a8, 1);
    int128_t* r14_1 = var_1a8;
    int128_t* var_1c8 = r14_1;
    int64_t* var_1c0 = var_1a0;
    int128_t* var_1b8 = var_198;
    int64_t var_1b0 = var_190;
    int64_t var_d0;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h43265696f2462bc6(
        &var_d0, arg2);
    var_1a8 = var_198;
    int64_t var_1a0_1 = var_190;
    int128_t* var_198_1 = r12;
    int64_t* var_190_1 = var_1a0;
    void var_188;
    memcpy(&var_188, &var_d0, 0xa0);
    int64_t var_c0 = -0x8000000000000000;
    var_d0 = 0;
    char var_a8 = 0;
    void var_e8;
    std::thread::Builder::spawn_unchecked::hb824ac581027dbd9(&var_e8, &var_d0, &var_1a8);
    core::result::Result$LT$T$C$E$GT$::expect::h12022375ebf47b21(&var_d0, &var_e8);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::hd410c122727f1aa9(
        &var_d0);
    void* result;
    int64_t rdx_2;
    
    if (*(arg2 + 0x30) != -0x8000000000000000)
        result = uu_sort::ext_sort::reader_writer::ha45870364be7fd58(arg1, arg2, var_198, var_190, 
            r14_1, var_1a0, arg3, arg4);
    else
        result = uu_sort::ext_sort::reader_writer::h849ad3f081ba95be(arg1, arg2, var_198, var_190, 
            r14_1, var_1a0, arg3, arg4);
    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::h46cfb158905bad70(&var_1e8);
    return result;
}
