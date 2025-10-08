
  fn uu_sort::ext_sort::ext_sort::h60e5943f5d1a9d29(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void) -> *mut c_void

{
    let mut var_1a8: *mut i128;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1a8, 1);
    let r12: *mut i128 = var_1a8;
    let var_1d8: *mut i128 = r12;
    let var_1a0: i64;
    let var_1d0: i64 = var_1a0;
    let var_198: *mut i128;
    let mut var_1e8: *mut i128 = var_198;
    let var_190: i64;
    let var_1e0: i64 = var_190;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1a8, 1);
    let r14_1: *mut i128 = var_1a8;
    let var_1c8: *mut i128 = r14_1;
    let var_1c0: i64 = var_1a0;
    let var_1b8: *mut i128 = var_198;
    let var_1b0: i64 = var_190;
    let mut var_d0: i64;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h43265696f2462bc6(
        &var_d0, arg2);
    var_1a8 = var_198;
    let var_1a0_1: i64 = var_190;
    let var_198_1: *mut i128 = r12;
    let var_190_1: i64 = var_1a0;
    let mut var_188: ();
    memcpy(&var_188, &var_d0, 0xa0);
    let var_c0: i64 = -0x8000000000000000;
    var_d0 = 0;
    let var_a8: i8 = 0;
    let mut var_e8: ();
    std::thread::Builder::spawn_unchecked::hb824ac581027dbd9(&var_e8, &var_d0, &var_1a8);
    core::result::Result$LT$T$C$E$GT$::expect::h12022375ebf47b21(&var_d0, &var_e8);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::hd410c122727f1aa9(
        &var_d0);
    let mut result: *mut c_void;
    let mut rdx_2: i64;
    
    if *arg2.byte_offset(0x30) != -0x8000000000000000
    {
        result = uu_sort::ext_sort::reader_writer::ha45870364be7fd58(arg1, arg2, var_198, var_190, 
            r14_1, var_1a0, arg3, arg4);
    }
    else
    {
        result = uu_sort::ext_sort::reader_writer::h849ad3f081ba95be(arg1, arg2, var_198, var_190, 
            r14_1, var_1a0, arg3, arg4);
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::h46cfb158905bad70(&var_1e8);
    result
}
