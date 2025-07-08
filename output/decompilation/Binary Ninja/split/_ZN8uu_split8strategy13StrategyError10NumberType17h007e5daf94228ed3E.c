
  int512_t uu_split::strategy::StrategyError::NumberType::h007e5daf94228ed3(int64_t* arg1, int128_t* arg2)

{
    int128_t result = *arg2;
    *(arg1 + 0x18) = arg2[1];
    *(arg1 + 8) = result;
    *arg1 = 2;
    return result;
}
