
  void* uu_sort::ext_sort::ext_sort::hc251c769f969c18a(int64_t* arg1, void* arg2, int128_t* arg3, void* arg4)

{
    int64_t var_1a8;
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a8, 1);
    int64_t r15_1 = var_1a8;
    int64_t var_1d8 = r15_1;
    int64_t var_1a0;
    int64_t var_1d0 = var_1a0;
    int128_t var_198;
    int128_t var_1e8 = var_198;
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a8, 1);
    int64_t rbp = var_1a8;
    int64_t rbx_1 = var_198;
    int64_t r13 = *var_198[8];
    int64_t var_1c8 = rbp;
    int64_t var_1c0 = var_1a0;
    int64_t var_1b8 = rbx_1;
    int64_t var_1b0 = r13;
    int64_t var_d0;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_d0, arg2);
    var_1a8 = rbx_1;
    int64_t var_1a0_1 = r13;
    var_198 = r15_1;
    *var_198[8] = var_1a0;
    void var_188;
    memcpy(&var_188, &var_d0, 0xa0);
    int64_t var_c0 = -0x8000000000000000;
    var_d0 = 0;
    void var_e8;
    std::thread::Builder::spawn_unchecked::h2522f3c5e68f3f13(&var_e8, &var_d0);
    core::result::Result$LT$T$C$E$GT$::expect::h58dca672c4c1d663(&var_d0, &var_e8);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h1284e7b09516a1c1(
        &var_d0);
    void* result;
    int64_t rdx_1;
    
    if (*(arg2 + 0x30) != -0x8000000000000000)
    {
        int128_t var_198_2 = arg3[1];
        var_1a8 = *arg3;
        result = uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(arg1, arg2, &var_1e8, rbp, 
            var_1a0, &var_1a8, arg4);
    }
    else
    {
        int128_t var_198_1 = arg3[1];
        var_1a8 = *arg3;
        result = uu_sort::ext_sort::reader_writer::hea8d60344d72eabc(arg1, arg2, &var_1e8, rbp, 
            var_1a0, &var_1a8, arg4);
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_1e8);
    return result;
}
