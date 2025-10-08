
  fn uu_dd::Dest::fsync::hc1154dc06790ea25(arg1: *mut i8) -> i64

{
    match *arg1
    {
        0 =>
        {
            /* tailcall */
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
                &arg1[8])
        }
        1 | 2 =>
        {
            /* tailcall */
            std::fs::File::sync_all::hd9ac1cd9a387b5e9(&arg1[4])
        }
        3 =>
        {
            0
        }
    }
}
