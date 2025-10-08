
  int512_t uu_od::byteorder_io::ByteOrder::read_f64::hdb659793fd52688b(char arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rbx;
    int512_t result;
    
    if (!arg1 || arg1 != 1)
    {
        result = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hcc551e0560558125(arg2, arg3, rbx);
        return result;
    }
    
    result =
        _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h4e06a29913649185(
        arg2, arg3, rbx);
    return result;
}
