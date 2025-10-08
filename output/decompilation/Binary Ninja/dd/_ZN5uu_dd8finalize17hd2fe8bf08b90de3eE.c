
  int64_t uu_dd::finalize::hd2fe8bf08b90de3e(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t arg4, int32_t arg5, int64_t arg6, int32_t* arg7, int64_t* arg8, char arg9)

{
    int64_t var_128 = arg4;
    int32_t var_120 = arg5;
    int32_t var_f8;
    uu_dd::BlockWriter::flush::ha2b73a890b58a6a5(&var_f8, arg1);
    int64_t result;
    int64_t result_1;
    
    if (var_f8 != 1)
    {
        int64_t result_2 = uu_dd::BlockWriter::sync::hb048f8c58f3d1132(arg1);
        result = result_2;
        
        if (!result_2)
        {
            if (arg9)
                uu_dd::BlockWriter::truncate::h683e1b01b8f66d73(arg1);
            
            int32_t zmm0_2[0x4] = *(arg3 + 0x10);
            int64_t rbp = *arg3;
            int64_t r13_1 = arg3[1];
            int64_t rax_3;
            int32_t rdx;
            rax_3 = std::time::Instant::elapsed::h537da767ad82472a(&var_128);
            int32_t var_d8[0x4];
            int32_t zmm2_1[0x4] = __paddq_xmmdq_memdq(zmm0_2, var_d8);
            int128_t var_78_1 = arg2[1];
            int128_t var_88_1 = *arg2;
            int64_t var_e8;
            int64_t var_68_1 = rbp + var_e8;
            int64_t var_e0;
            int64_t var_60_1 = r13_1 + var_e0;
            int32_t var_58_1[0x4] = zmm2_1;
            int64_t var_98 = rax_3;
            int32_t var_90_1 = rdx;
            char var_48_1 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h514a0951d0dfaab8(&var_f8, arg6, arg7, &var_98);
            int64_t var_e8_1 = arg8[2];
            var_f8 = *arg8;
            int64_t rax_5;
            int64_t rdx_2;
            rax_5 = std::thread::JoinInner$LT$T$GT$::join::h6209760d233c43ca(&var_f8);
            core::result::Result$LT$T$C$E$GT$::expect::he805a987f3379d9a(rax_5);
            core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(arg1);
            return 0;
        }
    }
    else
        result = result_1;
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
        arg8);
    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(arg1);
    return result;
}
