
  fn uu_od::byteorder_io::ByteOrder::read_f64::hdb659793fd52688b(arg1: i8, arg2: i64, arg3: i64) -> i512

{
    let rbx: u64;
    let mut result: i512;
    
    if arg1 == 0 || arg1 != 1
    {
        result = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hcc551e0560558125(arg2, arg3, rbx);
        return result;
    }
    
    result =
        _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h4e06a29913649185(
        arg2, arg3, rbx);
    result
}
