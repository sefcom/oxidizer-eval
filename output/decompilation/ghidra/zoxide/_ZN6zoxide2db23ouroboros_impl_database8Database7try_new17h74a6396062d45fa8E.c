void _ZN6zoxide2db23ouroboros_impl_database8Database7try_new17h74a6396062d45fa8E(ulong *param_1)

{
  int local_58 [2];
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  ulong local_20;
  ulong uStack_18;
  
  _ZN6zoxide2db23ouroboros_impl_database8Database18try_new_or_recover17h05961a2423eb4fc2E(local_58);
  if (local_58[0] != 1) {
    param_1[7] = local_20;
    param_1[8] = uStack_18;
    param_1[5] = local_30;
    param_1[6] = uStack_28;
    param_1[3] = local_40;
    param_1[4] = uStack_38;
    param_1[1] = local_50;
    param_1[2] = uStack_48;
  }
  else {
    _ZN4core3ptr63drop_in_place_LT_zoxide__db__ouroboros_impl_database__Heads_GT_17hdba25c445e79ff0cE
              (&uStack_48);
    param_1[1] = local_50;
  }
  *param_1 = (ulong)(local_58[0] == 1);
  return;
}