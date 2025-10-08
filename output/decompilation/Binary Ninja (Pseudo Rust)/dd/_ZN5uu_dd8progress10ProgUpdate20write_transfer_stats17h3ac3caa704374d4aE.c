
  fn uu_dd::progress::ProgUpdate::write_transfer_stats::h3ac3caa704374d4a(arg1: *mut i64, arg2: i64, arg3: i32) -> u64

{
    let mut rax_1: *mut c_void;
    
    if arg3 != 0
    {
        let mut var_40: *mut *mut c_void = &data_53db30;
        let var_38_1: i64 = 1;
        let var_30_1: i64 = 8;
        let var_28_1: i128 = {0};
        rax_1 =
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            arg2, &var_40);
    }
    
    if (arg3 == 0 || rax_1 == 0)
        && uu_dd::progress::ProgUpdate::write_io_lines::hb8d567bd29ca3197(arg1, arg2) == 0
    {
        return uu_dd::progress::ProgUpdate::write_prog_line::h98858b211566047a(arg1, arg2, 0);
    }
    
    /* tailcall */
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
