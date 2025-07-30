
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..PointerWidth$GT$::serialize::h41945df7b7138b6d(int32_t* arg1, char* arg2, int64_t* arg3)

{
    int64_t* rsi;
    int32_t* rdi;
    int64_t r8;
    char const* const r9;
    
    if (!*arg2)
    {
        int64_t var_18_1 = 5;
        r9 = "Bit32Bit64GetBasicInfoResponseve…";
        rdi = arg1;
        rsi = arg3;
        r8 = 0;
    }
    else
    {
        int64_t var_18 = 5;
        r9 = "Bit64GetBasicInfoResponseversion…";
        rdi = arg1;
        rsi = arg3;
        r8 = 1;
    }
    
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h6d2e4e9ce69f5df2(rdi, rsi, "PointerWidthBit32Bit64GetBasicIn…", 0xc, r8, r9, 5);
    return arg1;
}
