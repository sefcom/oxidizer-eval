
  void* uu_unexpand::tabstops_parse::hd6618068ebda3834(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        arg2, arg3);
    int64_t var_b8 = 0;
    int64_t var_b0 = 8;
    int64_t var_a8 = 0;
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 1;
    
    while (true)
    {
        char* rax_1;
        int64_t rdx;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h7e3823b43e930040(&var_78);
        int64_t rax_3;
        
        if (!rax_1)
        {
            if (!_$LT$usize$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5183ddd93362b17d(var_b0, var_a8))
            {
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::he3583de373be94d7(var_b0, var_b0 + (var_a8 << 3)) & 1)
                {
                    void* result = &arg1[1];
                    *(result + 0x10) = var_a8;
                    *result = var_b8;
                    *arg1 = 0;
                    return result;
                }
                
                rax_3 = -0x7ffffffffffffffe;
            }
            else
                rax_3 = -0x8000000000000000;
            
            goto label_45beda;
        }
        
        char var_a0;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a0, rax_1, 
            rdx);
        
        if (var_a0)
        {
            char var_9f;
            
            if (var_9f == 2)
            {
                rax_3 = -0x7fffffffffffffff;
                label_45beda:
                arg1[1] = rax_3;
                *arg1 = 1;
                return 
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc24bb36679b53478(
                    var_b8, var_b0);
            }
            
            int64_t rax_6;
            uint64_t rdx_1;
            rax_6 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hf9870a4d295deabb(rax_1, rdx);
            int128_t var_90;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_90, rax_6, rdx_1);
            int64_t var_80;
            arg1[3] = var_80;
            *(arg1 + 8) = var_90;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc24bb36679b53478(
                var_b8, var_b0);
        }
        
        int64_t var_98;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h69a9a8bac04a407a(&var_b8, var_98);
    }
}
