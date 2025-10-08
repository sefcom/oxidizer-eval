
  int64_t alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(int64_t* arg1, int64_t arg2, int64_t arg3, int128_t* arg4, int32_t* arg5, int128_t* arg6, char arg7, char arg8)

{
    int64_t var_b70 = arg3;
    int32_t rax = *(arg6 + 0xf);
    char var_ae8[0x10] = *arg6;
    *arg6 = var_ae8;
    *(arg6 + 0xf) = rax;
    *(arg6 + 0x13) = arg7 ^ 1;
    char var_a78[0x10] = arg4[7];
    char var_a88[0x10] = arg4[6];
    char var_a98[0x10] = arg4[5];
    char var_aa8[0x10] = arg4[4];
    char var_ab8[0x10] = arg4[3];
    char var_ac8[0x10] = arg4[2];
    int32_t var_ad9;
    *var_ad9[1] = arg4[1];
    var_ae8 = *arg4;
    int64_t rdx_1 = *(arg4 + 0x88);
    int64_t var_6b8 = *(arg4 + 0x81);
    arg4[7] = var_a78;
    arg4[6] = var_a88;
    arg4[5] = var_a98;
    arg4[4] = var_aa8;
    char zmm0[0x10] = var_ae8;
    arg4[3] = var_ab8;
    arg4[2] = var_ac8;
    arg4[1] = *var_ad9[1];
    *arg4 = zmm0;
    arg4[8] = arg8 ^ 1;
    *(arg4 + 0x81) = var_6b8;
    *(arg4 + 0x88) = rdx_1;
    void var_3e8;
    regex_automata::hybrid::dfa::Builder::new::h1f6dce39aa80c2a3(&var_3e8);
    memcpy(&var_6b8, arg4, 0x90);
    void* rax_5 = regex_automata::hybrid::dfa::Builder::syntax::h27bdc6c9eb3e9ff6(
        regex_automata::hybrid::dfa::Builder::configure::h0f0dde0c0024ff61(&var_3e8, &var_6b8), 
        arg5);
    int64_t var_6a8 = arg6[1];
    var_6b8 = *arg6;
    regex_automata::hybrid::dfa::Builder::build::heb7f8df02e219de7(&var_ae8, 
        regex_automata::hybrid::dfa::Builder::thompson::h53a4ef0c8d7720aa(rax_5, &var_6b8), arg2);
    int64_t r14 = var_ae8[0];
    int64_t r15_1 = var_ae8[8];
    uint32_t temp0_1 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_ae8, data_4e8640));
    char var_b68[0x10] = *var_ad9[1];
    
    if (temp0_1 == 0xffff)
    {
        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h870e45f67f132113(&var_b68);
        arg1[1] = 0;
        *arg1 = 2;
        return 
            core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Builder$GT$::h91a92403cb6f6732(
            &var_3e8);
    }
    
    void var_a58;
    void var_628;
    memcpy(&var_628, &var_a58, 0x240);
    var_6a8 = var_b68;
    char var_698_1[0x10] = var_ac8;
    char var_688_1[0x10] = var_ab8;
    char var_678_1[0x10] = var_aa8;
    char var_668_1[0x10] = var_a98;
    char var_658_1[0x10] = var_a88;
    char var_648_1[0x10] = var_a78;
    char var_a68[0x10];
    char var_638_1[0x10] = var_a68;
    int64_t var_6b1 = r15_1;
    var_6b8 = r14;
    core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Builder$GT$::h91a92403cb6f6732(
        &var_3e8);
    void var_190;
    regex_automata::hybrid::dfa::DFA::create_cache::h11d0cec166535f16(&var_190, &var_6b8);
    memcpy(&var_ae8, &var_6b8, 0x2d0);
    void var_818;
    memcpy(&var_818, &var_190, 0x160);
    memcpy(arg1, &var_ae8, 0x430);
    arg1[0x86] = arg7;
    *(arg1 + 0x431) = arg8;
    return arg8;
}
