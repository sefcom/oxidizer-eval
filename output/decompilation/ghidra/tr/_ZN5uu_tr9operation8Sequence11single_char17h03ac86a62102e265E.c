void _ZN5uu_tr9operation8Sequence11single_char17h03ac86a62102e265E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_28;
  long lStack_20;
  
  uVar3 = _ZN3nom5bytes4take17h944a63c5553846b5E();
  _ZN80__LT_nom__bytes__Take_LT_Error_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17h31e110a1e01abcb3E
            (local_40,uVar3,param_2,param_3);
  if (local_40[0] == 1) {
    param_1[2] = local_28;
    param_1[3] = lStack_20;
    *param_1 = local_38;
    param_1[1] = uStack_30;
  }
  else {
    if (lStack_20 == 0) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002051f8)
                (0,0,&PTR_s_src_uu_tr_src_operation_rs__warn_001fe320);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *local_28;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    *(undefined *)(param_1 + 3) = uVar1;
    *param_1 = 3;
  }
  return;
}