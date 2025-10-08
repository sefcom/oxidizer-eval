
  fn just::ran::Ran::mutex::heea021f2ce4a14a7(arg1: *mut i32, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_60: i128;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h8c63bddf4155ebcf(&var_60, arg1);
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h0311aa5668c6c0bb(&var_60);
    let mut rax_1: i64;
    let mut rdx_1: u64;
    rax_1 = just::recipe::Recipe::namepath::haa1c710e3a0b6f26(arg2);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_60, rax_1, rdx_1);
    let var_50: i64;
    let var_68: i64 = var_50;
    let mut var_78: i128 = var_60;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h932a11fd9d9692f1(&var_60, 
        &rax[2], &var_78);
    let rax_3: *mut i64 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h2fa49c30783bbe11(&var_60);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_78, arg3, arg4);
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h730f5e9d01a6b5c1(&var_60, 
        rax_3, &var_78);
    let rax_4: *mut i64 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::hfc090e0ca736ac5a(&var_60);
    let rcx: *mut i64 = *rax_4;
    let temp0: i64 = *rcx;
    *rcx += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let result: i64 = *rax_4;
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rdx & 1);
    result
}
