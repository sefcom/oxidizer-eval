
  int64_t uu_unexpand::is_digit_or_comma::h09a6b8f657e24bab(int32_t arg1) __pure

{
    int32_t result;
    result = arg1 == 0x2c;
    result |= arg1 - 0x30 < 0xa;
    return result;
}
