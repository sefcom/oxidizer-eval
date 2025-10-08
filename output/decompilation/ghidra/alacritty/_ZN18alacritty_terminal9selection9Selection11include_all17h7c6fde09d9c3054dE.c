void _ZN18alacritty_terminal9selection9Selection11include_all17h7c6fde09d9c3054dE(ulong *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 6) != '\x01') {
    cVar1 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h96fd75b64b1be1c4E
                      ();
    *(bool *)(param_1 + 2) = '\0' < cVar1;
    *(bool *)(param_1 + 5) = cVar1 < '\x01';
    return;
  }
  if ((*param_1 <= param_1[3]) &&
     (*param_1 != param_1[3] || *(int *)(param_1 + 1) <= *(int *)(param_1 + 4))) {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 5) = 1;
    return;
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 5) = 0;
  return;
}