
  void* ruff_python_formatter::context::WithIndentLevel$LT$B$C$D$GT$::new::hdff497fb90141998(int128_t* arg1, int16_t arg2, int128_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    void* result = _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::state_mut::h7cd8bbe615791599(*(arg3 + 8));
    int16_t rcx = *(result + 0x28);
    *(result + 0x28) = arg2;
    *arg1 = *arg3;
    arg1[1] = rcx;
    return result;
}
