
  int512_t uu_od::byteorder_io::ByteOrder::read_f32::h11afc518b6af4755(char arg1, int64_t arg2, int64_t arg3)

{
    int512_t result;
    
    if (!arg1 || arg1 != 1)
    {
        result = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::ha761c22cf500ee99(arg2, arg3);
        return result;
    }
    
    result =
        _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::heb7f0e5942a13c7e(
        arg2, arg3);
    return result;
}
