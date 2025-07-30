
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..PointerWidth$GT$::serialize::h41945df7b7138b6d(arg1: *mut i32, arg2: *mut i8, arg3: *mut i64) -> *mut i32

{
    let mut rsi: *mut i64;
    let mut rdi: *mut i32;
    let mut r8: i64;
    let mut r9: *const i8;
    
    if *arg2 == 0
    {
        let var_18_1: i64 = 5;
        r9 = "Bit32Bit64GetBasicInfoResponseve…";
        rdi = arg1;
        rsi = arg3;
        r8 = 0;
    }
    else
    {
        let var_18: i64 = 5;
        r9 = "Bit64GetBasicInfoResponseversion…";
        rdi = arg1;
        rsi = arg3;
        r8 = 1;
    }
    
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h6d2e4e9ce69f5df2(rdi, rsi, "PointerWidthBit32Bit64GetBasicIn…", 0xc, r8, r9, 5);
    arg1
}
