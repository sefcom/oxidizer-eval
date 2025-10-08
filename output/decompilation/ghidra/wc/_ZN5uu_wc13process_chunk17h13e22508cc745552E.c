void _ZN5uu_wc13process_chunk17h13e22508cc745552E
               (long *param_1,long param_2,long param_3,undefined8 param_4,byte *param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  undefined auVar5 [12];
  long local_58;
  long local_40;
  long local_38;
  
  local_38 = param_2 + param_3;
  bVar4 = *param_5;
  local_40 = param_2;
  auVar5 = _ZN4core3str11validations15next_code_point17haf09daf254e30070E(&local_40);
  uVar2 = auVar5._8_4_;
  if ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    lVar3 = param_1[2];
    local_58 = param_1[3];
    do {
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
LAB_00166616:
        *param_5 = 0;
        bVar4 = 0;
      }
      else {
        if (0x7f < uVar2) {
          cVar1 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar2);
          if (cVar1 != '\0') goto LAB_00166616;
        }
        if ((bVar4 & 1) == 0) {
          *param_5 = 1;
          local_58 = local_58 + 1;
          param_1[3] = local_58;
          bVar4 = 1;
        }
      }
      if (uVar2 == 10) {
        lVar3 = lVar3 + 1;
        param_1[2] = lVar3;
      }
      auVar5 = _ZN4core3str11validations15next_code_point17haf09daf254e30070E(&local_40);
      uVar2 = auVar5._8_4_;
    } while ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0);
  }
  *param_1 = *param_1 + param_3;
  lVar3 = _ZN4core3cmp3Ord3max17hb785ffe4e6194aafE(param_4,param_1[4]);
  param_1[4] = lVar3;
  return;
}