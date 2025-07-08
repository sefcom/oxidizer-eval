
  int64_t uu_dd::Dest::fsync::h5a325d3e1b2c36c4(char* arg1)

{
    switch (*arg1)
    {
        case 0:
        {
            /* tailcall */
            return
                _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
                &arg1[8]);
        }
        case 1:
        case 2:
        {
            /* tailcall */
            return std::fs::File::sync_all::ha0e03da750e69f90(&arg1[4]);
        }
        case 3:
        {
            return 0;
            break;
        }
    }
}
