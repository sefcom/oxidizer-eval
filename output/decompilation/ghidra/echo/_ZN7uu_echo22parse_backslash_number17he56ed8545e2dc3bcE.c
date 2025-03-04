undefined  [16]
_ZN7uu_echo22parse_backslash_number17he56ed8545e2dc3bcE(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char extraout_DL;
  bool bVar6;
  undefined auVar7 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((char)param_2 == '\0') {
    bVar6 = false;
LAB_001a45cd:
    auVar7 = _ZN7uu_echo4Base15ascii_to_number17h59ff941f17249d67E(bVar6,param_3 & 0xff,param_3);
    if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      param_2 = auVar7._8_8_ & 0xffffffff;
      lVar1 = *param_1;
      *param_1 = 0;
      if (lVar1 == 0) {
        _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h67bb1ffa54fe1617E
                  (param_1 + 2);
      }
      bVar2 = 1;
      do {
        bVar2 = _ZN46__LT_u8_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17h78b98a6df4caa3d9E
                          (bVar2);
        puVar3 = (undefined8 *)
                 _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hedc8c424b7d46203E
                           (param_1,param_1 + 2);
        puVar4 = (undefined *)*puVar3;
        if (puVar4 == (undefined *)0x0) break;
        puVar4 = (undefined *)_ZN7uu_echo4Base15ascii_to_number17h59ff941f17249d67E(bVar6,*puVar4);
        if (((ulong)puVar4 & 1) == 0) break;
        lVar1 = *param_1;
        *param_1 = 0;
        if (lVar1 == 0) {
          puVar4 = (undefined *)
                   _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h67bb1ffa54fe1617E
                             (param_1 + 2);
        }
        param_2 = CONCAT71((int7)(param_2 >> 8),
                           ((char)param_2 << (4U - (bVar6 == false) & 0x1f)) + extraout_DL);
      } while (bVar2 < (bVar6 == false | 2U));
      uVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),1);
      goto LAB_001a467f;
    }
  }
  else {
    puVar3 = (undefined8 *)
             _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hedc8c424b7d46203E
                       (param_1,param_1 + 2);
    if ((byte *)*puVar3 != (byte *)0x0) {
      param_3 = (ulong)*(byte *)*puVar3;
      bVar6 = (char)param_2 != '\x01';
      goto LAB_001a45cd;
    }
  }
  uVar5 = 0;
LAB_001a467f:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}