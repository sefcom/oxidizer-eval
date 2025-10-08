
  void* alacritty::display::content::RenderableContent::new::hf4e6e038e845e91d(int64_t* arg1, void* arg2, void* arg3, void* arg4, int128_t* arg5)

{
    int64_t r13 = -0x7fffffffffffffff;
    int64_t var_150;
    int64_t var_140;
    
    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(*arg5, data_4e8640)) != 0xffff)
    {
        void var_78;
        alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(&var_78, arg4, arg5);
        int64_t var_110;
        core::iter::traits::iterator::Iterator::collect::h1825dbe1f36682d5(&var_110, &var_78);
        r13 = var_110;
        int64_t var_108;
        var_150 = var_108;
        int64_t var_100;
        var_140 = var_100;
    }
    
    char rax_3 = arg5[0x116];
    int32_t var_f8;
    alacritty_terminal::term::RenderableContent::new::hc5b72ca633d74e55(&var_f8, arg4);
    char var_152 = 4;
    char var_b0;
    
    if (var_b0 != 4 && !*(arg3 + 0x836)
        && !alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg5) && *(arg3 + 0x2d0) == 2)
    {
        if (!*(arg4 + 0x6e2))
            var_152 = 3;
        
        if (*(arg4 + 0x6e2) || !*(arg2 + 0x3d9))
            var_152 = var_b0;
    }
    
    int32_t var_b8;
    int32_t r15_2 = var_b8 + var_f8;
    
    if (var_b8 + var_f8 < 0)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* var_138;
    int64_t var_130;
    int64_t var_128;
    int64_t r13_1;
    
    if (!*(arg3 + 0x478))
        r13_1 = -0x7fffffffffffffff;
    else
    {
        alacritty::display::hint::HintState::update_matches::h4cd609f91e40cc38(arg3 + 0x418, arg4);
        var_130 = *(arg3 + 0x438);
        var_128 = *(arg3 + 0x440);
        var_138 = arg3 + 0x448;
        r13_1 = -0x8000000000000000;
    }
    
    void* r15_3 = nullptr;
    
    if (rax_3 != 2)
        r15_3 = &arg5[0x114];
    
    alacritty::display::content::RenderableCursor::new_hidden::h277801ded5827119(&arg1[0x19]);
    int128_t var_88;
    *(arg1 + 0xb8) = var_88;
    int128_t var_98;
    *(arg1 + 0xa8) = var_98;
    int128_t var_a8;
    *(arg1 + 0x98) = var_a8;
    *(arg1 + 0x88) = var_b8;
    int128_t zmm0_1 = var_f8;
    int128_t var_c8;
    *(arg1 + 0x78) = var_c8;
    int128_t var_d8;
    *(arg1 + 0x68) = var_d8;
    int128_t var_e8;
    *(arg1 + 0x58) = var_e8;
    *(arg1 + 0x48) = zmm0_1;
    arg1[0x23] = var_152;
    arg1[0x20] = r15_2;
    int64_t var_c0;
    arg1[0x21] = var_c0;
    *arg1 = r13;
    arg1[1] = var_150;
    arg1[2] = var_140;
    arg1[3] = 0;
    arg1[4] = r13_1;
    arg1[5] = var_130;
    arg1[6] = var_128;
    arg1[7] = 0;
    arg1[8] = var_138;
    arg1[0x1d] = arg2;
    arg1[0x1e] = arg3 + 0x838;
    arg1[0x22] = r15_3;
    arg1[0x1f] = arg3 + 0x798;
    return arg3 + 0x798;
}
