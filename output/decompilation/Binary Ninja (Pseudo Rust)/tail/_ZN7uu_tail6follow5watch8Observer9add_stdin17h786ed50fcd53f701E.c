
  fn uu_tail::follow::watch::Observer::add_stdin::h786ed50fcd53f701(arg1: *mut c_void, arg2: i64, arg3: u64, arg4: i64) -> u64

{
    let rbx: i64 = arg4;
    let rax: bool = *arg1.byte_offset(0x8e);
    arg4 = rax != 2;
    
    if (arg4 & (rax & 1) == 0) == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(rbx, &data_573ad0);
        return 0;
    }
    
    let mut var_48: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_48, "/dev/stdinToo many open files ca…", 0xa);
    let r13_1: i64 = var_48;
    let var_40: *mut i8;
    let var_38: u64;
    let mut result: u64;
    let mut rdx_1: i64;
    result = uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(arg1, var_40, var_38, 
        arg2, arg3, rbx, &data_573ad0, 1);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r13_1, var_40);
    result
}
