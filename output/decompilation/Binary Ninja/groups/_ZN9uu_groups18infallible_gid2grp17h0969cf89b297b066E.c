
  int128_t* uu_groups::infallible_gid2grp::h0969cf89b297b066(int128_t* arg1, int32_t* arg2)

{
    gid_t rbp = *arg2;
    void* const var_80;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_80, rbp);
    void* const rax = var_80;
    int64_t var_78;
    
    if (-(rax) != -0x8000000000000000)
    {
        *arg1 = rax;
        *(arg1 + 8) = var_78;
        int64_t var_70;
        arg1[1] = var_70;
    }
    else
    {
        int64_t var_98 = -0x7fffffffffffffff;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h074417a1e6395129();
        int64_t var_30 = rax_1;
        int64_t var_28_1 = rdx_1;
        int64_t* var_50 = &var_30;
        int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he95cae3a5b723209;
        int64_t* var_40_1 = &var_98;
        int64_t (* var_38_1)(void* arg1, int64_t* arg2) =
            _$LT$uu_groups..GroupsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd998d0f2fe9171d6;
        var_80 = &data_4e2138;
        int64_t var_78_1 = 3;
        int64_t var_60_1 = 0;
        int64_t** var_70_1 = &var_50;
        int64_t var_68_1 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
        core::ptr::drop_in_place$LT$uu_groups..GroupsError$GT$::hb769ad25550869ea(var_98, rbp);
        int64_t rax_2;
        uint64_t rdx_2;
        rax_2 =
            core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(rbp, &var_50, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5efff031ccf83c83(&var_80, rax_2, rdx_2);
        arg1[1] = var_70_1;
        *arg1 = var_80;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hc31f46757294ff16(-0x8000000000000000, var_78);
    }
    return arg1;
}
