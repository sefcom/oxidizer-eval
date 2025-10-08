
  void uu_wc::Input::as_borrowed::h5b6a21267d9a4cf1(int128_t* arg1, int64_t* arg2)

{
    if (*arg2 == -0x7fffffffffffffff)
    {
        arg1[1] = arg2[2];
        *arg1 = *arg2;
        return;
    }
    
    int128_t zmm0 = *(arg2 + 8);
    *arg1 = -0x8000000000000000;
    *(arg1 + 8) = zmm0;
}
