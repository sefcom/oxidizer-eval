
  int64_t alacritty::display::damage::RenderDamageIterator::overdamage::h06421bbc55b85a99(int64_t* arg1, void* arg2, int32_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t rbp = *(arg2 + 0x18);
    int32_t rax_1 = core::cmp::Ord::max::h485505c56320f468(*arg3 - rbp, 0);
    *arg3 = rax_1;
    arg3[2] = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(*(arg2 + 0x10) - rax_1, 0), rbp * 2 + arg3[2]);
    int32_t rbp_3 = *(arg2 + 0x1c);
    int32_t rax_8 =
        core::cmp::Ord::max::h485505c56320f468(arg3[1] - (((rbp_3 >> 0x1f) + rbp_3) >> 1), 0);
    arg3[1] = rax_8;
    arg3[3] = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(*(arg2 + 0x14) - rax_8, 0), rbp_3 + arg3[3]);
    *arg1 = *arg3;
    arg1[1] = arg3[2];
    int32_t result = arg3[3];
    *(arg1 + 0xc) = result;
    return result;
}
