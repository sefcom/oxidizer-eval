
  uint64_t spyware::communication::serialization::extract_msg_type_and_length::h40fb0f3bb65520f5(int32_t arg1)

{
    int32_t var_34 = arg1;
    int64_t var_30 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd33b46b7e6d41613(&var_34);
    int64_t var_28 = 4;
    int64_t var_20 = 0;
    void var_18;
    byteorder::io::ReadBytesExt::read_u32::hc862b0b3b54702e5(&var_18, &var_30);
    return core::result::Result$LT$T$C$E$GT$::unwrap::hd22533b134cbc616(&var_18);
}
