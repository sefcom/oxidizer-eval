
  int512_t uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(char arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rax_2;
    uint64_t rbx;
    
    if (!arg1 || arg1 != 1)
        rax_2 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(arg2, arg3, rbx);
    else
        rax_2 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(arg2, arg3, rbx);
    int512_t result;
    result = rax_2;
    return result;
}
