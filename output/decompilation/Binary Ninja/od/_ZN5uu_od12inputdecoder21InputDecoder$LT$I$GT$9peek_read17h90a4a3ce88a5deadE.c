
  int64_t uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h90a4a3ce88a5dead(void** arg1, void* arg2)

{
    void* r14 = arg2;
    int32_t var_28;
    _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..peekreader..PeekRead$GT$::peek_read::hd9dceb6fabd706b9(&var_28, *(arg2 + 0x18), *(r14 + 8), *(r14 + 0x10), *(r14 + 0x20));
    char result;
    void* var_20;
    
    if (var_28 != 1)
    {
        *(r14 + 0x28) = var_20;
        int64_t var_18;
        *(r14 + 0x30) = var_18;
        result = *(r14 + 0x38);
        arg1[1] = var_20;
        arg1[2] = var_18;
    }
    else
    {
        result = 3;
        r14 = var_20;
    }
    *arg1 = r14;
    arg1[3] = result;
    return result;
}
