
  fn uu_dd::Dest::fsync::h5a325d3e1b2c36c4(arg1: *mut i8) -> i64

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
            std::fs::File::sync_all::ha0e03da750e69f90(&arg1[4])
        }
        3 =>
        {
            0
        }
    }
}
