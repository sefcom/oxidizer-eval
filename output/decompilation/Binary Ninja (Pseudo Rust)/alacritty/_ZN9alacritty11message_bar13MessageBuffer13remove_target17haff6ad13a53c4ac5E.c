
  fn alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(arg1: *mut i128) -> i64

{
    let r12: i64 = *arg1.byte_offset(0x18);
    let rax: i64 = core::slice::index::range::h4cda8274961093f5(r12);
    *arg1.byte_offset(0x18) = 0;
    let mut var_78: *mut i128 = arg1;
    let var_70: i64 = rax;
    let var_68: i64 = 0;
    let var_60: i64 = r12 - rax;
    let var_58: i64 = rax;
    let rsi: i64;
    let var_50: i64 = rsi;
    let rdx: i64;
    let var_48: i64 = rdx;
    let mut var_40: i128;
    core::iter::traits::iterator::Iterator::collect::h79312c269d158583(&var_40, &var_78);
    let result: i64 = core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$alacritty..message_bar..Message$GT$$GT$::he283a9226652e93b(arg1);
    let zmm0: i128 = var_40;
    let var_30: i128;
    arg1[1] = var_30;
    *arg1 = zmm0;
    result
}
