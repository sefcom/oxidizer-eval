
  int64_t uu_dd::Dest::fsync::hc1154dc06790ea25(char* arg1)

{
    switch (*arg1)
    {
        case 0:
        {
            /* tailcall */
            return
                _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
                &arg1[8]);
        }
        case 1:
        case 2:
        {
            /* tailcall */
            return std::fs::File::sync_all::hd9ac1cd9a387b5e9(&arg1[4]);
        }
        case 3:
        {
            return 0;
            break;
        }
    }
}
