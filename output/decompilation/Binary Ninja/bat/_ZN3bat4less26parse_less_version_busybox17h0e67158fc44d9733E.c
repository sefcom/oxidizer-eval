
  int64_t bat::less::parse_less_version_busybox::h0e67158fc44d9733(char* arg1, int64_t arg2)

{
    char var_18;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_18, arg1, arg2);
    
    if (var_18 & 1)
        return 2;
    
    uint64_t var_10;
    void* var_8;
    return 2 -
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "BusyBox .ucf-old*.devicepagedown…", 8, var_10, var_8);
}
