
  int64_t alacritty::message_bar::MessageBuffer::pop::he772faaccee7827c(int64_t* arg1)

{
    int64_t var_68;
    int64_t result =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hdeb06d22186f8c86(&var_68, 
        arg1);
    
    if (0 + -(var_68))
        return result;
    
    int64_t var_38;
    int64_t var_78_1 = var_38;
    int128_t var_48;
    int128_t var_88_1 = var_48;
    int128_t var_58;
    int128_t var_98_1 = var_58;
    int128_t var_a8 = var_68;
    int64_t r14_1 = arg1[3];
    int64_t rax_1 = core::slice::index::range::h4cda8274961093f5(r14_1);
    arg1[3] = 0;
    int64_t* var_d8 = arg1;
    int64_t var_d0_1 = rax_1;
    int64_t var_c8_1 = 0;
    int64_t var_c0_1 = r14_1 - rax_1;
    int64_t var_b8_1 = rax_1;
    int128_t* var_b0_1 = &var_a8;
    int128_t var_30;
    core::iter::traits::iterator::Iterator::collect::h6f9c7b745cbe0808(&var_30, &var_d8);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$alacritty..message_bar..Message$GT$$GT$::he283a9226652e93b(arg1);
    int128_t zmm0_2 = var_30;
    int128_t var_20;
    *(arg1 + 0x10) = var_20;
    *arg1 = zmm0_2;
    return core::ptr::drop_in_place$LT$alacritty..message_bar..Message$GT$::hcf82df9339b7ff8a(
        &var_a8);
}
