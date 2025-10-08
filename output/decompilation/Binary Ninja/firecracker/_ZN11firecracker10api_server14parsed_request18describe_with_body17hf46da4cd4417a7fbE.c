
  int64_t firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    char var_a1 = arg2;
    int64_t var_70 = arg3;
    int64_t var_68 = arg4;
    char var_a0;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_a0, arg5, arg6);
    char temp0 = var_a0;
    uint64_t rdx_1 = 0x16;
    uint64_t var_90;
    
    if (!temp0)
        rdx_1 = var_90;
    void* const rsi_1 = "inconvertible to UTF-8 with body…";
    void* var_98;
    
    if (!temp0)
        rsi_1 = var_98;
    void var_30;
    uint64_t rdx_2 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_30, rsi_1, rdx_1);
    var_a0 = &var_a1;
    int64_t (* var_98_1)(char* arg1, int64_t* arg2) =
        _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
    int64_t* var_90_1 = &var_70;
    int64_t (* var_88)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
    void* var_80 = &var_30;
    int64_t (* var_78)(void* arg1, int64_t* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
    void* const var_60 = &data_7a37e0;
    int64_t var_58 = 3;
    int64_t var_40 = 0;
    char* var_50 = &var_a0;
    int64_t var_48 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(arg1, 0, rdx_2, &var_60);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_30);
}
