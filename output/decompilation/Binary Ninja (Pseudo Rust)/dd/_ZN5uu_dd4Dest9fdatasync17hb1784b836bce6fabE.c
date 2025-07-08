
  fn uu_dd::Dest::fdatasync::hb1784b836bce6fab(arg1: *mut i8) -> i64

{
    match *arg1
    {
        0 =>
        {
            /* tailcall */
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
                &arg1[8])
        }
        1 | 2 =>
        {
            /* tailcall */
            std::fs::File::sync_data::hf784af99032c3e35(&arg1[4])
        }
        3 =>
        {
            0
        }
    }
}
