
  int512_t uu_split::SettingsError::Suffix::h9457c64c7ef18357(int64_t* arg1, int128_t* arg2)

{
    int128_t result = *arg2;
    *(arg1 + 0x18) = arg2[1];
    *(arg1 + 8) = result;
    *arg1 = 4;
    return result;
}
