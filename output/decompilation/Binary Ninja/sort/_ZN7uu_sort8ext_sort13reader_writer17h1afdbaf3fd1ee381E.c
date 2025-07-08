
  void* const uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(int64_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t* arg6, void* arg7)

{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHQ(-0x3333333333333333 * *(arg2 + 0x68));
    rax = LOWQ(-0x3333333333333333 * *(arg2 + 0x68));
    int64_t var_1b8 = arg5;
    int64_t var_178;
    uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(&var_178, arg1, arg7, *(arg2 + 0x99), 
        rdx >> 3, arg2, arg3, arg4);
    int64_t rcx_1 = var_178;
    void* var_170;
    
    if (rcx_1 == -0x7ffffffffffffffd)
    {
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
        return var_170;
    }
    
    int64_t var_100 = rcx_1;
    void* const var_f8_1 = var_170;
    int64_t rax_1 = -0x8000000000000000 ^ rcx_1;
    int64_t rcx_2 = 3;
    
    if (rax_1 < 3)
        rcx_2 = rax_1;
    
    void* var_168;
    void* var_f0_1 = var_168;
    void* const var_1a8;
    int64_t var_198;
    int128_t var_160;
    int128_t var_158;
    int128_t var_148;
    int128_t var_138;
    int64_t rbp;
    void** rdi_12;
    
    switch (rcx_2)
    {
        case 0:
        {
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
            return nullptr;
            break;
        }
        case 1:
        {
            var_1a8 = var_170;
            
            if (!*(arg2 + 0x84))
            {
                int64_t rdi_9 = *(var_170 + 0x20);
                var_168 = *(arg6 + 0x10);
                var_178 = *arg6;
                uu_sort::print_sorted::h399956c01eacbd36(rdi_9, rdi_9 + *(var_170 + 0x28) * 0x18, 
                    arg2, &var_178);
            }
            else
            {
                int64_t rax_7 = *(var_170 + 0x20);
                int64_t var_168_2 = rax_7;
                var_160 = rax_7 + *(var_170 + 0x28) * 0x18;
                var_178 = 0;
                var_158 = arg2;
                *var_158[8] = &var_1a8;
                int64_t var_188;
                var_188 = *(arg6 + 0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::h503969779853c16b(&var_178, arg2, &var_198);
            }
            
            rdi_12 = &var_1a8;
            break;
        }
        case 2:
        {
            void* const var_1a0 = var_170;
            var_1a8 = var_168;
            int64_t rax_2 = *(var_170 + 0x20);
            int64_t rcx_5 = *(var_170 + 0x28);
            var_198 = rax_2;
            int64_t var_190_1 = rax_2 + rcx_5 * 0x18;
            void** var_188_1 = &var_1a0;
            int64_t rax_3 = *(var_168 + 0x20);
            int64_t rcx_8 = *(var_168 + 0x28);
            var_178 = rax_3;
            int64_t var_170_1 = rax_3 + rcx_8 * 0x18;
            void** var_168_1 = &var_1a8;
            rbp = 1;
            int128_t var_e8;
            itertools::merge_join::merge_by_new::haf8b6537aa60a4a2(&var_e8, &var_198, &var_178, 
                arg2);
            int128_t var_d8;
            int128_t var_c8;
            int128_t var_b8;
            int128_t var_a8;
            int64_t var_98;
            
            if (!*(arg2 + 0x84))
            {
                int64_t var_128_1 = var_98;
                int128_t var_138_1 = var_a8;
                int128_t var_148_1 = var_b8;
                int128_t var_158_1 = var_c8;
                var_168_1 = var_d8;
                var_178 = var_e8;
                var_188_1 = *(arg6 + 0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::hcbbf0cde6d758b1e(&var_178, arg2, &var_198);
            }
            else
            {
                int64_t var_110_1 = var_98;
                int128_t var_120_1 = var_a8;
                var_138 = var_b8;
                var_148 = var_c8;
                var_158 = var_d8;
                int128_t var_160_1 = var_e8;
                var_178 = 0;
                void* var_108_1 = arg2;
                var_188_1 = *(arg6 + 0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::hbc0202f908111a45(&var_178, arg2, &var_198);
            }
            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_1a8);
            rdi_12 = &var_1a0;
            break;
        }
        case 3:
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_198, &var_100);
            rbp = 1;
            uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(&var_178, &var_198, arg2, 
                arg7);
            int64_t rax_5 = var_178;
            
            if (rax_5 == 3)
            {
                core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
                return var_170;
            }
            
            int64_t var_120;
            int64_t var_38_1 = var_120;
            int128_t var_48_1 = var_138;
            int128_t var_58_1 = var_148;
            int128_t var_68_1 = var_158;
            int128_t var_78_1 = var_160;
            int64_t var_90 = rax_5;
            void* const var_88_1 = var_170;
            void* var_80_1 = var_168;
            var_168 = *(arg6 + 0x10);
            var_178 = *arg6;
            void* rax_6;
            void* rdx_6;
            rax_6 =
                uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(&var_90, arg2, &var_178);
            return rax_6;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(rdi_12);
    return nullptr;
}
