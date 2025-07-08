
  int64_t* uu_pr::recreate_arguments::hbe43c308ac861d0c(int64_t* arg1, int128_t* arg2, int64_t arg3)

{
    int128_t* const var_188;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^[-+]\d+.*src/uu/pr/src/pr.rs^[^…");
    void var_78;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_78, &var_188);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^[^-]\d*$^-n\s*$\n argument -can…");
    void* var_f8;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_f8, &var_188);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^-n\s*$\n argument -cannot speci…");
    void var_c0;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_c0, &var_188);
    void var_150;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1f2362dded9f9c75(&var_150, arg2, 
        arg3);
    var_188 = arg2;
    void* var_180 = arg2 + arg3 * 0x18;
    void* rax_3;
    int64_t rdx_5;
    rax_3 = itertools::Itertools::find_position::hd482090938159e21(&var_188, &var_c0);
    
    if (rdx_5 && rax_3 + 1 < arg3)
    {
        void* rax_5 = (rax_3 + 1) * 3;
        void* var_f0;
        
        if (!regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(var_f8, var_f0, 
            *(arg2 + (rax_5 << 3) + 8), *(arg2 + (rax_5 << 3) + 0x10)))
        {
            int128_t var_128;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::hcb952d79c903d6d5(&var_128, &var_150, rax_3 + 1);
            void var_a0;
            _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::h62d70fa0066756c7(&var_a0);
            void var_88;
            void* var_138 = &var_88;
            uint64_t (* var_130_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_188 = &data_466c10;
            int64_t var_180_1 = 1;
            int64_t var_168_1 = 0;
            void** var_178_1 = &var_138;
            int64_t var_170_1 = 1;
            int128_t var_110;
            core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_110, &var_188);
            core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h7b44dbe916af3d67(&var_a0);
            int128_t var_d8 = var_110;
            int64_t var_100;
            int64_t var_c8_1 = var_100;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&var_150, rax_3 + 1, &var_d8);
            int64_t var_118;
            int64_t var_178_2 = var_118;
            var_188 = var_128;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&var_150, rax_3 + 2, &var_188);
        }
    }
    
    void var_58;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&var_58, &var_150);
    void* var_38 = &var_78;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5ab0a96f081d00df(arg1, &var_58);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_c0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_f8);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_78);
    return arg1;
}
