
  int64_t sub_688c09(int64_t arg1, void* arg2, int64_t arg3, uint64_t arg4, int128_t* arg5 @ rbx, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11, int64_t arg12)

{
    *(arg2 + 8);
    *(arg2 + 0x10);
    just::search::Search::clean::hd91959d13e0c6030(&arg_30, arg3, arg4);
    *(arg2 + 0x20);
    *(arg2 + 0x28);
    just::search::Search::clean::hd91959d13e0c6030(&arg_50, arg3, arg4);
    int128_t zmm0 = arg_30;
    __return_addr = zmm0;
    int128_t zmm1 = arg_50;
    arg5[2] = *zmm1[8];
    *(arg5 + 0x28) = arg7;
    arg5[1] = arg6;
    int64_t result = zmm1;
    *(arg5 + 0x18) = result;
    *arg5 = zmm0;
    return result;
}
