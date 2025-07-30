
  int128_t* flealib::fileencrypter::FileEncrypter::new::h1bba59f4d3416534(int128_t* arg1, int64_t* arg2)

{
    int128_t* rax = arg2[1];
    int64_t rcx = arg2[2];
    int64_t var_48 = rcx;
    
    if (rcx != 0x20)
    {
        int64_t var_40 = 0;
        core::panicking::assert_failed::h7c645b2ace17315c(0, &var_48, " ", &var_40);
        /* no return */
    }
    
    int128_t zmm0 = *rax;
    arg1[1] = rax[1];
    *arg1 = zmm0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
    return arg1;
}
