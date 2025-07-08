
  fn uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(arg1: i8, arg2: i64, arg3: i64) -> i512

{
    let mut rax_2: u64;
    let rbx: u64;
    
    if arg1 == 0 || arg1 != 1
    {
        rax_2 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(arg2, arg3, rbx);
    }
    else
    {
        rax_2 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(arg2, arg3, rbx);
    }
    let mut result: i512;
    result = rax_2;
    result
}
