
  fn uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(arg1: *mut i64)

{
    if arg1[3] != 3 || *arg1 != 0
    {
        let mut var_20: ();
        uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(&var_20, arg1);
        let mut var_60: *mut c_void = &var_20;
        let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let mut var_50: *mut c_void = &data_541a80;
        let var_48_1: i64 = 2;
        let var_30_1: i64 = 0;
        let var_40_1: *mut *mut c_void = &var_60;
        let var_38_1: i64 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_20);
    }
}
