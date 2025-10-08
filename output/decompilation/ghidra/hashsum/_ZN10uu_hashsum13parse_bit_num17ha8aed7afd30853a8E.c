void _ZN10uu_hashsum13parse_bit_num17ha8aed7afd30853a8E
               (undefined *param_1,char *param_2,ulong param_3)

{
  undefined uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  if (param_3 == 1) {
    if ((*param_2 != '-') && (param_3 = 1, *param_2 != '+')) goto LAB_0017f1e6;
LAB_0017f1a9:
    param_1[1] = 1;
  }
  else {
    if (param_3 != 0) {
      if (*param_2 == '+') {
        param_2 = param_2 + 1;
        uVar5 = param_3 - 1;
        if (0x11 < param_3) {
LAB_0017f21b:
          uVar6 = 0;
          uVar4 = 0;
          do {
            if (uVar5 == uVar6) goto LAB_0017f210;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar4;
            uVar2 = SUB168(auVar7 * ZEXT816(10),0);
            auVar8 = _ZN4core4char7methods22__LT_impl_u20_char_GT_8to_digit17hcc2263739e531becE
                               (param_2[uVar6]);
            if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_0017f1a9;
            if (SUB168(auVar7 * ZEXT816(10),8) != 0) break;
            uVar3 = auVar8._8_8_ & 0xffffffff;
            uVar6 = uVar6 + 1;
            uVar4 = uVar2 + uVar3;
          } while (!CARRY8(uVar2,uVar3));
          param_1[1] = 2;
          goto LAB_0017f1ad;
        }
        param_3 = uVar5;
        if (uVar5 != 0) goto LAB_0017f1e6;
        uVar4 = 0;
      }
      else {
        uVar5 = param_3;
        if (0x10 < param_3) goto LAB_0017f21b;
LAB_0017f1e6:
        uVar5 = 0;
        uVar4 = 0;
        do {
          auVar7 = _ZN4core4char7methods22__LT_impl_u20_char_GT_8to_digit17hcc2263739e531becE
                             (param_2[uVar5]);
          if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_0017f1a9;
          uVar4 = (auVar7._8_8_ & 0xffffffff) + uVar4 * 10;
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
      }
LAB_0017f210:
      *(ulong *)(param_1 + 8) = uVar4;
      uVar1 = 0;
      goto LAB_0017f1af;
    }
    param_1[1] = 0;
  }
LAB_0017f1ad:
  uVar1 = 1;
LAB_0017f1af:
  *param_1 = uVar1;
  return;
}