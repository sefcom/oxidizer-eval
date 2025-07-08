
  int512_t uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(char arg1, int64_t arg2, int64_t arg3)

{
    int32_t rax_2;
    
    if (!arg1 || arg1 != 1)
        rax_2 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(arg2, arg3);
    else
        rax_2 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(arg2, arg3);
    
    int512_t result;
    result = rax_2;
    return result;
}
