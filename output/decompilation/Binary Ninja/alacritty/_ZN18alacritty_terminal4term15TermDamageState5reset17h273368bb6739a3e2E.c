
  int64_t alacritty_terminal::term::TermDamageState::reset::h273368bb6739a3e2(void* arg1, int64_t arg2)

{
    int64_t result_1;
    int64_t result = result_1;
    result = arg2;
    *(arg1 + 0x28) = 0;
    int64_t rax = *(arg1 + 8);
    _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::for_each::h79b605f0884a99ec(rax, rax + *(arg1 + 0x10) * 0x18, &result);
    return result;
}
