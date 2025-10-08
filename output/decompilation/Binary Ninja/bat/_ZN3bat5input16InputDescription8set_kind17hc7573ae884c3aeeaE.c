
  int64_t bat::input::InputDescription::set_kind::hc7573ae884c3aeea(void* arg1, int128_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h92380712fca2cb32(arg1 + 0x30);
    int64_t result = arg2[1];
    *(arg1 + 0x40) = result;
    *(arg1 + 0x30) = *arg2;
    return result;
}
