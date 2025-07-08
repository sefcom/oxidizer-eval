
  int64_t uu_dd::Dest::fdatasync::hb1784b836bce6fab(char* arg1)

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
            return std::fs::File::sync_data::hf784af99032c3e35(&arg1[4]);
        }
        case 3:
        {
            return 0;
            break;
        }
    }
}
