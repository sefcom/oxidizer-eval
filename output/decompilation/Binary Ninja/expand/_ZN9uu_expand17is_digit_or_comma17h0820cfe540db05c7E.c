
  int64_t uu_expand::is_digit_or_comma::h0820cfe540db05c7(int32_t arg1) __pure

{
    int32_t result;
    result = arg1 == 0x2c;
    result |= arg1 - 0x30 < 0xa;
    return result;
}
