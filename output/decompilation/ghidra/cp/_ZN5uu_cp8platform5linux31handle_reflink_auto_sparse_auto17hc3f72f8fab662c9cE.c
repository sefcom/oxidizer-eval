void _ZN5uu_cp8platform5linux31handle_reflink_auto_sparse_auto17hc3f72f8fab662c9cE
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char local_48;
  char cStack_47;
  undefined6 uStack_46;
  byte local_40;
  undefined7 uStack_3f;
  long local_38;
  
  _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(&local_48);
  bVar2 = local_40;
  if (local_40 == 2) {
    uVar6 = CONCAT62(uStack_46,CONCAT11(cStack_47,local_48));
  }
  else {
    lVar1 = CONCAT62(uStack_46,CONCAT11(cStack_47,local_48));
    _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(&local_48,param_2,param_3);
    if (local_48 != '\x01') {
      if ((bVar2 & 1) == 0) {
        cVar9 = (lVar1 - 1U < 0x1ff) * '\x02';
        cVar7 = cStack_47 + '\x02';
        cVar8 = cStack_47 * '\x02' + '\x01';
      }
      else if (lVar1 == 0) {
        cVar9 = '\x04';
        cVar7 = '\x04';
        if (cStack_47 != '\0') goto LAB_0019c261;
        cVar8 = '\x01';
        cVar7 = '\x02';
      }
      else {
        cVar8 = '\x01';
        cVar9 = '\x02';
        cVar7 = cVar9;
        if (cStack_47 == '\0') {
          cVar7 = '\x02';
        }
        else {
LAB_0019c261:
          cVar9 = cVar7;
          cVar7 = '\x03';
          cVar8 = '\x03';
          if (local_38 == 0) {
            cVar9 = '\x04';
            cVar7 = '\x01';
            cVar8 = '\x03';
          }
        }
      }
      cVar4 = _ZN5uu_cp8platform5linux18check_dest_is_fifo17h6561bbf78e4b4973E(param_4,param_5);
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        cVar5 = cVar7;
      }
      param_1[1] = cVar9;
      param_1[2] = 4;
      param_1[3] = cVar8;
      param_1[4] = cVar5;
      uVar3 = 0;
      goto LAB_0019c249;
    }
    uVar6 = CONCAT71(uStack_3f,local_40);
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar3 = 1;
LAB_0019c249:
  *param_1 = uVar3;
  return;
}