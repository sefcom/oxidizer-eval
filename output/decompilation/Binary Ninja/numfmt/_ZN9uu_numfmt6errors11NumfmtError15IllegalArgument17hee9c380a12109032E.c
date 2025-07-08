
  int64_t uu_numfmt::errors::NumfmtError::IllegalArgument::hee9c380a12109032(int64_t* arg1, int128_t* arg2)

{
    int64_t result = arg2[1];
    arg1[3] = result;
    *(arg1 + 8) = *arg2;
    *arg1 = 1;
    return result;
}
