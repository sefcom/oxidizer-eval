
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetBasicInfoRequest$GT$::serialize::h0b9495116de8f9c4(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64) -> *mut i32

{
    let mut var_40: i32;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_40, arg3, "GetBasicInfoRequestplaceholderOp…", 0x13, 1);
    let rax: i32 = var_40;
    let var_38: *mut i64;
    let var_30: i8;
    let var_20: i128;
    
    if rax != 0x21
    {
        *arg1.byte_offset(0x20) = var_20;
        let var_2f: i128;
        *arg1.byte_offset(0x11) = var_2f;
        *arg1 = rax;
        let var_3c: i32;
        arg1[1] = var_3c;
        *arg1.byte_offset(8) = var_38;
        arg1[4] = var_30;
    }
    else
    {
        let mut var_50: *mut i64 = var_38;
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0fe0e64abb5f6595(&var_40, &var_50, "placeholderOperatingSystemWindow…", 0xb, arg2);
        
        if var_40 != 0x21
        {
            let zmm0_2: i128 = var_40;
            *arg1.byte_offset(0x20) = var_20;
            *arg1.byte_offset(0x10) = var_30;
            *arg1 = zmm0_2;
        }
        else
        {
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_50, var_30);
        }
    }
    arg1
}
