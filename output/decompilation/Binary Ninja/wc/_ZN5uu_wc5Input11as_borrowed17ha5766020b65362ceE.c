
  void uu_wc::Input::as_borrowed::ha5766020b65362ce(int64_t* arg1, int64_t* arg2)

{
    if (*arg2 == -0x7fffffffffffffff)
    {
        arg1[1] = arg2[1];
        *arg1 = -0x7fffffffffffffff;
        return;
    }
    
    *(arg1 + 8) = *(arg2 + 8);
    *arg1 = -0x8000000000000000;
}
