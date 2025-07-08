
  int128_t* uu_dd::progress::ProgUpdate::write_transfer_stats::h72fbc0aa2e615bbe(int64_t* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rax_1;
    
    if (arg3)
    {
        char const (** const var_40)[0xb7] = &data_5624a8;
        int64_t var_38_1 = 1;
        int64_t var_30_1 = 8;
        int128_t var_28_1 = {0};
        rax_1 =
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(
            arg2, &var_40);
    }
    
    if ((!arg3 || !rax_1)
            && !uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(arg1, arg2))
        return uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(arg1, arg2, 0);
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
}
