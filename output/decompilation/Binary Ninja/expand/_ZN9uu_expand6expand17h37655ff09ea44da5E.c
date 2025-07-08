
  int128_t* uu_expand::expand::h37655ff09ea44da5(void* arg1)

{
    void** const r13;
    void** const var_20 = r13;
    std::io::stdio::stdout::h077da66234850927();
    void var_58;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8dc6b6dd87838119(&var_58, 
        0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    int64_t* r14 = *(arg1 + 0x20);
    int64_t r15 = *(arg1 + 0x28);
    int64_t var_c8 = 0;
    int64_t var_c0 = 1;
    int64_t var_b8 = 0;
    int64_t rax = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t var_b0 = rax;
    int64_t var_a8 = rax + rcx * 0x18;
    
    for (void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&var_b0); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&var_b0))
    {
        void* i_1 = i;
        void* const var_138;
        int64_t** var_128;
        int64_t var_118;
        int64_t* var_f8;
        int64_t* var_a0;
        int64_t (* var_98)(int64_t* arg1, int64_t arg2);
        
        if (!std::path::Path::is_dir::h9ac0db933706da51(*(i + 8), *(i + 0x10)))
        {
            void* i_2 = i_1;
            uu_expand::open::h447e326a625c2cbf(&var_a0, *(i_2 + 8), *(i_2 + 0x10));
            
            if (!var_a0)
            {
                int128_t var_e8 = var_98;
                int64_t* rax_6;
                int64_t rdx_6;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_f8 = rax_6;
                int64_t var_f0_2 = rdx_6;
                int64_t** var_68 = &var_f8;
                int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
                var_138 = &data_51cfa8;
                int64_t var_130_3 = 2;
                int64_t var_118_2 = 0;
                int64_t*** var_128_2 = &var_68;
                int64_t var_120_3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                var_f8 = &var_e8;
                int64_t (* var_f0_3)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he448dbddafa64936;
                var_138 = &data_51cfe8;
                int64_t var_130_4 = 2;
                var_118 = 0;
                var_128 = &var_f8;
                int64_t var_120_4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h235298a4064923ef(var_e8, *var_e8[8]);
            }
            else
            {
                int64_t var_70;
                int64_t var_108_1 = var_70;
                int128_t var_80;
                var_118 = var_80;
                int128_t var_90;
                var_128 = var_90;
                var_138 = var_a0;
                
                while (true)
                {
                    int64_t rax_4;
                    int64_t rdx_4;
                    rax_4 = std::io::read_until::h4bbf6f5e97af4fae(&var_138, 0xa, &var_c8);
                    bool rsi_3 = rdx_4;
                    
                    if (rax_4)
                        rsi_3 = !var_b8;
                    
                    if (!rsi_3)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(rax_4, rdx_4);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&var_138);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(rax_4, rdx_4);
                    int128_t* result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h402a94e6eef7bc71(uu_expand::expand_line::h40856abb6fde71c0(&var_c8, &var_58, 
                        r14, r15, arg1));
                    
                    if (result)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&var_138);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&var_c8);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(&var_58);
                        return result;
                    }
                }
            }
        }
        else
        {
            int64_t* rax_2;
            int64_t rdx_1;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            var_a0 = rax_2;
            int64_t var_98_1 = rdx_1;
            var_f8 = &var_a0;
            int64_t (* var_f0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
            var_138 = &data_51cfa8;
            int64_t var_130_1 = 2;
            int64_t var_118_1 = 0;
            int64_t** var_128_1 = &var_f8;
            int64_t var_120_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
            var_a0 = &i_1;
            var_98 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had14ffb2923220a0;
            var_138 = &data_51cfc8;
            int64_t var_130_2 = 2;
            var_118 = 0;
            var_128 = &var_a0;
            int64_t var_120_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&var_c8);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(&var_58);
    return nullptr;
}
