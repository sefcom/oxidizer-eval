
  void** uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(void** arg1, void* arg2)

{
    void* r14 = arg2;
    int64_t var_28;
    _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..peekreader..PeekRead$GT$::peek_read::h4ebaa1be718ea78e(&var_28, *(arg2 + 0x18), *(r14 + 8), *(r14 + 0x10), *(r14 + 0x20));
    char rax;
    void* var_20;
    
    if (!var_28)
    {
        *(r14 + 0x28) = var_20;
        int64_t var_18;
        *(r14 + 0x30) = var_18;
        rax = *(r14 + 0x38);
        arg1[1] = var_20;
        arg1[2] = var_18;
    }
    else
    {
        rax = 3;
        r14 = var_20;
    }
    *arg1 = r14;
    arg1[3] = rax;
    return arg1;
}
