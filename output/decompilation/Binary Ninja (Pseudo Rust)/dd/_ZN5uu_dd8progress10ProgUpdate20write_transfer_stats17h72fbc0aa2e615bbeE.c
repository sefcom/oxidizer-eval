
  fn uu_dd::progress::ProgUpdate::write_transfer_stats::h72fbc0aa2e615bbe(arg1: *mut i64, arg2: i64, arg3: i32) -> *mut i128

{
    let mut rax_1: i64;
    
    if arg3 != 0
    {
        let mut var_40: *mut *mut [i8; 0xb7] = &data_5624a8;
        let var_38_1: i64 = 1;
        let var_30_1: i64 = 8;
        let var_28_1: i128 = {0};
        rax_1 =
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(
            arg2, &var_40);
    }
    
    if (arg3 == 0 || rax_1 == 0)
        && uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(arg1, arg2) == 0
    {
        return uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(arg1, arg2, 0);
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa()
}
