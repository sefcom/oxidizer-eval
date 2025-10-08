void _ZN2fd6filter5owner11OwnerFilter13filter_ignore17hbaaea47d82f3121fE
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = _ZN74__LT_fd__filter__owner__Check_LT_T_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h1af06540f0d526a6E
                    (*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),2);
  if (cVar2 != '\0') {
    cVar2 = _ZN74__LT_fd__filter__owner__Check_LT_T_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h1af06540f0d526a6E
                      (*(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc),2);
    if (cVar2 != '\0') {
      *(undefined4 *)param_1 = 3;
      return;
    }
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}