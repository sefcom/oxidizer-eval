
  int64_t alacritty::display::hint::HintLabels::next::h3687c471851e5e21(int128_t* arg1, void* arg2)

{
    int64_t rax = *(arg2 + 0x20);
    int64_t rcx_1 = rax + (*(arg2 + 0x28) << 3);
    int64_t var_28 = rax;
    int64_t var_20 = rcx_1;
    void* var_18 = arg2;
    int128_t var_40;
    core::iter::traits::iterator::Iterator::collect::h33746914ed5d5ddf(&var_40, &var_28);
    alacritty::display::hint::HintLabels::increment::hee42f897509faf72(arg2);
    int64_t result;
    arg1[1] = result;
    *arg1 = var_40;
    return result;
}
