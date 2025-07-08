
  fn uu_sort::ext_sort::ext_sort::hc251c769f969c18a(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128, arg4: *mut c_void) -> *mut c_void

{
    let mut var_1a8: i64;
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a8, 1);
    let r15_1: i64 = var_1a8;
    let var_1d8: i64 = r15_1;
    let var_1a0: i64;
    let var_1d0: i64 = var_1a0;
    let mut var_198: i128;
    let mut var_1e8: i128 = var_198;
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a8, 1);
    let rbp: i64 = var_1a8;
    let rbx_1: i64 = var_198;
    let r13: i64 = *var_198[8];
    let var_1c8: i64 = rbp;
    let var_1c0: i64 = var_1a0;
    let var_1b8: i64 = rbx_1;
    let var_1b0: i64 = r13;
    let mut var_d0: i64;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_d0, arg2);
    var_1a8 = rbx_1;
    let var_1a0_1: i64 = r13;
    var_198 = r15_1;
    *var_198[8] = var_1a0;
    let mut var_188: ();
    memcpy(&var_188, &var_d0, 0xa0);
    let var_c0: i64 = -0x8000000000000000;
    var_d0 = 0;
    let mut var_e8: ();
    std::thread::Builder::spawn_unchecked::h2522f3c5e68f3f13(&var_e8, &var_d0);
    core::result::Result$LT$T$C$E$GT$::expect::h58dca672c4c1d663(&var_d0, &var_e8);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h1284e7b09516a1c1(
        &var_d0);
    let mut result: *mut c_void;
    let mut rdx_1: i64;
    
    if *arg2.byte_offset(0x30) != -0x8000000000000000
    {
        let var_198_2: i128 = arg3[1];
        var_1a8 = *arg3;
        result = uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(arg1, arg2, &var_1e8, rbp, 
            var_1a0, &var_1a8, arg4);
    }
    else
    {
        let var_198_1: i128 = arg3[1];
        var_1a8 = *arg3;
        result = uu_sort::ext_sort::reader_writer::hea8d60344d72eabc(arg1, arg2, &var_1e8, rbp, 
            var_1a0, &var_1a8, arg4);
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_1e8);
    result
}
