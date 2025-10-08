
  int64_t* just::recipe::Recipe$LT$D$GT$::confirm::hf942a5381005005c(int16_t* arg1, void* arg2)

{
    int64_t* result = just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg2 + 0xd8, 0);
    
    if (!result || *result != -0x7fffffffffffffff)
    {
        *arg1 = 0x138;
        return result;
    }
    
    void* var_60;
    char const (** const rax)[0x97];
    
    if (result[1] != -0x8000000000000000)
    {
        var_60 = &result[1];
        int64_t (* var_58_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        rax = &data_82ddb0;
    }
    else
    {
        var_60 = arg2 + 0x90;
        int64_t (* var_58_1)(void* arg1, int64_t* arg2) =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        rax = &data_830b50;
    }
    
    char const (** const var_48)[0x97] = rax;
    int64_t var_40_1 = 2;
    int64_t var_28_1 = 0;
    void** var_38_1 = &var_60;
    int64_t var_30_1 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_48);
    var_60 = nullptr;
    int64_t var_58_3 = 1;
    int64_t var_50_1 = 0;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    var_48 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    char rax_2;
    int64_t rdx_1;
    rax_2 = std::io::stdio::Stdin::read_line::h4f274dfaf65c22af(&var_48, &var_60);
    
    if (!(rax_2 & 1))
    {
        char* rax_3;
        uint64_t rdx_2;
        rax_3 =
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hfd0add22eadc0a63(var_58_3, var_50_1);
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_48, rax_3, rdx_2);
        char rax_4 = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_40_1, var_38_1, "y===> Running recipe `#### ] eva…", 1))
            rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_40_1, var_38_1, "yesAutomatically confirm all rec…", 3);
        
        *(arg1 + 1) = rax_4;
        *arg1 = 0x38;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_48);
    }
    else
    {
        *arg1 = 0x1a;
        *(arg1 + 8) = rdx_1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_60);
}
