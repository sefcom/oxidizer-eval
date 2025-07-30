
  fn spyware::communication::serialization::extract_msg_type_and_length::h40fb0f3bb65520f5(arg1: i32) -> u64

{
    let mut var_34: i32 = arg1;
    let mut var_30: i64 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd33b46b7e6d41613(&var_34);
    let var_28: i64 = 4;
    let var_20: i64 = 0;
    let mut var_18: ();
    byteorder::io::ReadBytesExt::read_u32::hc862b0b3b54702e5(&var_18, &var_30);
    core::result::Result$LT$T$C$E$GT$::unwrap::hd22533b134cbc616(&var_18)
}
