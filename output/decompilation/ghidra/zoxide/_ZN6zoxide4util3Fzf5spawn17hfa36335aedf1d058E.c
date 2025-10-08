void _ZN6zoxide4util3Fzf5spawn17hfa36335aedf1d058E(undefined4 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_50 [8];
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_0023b980)(&local_30);
  if (local_30 != 1) {
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)(param_1 + 6) = uStack_18;
    *(ulong *)(param_1 + 1) = CONCAT44(uStack_28,local_2c);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_20,uStack_24);
    *param_1 = 0;
    return;
  }
  cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(CONCAT44(uStack_24,uStack_28));
  if (cVar2 != '\0') {
    local_50[0] = 1;
    _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h90a67f2b84aeb721E
              (param_1,local_50);
    return;
  }
                    /* try { // try from 00192974 to 00192978 has its CatchHandler @ 00192995 */
  uVar1 = _ZN6anyhow4kind5Adhoc3new17h431080fddafce1a4E();
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = 1;
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a90eb9fb31b0c2E(local_50);
  return;
}