
  int128_t* uu_ls::dired::print_dired_output::h12a985547a0b3a50(void* arg1, void* arg2, void* arg3)

{
    if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(arg3))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    int64_t rcx_1 = *(arg2 + 0x10);
    
    if (rcx_1)
        uu_ls::dired::print_positions::h1699d046e996e251("//DIRED////SUBDIRED//--dired-Des…", 9, 
            *(arg2 + 8), rcx_1);
    
    if (*(arg1 + 0xe6))
        uu_ls::dired::print_positions::h1699d046e996e251("//SUBDIRED//--dired-Descapeliter…", 0xc, 
            *(arg2 + 0x20), *(arg2 + 0x28));
    
    void* var_50 = arg1 + 0xf5;
    uint64_t (* var_48_1)(char* arg1, void* arg2) = _$LT$uucore..features..quoting_style..QuotingStyle$u20$as$u20$core..fmt..Display$GT$::fmt::h8d278e288b2ed706;
    void** const var_40 = &data_613708;
    int64_t var_38_1 = 2;
    int64_t var_20_1 = 0;
    void** var_30_1 = &var_50;
    int64_t var_28_1 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_40);
    return nullptr;
}
