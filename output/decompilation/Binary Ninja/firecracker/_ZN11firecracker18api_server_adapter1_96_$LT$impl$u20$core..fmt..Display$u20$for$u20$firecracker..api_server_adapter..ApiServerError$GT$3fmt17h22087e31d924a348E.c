
  int64_t firecracker::api_server_adapter::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..api_server_adapter..ApiServerError$GT$::fmt::h22087e31d924a348(char* arg1, int64_t arg2, int64_t arg3)

{
    char rax = *arg1 - 0x1c;
    char rcx = 4;
    
    if (rax < 4)
        rcx = rax;
    
    void* var_48;
    void** var_40;
    char const (** const var_30)[0xca];
    int64_t var_28;
    int64_t var_28_1;
    
    switch (rcx)
    {
        case 0:
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            int64_t (* var_38)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab697a8642e9c9e1;
            var_30 = &data_7a4338;
            var_28 = 2;
            break;
        }
        case 1:
        {
            var_48 = &arg1[1];
            var_40 = &var_48;
            int64_t (* var_38_4)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h0d8937d31288cb39;
            var_30 = &data_7a4358;
            var_28_1 = 1;
            break;
        }
        case 2:
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            int64_t (* var_38_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6d91c61c63b782e8;
            var_30 = &data_7a4368;
            var_28 = 2;
            break;
        }
        case 3:
        {
            var_48 = &arg1[8];
            var_40 = &var_48;
            int64_t (* var_38_3)(int64_t* arg1) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h584920b91f85c053;
            var_30 = &data_7a4388;
            var_28_1 = 1;
            break;
        }
        case 4:
        {
            var_48 = arg1;
            var_40 = &var_48;
            int64_t (* var_38_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3a3e8366703feb;
            var_30 = &data_7a4398;
            var_28_1 = 1;
            break;
        }
    }
    
    int64_t var_10 = 0;
    void*** var_20 = &var_40;
    int64_t var_18 = 1;
    return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg2, arg3, &var_30);
}
