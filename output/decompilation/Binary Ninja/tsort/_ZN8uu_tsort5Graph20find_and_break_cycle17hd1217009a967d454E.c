
  int64_t uu_tsort::Graph::find_and_break_cycle::hd1217009a967d454(void* arg1, int64_t* arg2)

{
    int64_t var_48;
    uu_tsort::Graph::detect_cycle::he977b3591bc78cb9(&var_48, arg1);
    int128_t var_d0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, 
        arg1);
    int64_t var_c0;
    int64_t var_68 = var_c0;
    int128_t var_78 = var_d0;
    int64_t var_80 = 2;
    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    int64_t rax_1;
    int64_t rdx;
    rax_1 = uucore::util_name::h074417a1e6395129();
    int64_t var_e0 = rax_1;
    int64_t var_d8 = rdx;
    int64_t* var_a0 = &var_e0;
    int64_t (* var_98)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdba2249fdd736854;
    int64_t* var_90 = &var_80;
    int64_t (* var_88)(int64_t* arg1, int64_t* arg2) =
        _$LT$uu_tsort..TsortError$u20$as$u20$core..fmt..Display$GT$::fmt::h3b33dc5b43b5f539;
    var_d0 = &data_4eb378;
    *var_d0[8] = 3;
    int64_t var_b0 = 0;
    int64_t** var_c0_1 = &var_a0;
    int64_t var_b8 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
    core::ptr::drop_in_place$LT$uu_tsort..TsortError$GT$::h9d156dfc799f2429(&var_80);
    char const (** const var_e8)[0x95] = &data_4eb3a8;
    int64_t var_f0;
    int64_t var_38;
    
    if (!var_38)
        var_f0 = 0;
    else
    {
        int64_t* i_2;
        int64_t* i = i_2;
        var_f0 = var_38;
        int64_t* i_1 = i;
        
        do
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1c391e09306501bd(&var_d0, *i, i[1]);
            int64_t** var_68_1 = var_c0_1;
            int128_t var_78_1 = var_d0;
            var_80 = 3;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_e0 = rax_3;
            int64_t var_d8_1 = rdx_2;
            var_a0 = &var_e0;
            int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdba2249fdd736854;
            int64_t* var_90_1 = &var_80;
            int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$uu_tsort..TsortError$u20$as$u20$core..fmt..Display$GT$::fmt::h3b33dc5b43b5f539;
            var_d0 = &data_4eb378;
            *var_d0[8] = 3;
            int64_t var_b0_1 = 0;
            var_c0_1 = &var_a0;
            int64_t var_b8_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$uu_tsort..TsortError$GT$::h9d156dfc799f2429(&var_80);
            i = &i[2];
        } while (i != &i[var_38 * 2]);
        
        if (var_f0)
        {
            int64_t** i_3 = i_1;
            
            if (var_f0 != 1)
            {
                int64_t* rbx_1 = i_3[2];
                int64_t r12 = i_3[3];
                uu_tsort::Graph::remove_edge::ha9a469af9283dfcd(arg1, *i_3, i_3[1], rbx_1, r12);
                char rax_5;
                int64_t rdx_5;
                rax_5 = uu_tsort::Graph::indegree::h78335c1a80f6dbc5(arg1, rbx_1, r12);
                
                if (!(rax_5 & 1))
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                if (!rdx_5)
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hbf92dcd24a88f4eb(arg2, rbx_1, r12);
                
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hff7f0467ec13c3eb(var_48, i_3);
            }
            
            var_e8 = &data_4eb3c0;
        }
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(var_f0, var_f0);
    /* no return */
}
