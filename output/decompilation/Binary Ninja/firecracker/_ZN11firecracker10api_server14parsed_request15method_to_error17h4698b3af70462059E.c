
  int64_t firecracker::api_server::parsed_request::method_to_error::h4698b3af70462059(int64_t* arg1, char arg2)

{
    int128_t var_28;
    uint64_t rdx;
    char const* const rsi;
    int64_t* rdi;
    
    if (!arg2)
    {
        rsi = "GET request cannot have a body.s…";
        rdi = &var_28;
        rdx = 0x1f;
    }
    else if (arg2 != 1)
    {
        rsi = "Empty PATCH request.Empty PUT re…";
        rdi = &var_28;
        rdx = 0x14;
    }
    else
    {
        rsi = "Empty PUT request.GET request ca…";
        rdi = &var_28;
        rdx = 0x12;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(rdi, rsi, rdx);
    arg1[1] = 0x301;
    arg1[3] = *var_28[8];
    int64_t result;
    arg1[4] = result;
    int128_t var_46;
    *(arg1 + 0xa) = var_46;
    *arg1 = 1;
    return result;
}
