
  int64_t* uu_pr::recreate_arguments::hde7501ecf1930281(int64_t* arg1, void* arg2, int64_t arg3)

{
    void* const var_150;
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^[-+]\d+.*src/uu/pr/src/pr.rs^[^…");
    void var_68;
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_68, &var_150);
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^[^-]\d*$^-n\s*$\n argument -can…");
    void* var_c0;
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_c0, &var_150);
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^-n\s*$\n argument -cannot speci…");
    void var_a0;
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_a0, &var_150);
    void var_120;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7380502240c976a2(&var_120, arg2, arg3);
    var_150 = arg2;
    void* var_148 = arg2 + arg3 * 0x18;
    void* rax_3;
    int64_t rdx_4;
    rax_3 = itertools::Itertools::find_position::h04a53920b67462d7(&var_150, &var_a0);
    
    if (rdx_4 && rax_3 + 1 < arg3)
    {
        void* rax_5 = (rax_3 + 1) * 3;
        int64_t rsi_5 = *(arg2 + (rax_5 << 3) + 0x10);
        var_150 = 0;
        int64_t var_148_1 = *(arg2 + (rax_5 << 3) + 8);
        int64_t var_138_1 = 0;
        char var_128_1 = 1;
        regex_automata::util::search::Input::set_span::hcd8fa69f9dbde1ae(&var_150);
        int128_t zmm0_1 = var_150;
        int128_t var_d8_1 = rsi_5;
        int128_t var_e8 = rsi_5;
        int128_t var_f8 = zmm0_1;
        void* var_b8;
        regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&var_150, var_c0, 
            var_b8, &var_f8);
        
        if (!(var_150 & 1))
        {
            void var_80;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h2e81c17629bf526a(&var_80, &var_120, rax_3 + 1);
            _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::hd7c807d30f792e21(&var_f8);
            void* var_108 = &*var_e8[8];
            uint64_t (* var_100_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_150 = &data_451320;
            int64_t var_148_2 = 1;
            int64_t var_130_2 = 0;
            void** var_140_2 = &var_108;
            int64_t var_138_2 = 1;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_48, &var_150);
            core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h50ed004e0d36ef9c(&var_f8);
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hb6c6ac49912c548c(&var_120, rax_3 + 1, &var_48);
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hb6c6ac49912c548c(&var_120, rax_3 + 2, &var_80);
        }
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0b8c6871f9c67703(&var_150, &var_120);
    void* var_130_3 = &var_68;
    core::iter::traits::iterator::Iterator::collect::h9a67a3d05b8d56fb(arg1, &var_150);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_a0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_c0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_68);
    return arg1;
}
