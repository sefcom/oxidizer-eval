
  fn alacritty::message_bar::MessageBuffer::pop::he772faaccee7827c(arg1: *mut i64) -> i64

{
    let mut var_68: i64;
    let result: i64 =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hdeb06d22186f8c86(&var_68, 
        arg1);
    
    if 0 + -(var_68)
    {
        return result;
    }
    
    let var_38: i64;
    let var_78_1: i64 = var_38;
    let var_48: i128;
    let var_88_1: i128 = var_48;
    let var_58: i128;
    let var_98_1: i128 = var_58;
    let mut var_a8: i128 = var_68;
    let r14_1: i64 = arg1[3];
    let rax_1: i64 = core::slice::index::range::h4cda8274961093f5(r14_1);
    arg1[3] = 0;
    let mut var_d8: *mut i64 = arg1;
    let var_d0_1: i64 = rax_1;
    let var_c8_1: i64 = 0;
    let var_c0_1: i64 = r14_1 - rax_1;
    let var_b8_1: i64 = rax_1;
    let var_b0_1: *mut i128 = &var_a8;
    let mut var_30: i128;
    core::iter::traits::iterator::Iterator::collect::h6f9c7b745cbe0808(&var_30, &var_d8);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$alacritty..message_bar..Message$GT$$GT$::he283a9226652e93b(arg1);
    let zmm0_2: i128 = var_30;
    let var_20: i128;
    *arg1.byte_offset(0x10) = var_20;
    *arg1 = zmm0_2;
    core::ptr::drop_in_place$LT$alacritty..message_bar..Message$GT$::hcf82df9339b7ff8a(&var_a8)
}
