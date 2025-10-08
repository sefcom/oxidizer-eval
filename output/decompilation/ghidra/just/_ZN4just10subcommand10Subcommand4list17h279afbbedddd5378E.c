void _ZN4just10subcommand10Subcommand4list17h279afbbedddd5378E
               (undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_4 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_4 + 8);
    lVar3 = 0;
    do {
      param_3 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17he9fea18cadddca02E
                          (*(undefined8 *)(param_3 + 0x2a0),*(undefined8 *)(param_3 + 0x2a8),
                           *(undefined8 *)(lVar2 + 8 + lVar3),*(undefined8 *)(lVar2 + 0x10 + lVar3))
      ;
      if (param_3 == 0) {
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbfd22dd80b4b7c3fE
                  (&local_48,param_4);
        *(undefined8 *)(param_1 + 0x10) = local_40;
        *(undefined8 *)(param_1 + 0x18) = uStack_38;
        *param_1 = 0x35;
        *(undefined8 *)(param_1 + 8) = local_48;
        return;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar1 * 0x18 != lVar3);
  }
  _ZN4just10subcommand10Subcommand11list_module17h05aa7b8b99df3073E(param_2,param_3,0);
  *param_1 = 0x38;
  return;
}