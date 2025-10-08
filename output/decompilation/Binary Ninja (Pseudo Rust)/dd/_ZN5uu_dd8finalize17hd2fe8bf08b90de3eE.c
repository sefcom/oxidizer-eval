
  fn uu_dd::finalize::hd2fe8bf08b90de3e(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: i64, arg5: i32, arg6: i64, arg7: *mut i32, arg8: *mut i64, arg9: i8) -> i64

{
    let mut var_128: i64 = arg4;
    let var_120: i32 = arg5;
    let mut var_f8: i32;
    uu_dd::BlockWriter::flush::ha2b73a890b58a6a5(&var_f8, arg1);
    let mut result: i64;
    let result_1: i64;
    
    if var_f8 != 1
    {
        let result_2: i64 = uu_dd::BlockWriter::sync::hb048f8c58f3d1132(arg1);
        result = result_2;
        
        if result_2 == 0
        {
            if arg9 != 0
            {
                uu_dd::BlockWriter::truncate::h683e1b01b8f66d73(arg1);
            }
            
            let zmm0_2: [i32; 0x4] = *arg3.byte_offset(0x10);
            let rbp: i64 = *arg3;
            let r13_1: i64 = arg3[1];
            let mut rax_3: i64;
            let mut rdx: i32;
            rax_3 = std::time::Instant::elapsed::h537da767ad82472a(&var_128);
            let var_d8: [i32; 0x4];
            let zmm2_1: [i32; 0x4] = __paddq_xmmdq_memdq(zmm0_2, var_d8);
            let var_78_1: i128 = arg2[1];
            let var_88_1: i128 = *arg2;
            let var_e8: i64;
            let var_68_1: i64 = rbp + var_e8;
            let var_e0: i64;
            let var_60_1: i64 = r13_1 + var_e0;
            let var_58_1: [i32; 0x4] = zmm2_1;
            let mut var_98: i64 = rax_3;
            let var_90_1: i32 = rdx;
            let var_48_1: i8 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h514a0951d0dfaab8(&var_f8, arg6, arg7, &var_98);
            let var_e8_1: i64 = arg8[2];
            var_f8 = *arg8;
            let mut rax_5: i64;
            let mut rdx_2: i64;
            rax_5 = std::thread::JoinInner$LT$T$GT$::join::h6209760d233c43ca(&var_f8);
            core::result::Result$LT$T$C$E$GT$::expect::he805a987f3379d9a(rax_5);
            core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(arg1);
            return 0;
        }
    }
    else
    {
        result = result_1;
    }
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
        arg8);
    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(arg1);
    result
}
