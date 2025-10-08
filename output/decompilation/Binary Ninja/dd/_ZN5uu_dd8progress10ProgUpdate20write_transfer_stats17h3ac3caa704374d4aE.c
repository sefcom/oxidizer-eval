
  uint64_t uu_dd::progress::ProgUpdate::write_transfer_stats::h3ac3caa704374d4a(int64_t* arg1, int64_t arg2, int32_t arg3)

{
    void* rax_1;
    
    if (arg3)
    {
        void** const var_40 = &data_53db30;
        int64_t var_38_1 = 1;
        int64_t var_30_1 = 8;
        int128_t var_28_1 = {0};
        rax_1 =
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            arg2, &var_40);
    }
    
    if ((!arg3 || !rax_1)
            && !uu_dd::progress::ProgUpdate::write_io_lines::hb8d567bd29ca3197(arg1, arg2))
        return uu_dd::progress::ProgUpdate::write_prog_line::h98858b211566047a(arg1, arg2, 0);
    
    /* tailcall */
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
