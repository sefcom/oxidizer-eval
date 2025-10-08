
  int64_t alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(int128_t* arg1)

{
    int64_t r12 = *(arg1 + 0x18);
    int64_t rax = core::slice::index::range::h4cda8274961093f5(r12);
    *(arg1 + 0x18) = 0;
    int128_t* var_78 = arg1;
    int64_t var_70 = rax;
    int64_t var_68 = 0;
    int64_t var_60 = r12 - rax;
    int64_t var_58 = rax;
    int64_t rsi;
    int64_t var_50 = rsi;
    int64_t rdx;
    int64_t var_48 = rdx;
    int128_t var_40;
    core::iter::traits::iterator::Iterator::collect::h79312c269d158583(&var_40, &var_78);
    int64_t result = core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$alacritty..message_bar..Message$GT$$GT$::he283a9226652e93b(arg1);
    int128_t zmm0 = var_40;
    int128_t var_30;
    arg1[1] = var_30;
    *arg1 = zmm0;
    return result;
}
