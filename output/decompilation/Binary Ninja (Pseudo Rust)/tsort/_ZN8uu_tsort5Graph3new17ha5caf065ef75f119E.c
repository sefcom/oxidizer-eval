
  fn uu_tsort::Graph::new::ha5caf065ef75f119(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: i64 = *arg2;
    let r14: i64 = arg2[1];
    let r12: i64 = arg2[2];
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::hb85c364943414371();
    *arg1 = r15;
    arg1[1] = r14;
    arg1[2] = r12;
    *arg1.byte_offset(0x18) = *data_4eb278;
    *arg1.byte_offset(0x28) = data_4eb288;
    arg1[7] = rax_1;
    arg1[8] = rdx;
    arg1
}
