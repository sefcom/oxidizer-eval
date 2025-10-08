
  void* ruff_python_formatter::context::WithInterpolatedStringState$LT$B$C$D$GT$::new::hff5d8450101a89ba(int64_t* arg1, char arg2, char arg3, int64_t* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    void* result = _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::state_mut::h7cd8bbe615791599(arg4);
    int16_t rcx = *(result + 0x2a);
    *(result + 0x2a) = arg2;
    *(result + 0x2b) = arg3;
    *arg1 = arg4;
    arg1[1] = rcx;
    return result;
}
