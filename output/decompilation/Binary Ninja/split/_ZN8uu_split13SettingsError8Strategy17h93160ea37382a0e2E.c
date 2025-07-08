
  int64_t uu_split::SettingsError::Strategy::h93160ea37382a0e2(int128_t* arg1, int128_t* arg2)

{
    int64_t result = arg2[2];
    arg1[2] = result;
    int128_t zmm0 = *arg2;
    arg1[1] = arg2[1];
    *arg1 = zmm0;
    return result;
}
