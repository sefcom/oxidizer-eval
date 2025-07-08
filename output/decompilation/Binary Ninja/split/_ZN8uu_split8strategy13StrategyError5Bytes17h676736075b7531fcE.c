
  int64_t* uu_split::strategy::StrategyError::Bytes::h676736075b7531fc(int64_t* arg1, int128_t* arg2)

{
    int128_t zmm0 = *arg2;
    *(arg1 + 0x18) = arg2[1];
    *(arg1 + 8) = zmm0;
    *arg1 = 1;
    return arg1;
}
