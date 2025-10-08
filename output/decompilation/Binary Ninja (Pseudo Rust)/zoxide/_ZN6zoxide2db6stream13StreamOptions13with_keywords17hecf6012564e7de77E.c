
  fn zoxide::db::stream::StreamOptions::with_keywords::hecf6012564e7de77(arg1: *mut i128, arg2: *mut i64, arg3: i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::iter::traits::iterator::Iterator::map::hda1b8e4a70fc589c(arg3);
    let mut var_28: i128;
    core::iter::traits::iterator::Iterator::collect::h346e69444f2181f7(&var_28, 
        core::iter::traits::iterator::Iterator::map::hda1b8e4a70fc589c(rax));
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hef709365aaceeb89(
        arg2);
    let var_18: i64;
    arg2[2] = var_18;
    *arg2 = var_28;
    arg1[5] = *arg2.byte_offset(0x50);
    arg1[4] = *arg2.byte_offset(0x40);
    let zmm0: i128 = *arg2;
    let result: i64 = arg2[2];
    let rcx_1: i64 = arg2[3];
    let zmm1: i128 = *arg2.byte_offset(0x20);
    arg1[3] = *arg2.byte_offset(0x30);
    arg1[2] = zmm1;
    arg1[1] = result;
    *arg1.byte_offset(0x18) = rcx_1;
    *arg1 = zmm0;
    result
}
