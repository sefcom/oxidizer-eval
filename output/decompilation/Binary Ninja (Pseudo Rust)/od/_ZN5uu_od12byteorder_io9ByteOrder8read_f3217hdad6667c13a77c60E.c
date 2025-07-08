
  fn uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(arg1: i8, arg2: i64, arg3: i64) -> i512

{
    let mut rax_2: i32;
    
    if arg1 == 0 || arg1 != 1
    {
        rax_2 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(arg2, arg3);
    }
    else
    {
        rax_2 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(arg2, arg3);
    }
    
    let mut result: i512;
    result = rax_2;
    result
}
