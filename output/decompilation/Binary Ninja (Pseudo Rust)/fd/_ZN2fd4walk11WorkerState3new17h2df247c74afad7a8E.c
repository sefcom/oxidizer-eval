
  fn fd::walk::WorkerState::new::h2df247c74afad7a8(arg1: *mut c_void, arg2: *mut i128, arg3: i64) -> i64

{
    let mut var_40: i64 = 1;
    let var_38: i64 = 1;
    let var_30: i8 = 0;
    let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::h22579eb5831378dc(&var_40);
    let var_48: u64 = rax;
    let rax_1: u64 = alloc::boxed::Box$LT$T$GT$::new::h22579eb5831378dc(&var_40);
    memcpy(arg1, arg3, 0x1f8);
    *arg1.byte_offset(0x1f8) = *arg2;
    let result: i64 = arg2[1];
    *arg1.byte_offset(0x208) = result;
    *arg1.byte_offset(0x210) = rax;
    *arg1.byte_offset(0x218) = rax_1;
    result
}
