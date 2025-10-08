
  int64_t alacritty::display::damage::RenderDamageIterator::rect_for_line::hcc49616b40cae285(int32_t* arg1, void* arg2, int32_t* arg3)

{
    int32_t rcx = *(arg2 + 0x18);
    int32_t result = *(arg2 + 0x14) - *(arg2 + 0x24);
    int32_t r9 = arg3[2];
    int32_t rdx_3 = (arg3[4] - r9 + 1) * rcx;
    int32_t rsi = *(arg2 + 0x1c);
    int32_t r8_3 = ~*arg3 * rsi + result;
    *arg1 = rcx * r9 + *(arg2 + 0x20);
    arg1[1] = r8_3;
    arg1[2] = rdx_3;
    arg1[3] = rsi;
    return result;
}
