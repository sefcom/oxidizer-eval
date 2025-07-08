
  int128_t* uu_env::apply_ignore_signal::h50dc2527ab008a21(void* arg1)

{
    int64_t rax = *(arg1 + 0x68);
    int64_t rcx_1 = rax + (*(arg1 + 0x70) << 3);
    int64_t var_20 = rax;
    int64_t var_18 = rcx_1;
    int128_t* i;
    
    do
    {
        int32_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h009f5b357177ad4e(&var_20);
        
        if (!rax_1)
            return nullptr;
        
        int32_t rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(*rax_1);
        
        if (rax_2)
        {
            i = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            break;
        }
        
        i = uu_env::ignore_signal::hb651b27965f7f812(rdx_1);
    } while (!i);
    
    return i;
}
