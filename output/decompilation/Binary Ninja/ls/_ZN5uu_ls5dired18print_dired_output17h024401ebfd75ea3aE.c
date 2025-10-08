
  uint64_t uu_ls::dired::print_dired_output::h024401ebfd75ea3a(void* arg1, void* arg2, void* arg3)

{
    if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(arg3))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    
    int64_t rcx = *(arg2 + 0x10);
    
    if (rcx)
        uu_ls::dired::print_positions::h2333ffc8f21f2b3d("//DIRED////SUBDIRED//--dired-D\x1b…", 9, 
            *(arg2 + 8), rcx);
    
    if (*(arg1 + 0xee))
        uu_ls::dired::print_positions::h2333ffc8f21f2b3d("//SUBDIRED//--dired-D\x1b[Kprint…", 0xc, 
            *(arg2 + 0x20), *(arg2 + 0x28));
    
    void* var_50 = arg1 + 0xfc;
    uint64_t (* var_48)(char* arg1, int64_t* arg2) = _$LT$uucore..features..quoting_style..QuotingStyle$u20$as$u20$core..fmt..Display$GT$::fmt::hae4e8fc211181537;
    void** const var_40 = &data_6866c0;
    int64_t var_38 = 2;
    int64_t var_20 = 0;
    void** var_30 = &var_50;
    int64_t var_28 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_40);
    return 0;
}
