
  int64_t alacritty_terminal::term::Term$LT$T$GT$::new::h9eaed86de6be637f(int128_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, int128_t* arg5)

{
    void var_5c8;
    alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(&var_5c8, arg3, arg4, 
        *(arg2 + 0x18));
    void var_518;
    alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(&var_518, arg3, arg4, 0);
    int64_t var_5f8;
    int64_t var_538;
    core::iter::traits::iterator::Iterator::collect::h5d5fd2af4f280153(&var_5f8, var_538);
    int64_t rax = var_5f8;
    alacritty_terminal::term::TermDamageState::new::h0fc83946f2a9c521(&var_5f8, arg4);
    int64_t rax_2 = var_5f8;
    int64_t rax_3 = 7;
    void var_464;
    
    while (true)
    {
        void var_480;
        *(&var_480 + (rax_3 << 2)) = 0;
        void var_47c;
        *(&var_47c + (rax_3 << 2)) = 0;
        void var_478;
        *(&var_478 + (rax_3 << 2)) = 0;
        void var_474;
        *(&var_474 + (rax_3 << 2)) = 0;
        void var_470;
        *(&var_470 + (rax_3 << 2)) = 0;
        
        if (rax_3 == 0x10f)
            break;
        
        void var_46c;
        *(&var_46c + (rax_3 << 2)) = 0;
        void var_468;
        *(&var_468 + (rax_3 << 2)) = 0;
        *(&var_464 + (rax_3 << 2)) = 0;
        rax_3 += 8;
    }
    
    *(arg1 + 0x6e2) = 0;
    arg1[0x29] = 0;
    *(arg1 + 0x298) = 0;
    arg1[0x28] = 2;
    memcpy(arg1 + 0x28, &var_5c8, 0xb0);
    memcpy(arg1 + 0xd8, &var_518, 0xb0);
    *(arg1 + 0x6e3) = 0;
    *(arg1 + 0x188) = rax;
    int64_t var_5f0;
    arg1[0x19] = var_5f0;
    int64_t var_5e8;
    *(arg1 + 0x198) = var_5e8;
    *(arg1 + 0x6dc) = 0x28081;
    arg1[0x2a] = 0;
    int32_t var_530;
    *(arg1 + 0x2a4) = var_530;
    memcpy(arg1 + 0x2a8, &var_464, 0x434);
    arg1[0x6e] = 2;
    int128_t zmm1 = arg5[1];
    *arg1 = *arg5;
    arg1[1] = zmm1;
    arg1[2] = arg5[2];
    arg1[0x24] = -0x8000000000000000;
    arg1[0x1a] = 0;
    *(arg1 + 0x1a8) = 8;
    arg1[0x1b] = {0};
    arg1[0x1c] = 1;
    *(arg1 + 0x1c8) = {0};
    *(arg1 + 0x1d8) = 1;
    arg1[0x1e] = 0;
    *(arg1 + 0x1e8) = rax_2;
    arg1[0x1f] = var_5f0;
    *(arg1 + 0x1f8) = var_5e8;
    int128_t var_5d8;
    *(arg1 + 0x208) = var_5d8;
    zmm1 = arg2[1];
    *(arg1 + 0x218) = *arg2;
    *(arg1 + 0x228) = zmm1;
    int64_t result = arg2[2];
    *(arg1 + 0x238) = result;
    return result;
}
