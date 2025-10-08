
  fn alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rbx: *mut i128 = arg1;
    arg1[5] = arg2[1];
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(arg1);
    let result: i64 = arg2[1];
    rbx[1] = result;
    *rbx = *arg2;
    *rbx.byte_offset(0x18) = 0;
    result
}
