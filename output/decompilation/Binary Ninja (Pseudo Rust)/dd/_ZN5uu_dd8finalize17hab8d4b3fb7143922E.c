
  fn uu_dd::finalize::hab8d4b3fb7143922(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: i64, arg5: i32, arg6: *mut i64, arg7: *mut i64, arg8: i8) -> i64

{
    let mut var_128: i64 = arg4;
    let var_120: i32 = arg5;
    let mut var_f8: i64;
    uu_dd::BlockWriter::flush::h48e8ffbb5b89f6d9(&var_f8, arg1);
    let mut result: i64;
    let result_1: i64;
    
    if var_f8 == 0
    {
        let result_2: i64 = uu_dd::BlockWriter::sync::h52e1c4b01c44f80e(arg1);
        result = result_2;
        
        if result_2 == 0
        {
            if arg8 != 0
            {
                uu_dd::BlockWriter::truncate::haed78b6dd922a309(arg1);
            }
            
            let zmm0_2: [i32; 0x4] = *arg3.byte_offset(0x10);
            let rbp: i64 = *arg3;
            let r13_1: i64 = arg3[1];
            let mut rax_4: i64;
            let mut rdx: i32;
            rax_4 = std::time::Instant::elapsed::hd84d976472e03263(&var_128);
            let var_d8: [i32; 0x4];
            let zmm2_1: [i32; 0x4] = __paddq_xmmdq_memdq(zmm0_2, var_d8);
            let var_78_1: i128 = arg2[1];
            let var_88_1: i128 = *arg2;
            let var_e8: i64;
            let var_68_1: i64 = rbp + var_e8;
            let var_e0: i64;
            let var_60_1: i64 = r13_1 + var_e0;
            let var_58_1: [i32; 0x4] = zmm2_1;
            let mut var_98: i64 = rax_4;
            let var_90_1: i32 = rdx;
            let var_48_1: i8 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&var_f8, arg6, &var_98);
            let var_e8_1: i64 = arg7[2];
            var_f8 = *arg7;
            let mut rax_6: i64;
            let mut rdx_2: i64;
            rax_6 = std::thread::JoinInner$LT$T$GT$::join::h1c3eb576eba2d71f(&var_f8);
            core::result::Result$LT$T$C$E$GT$::expect::h4f1d3531bd9b092b(rax_6);
            core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(arg1);
            return 0;
        }
    }
    else
    {
        result = result_1;
    }
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
        arg7);
    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(arg1);
    result
}
