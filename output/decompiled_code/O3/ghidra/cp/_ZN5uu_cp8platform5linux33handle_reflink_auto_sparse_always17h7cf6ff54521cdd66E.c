void __rustcall
uu_cp::platform::linux::handle_reflink_auto_sparse_always
          (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined2 uVar1;
  undefined uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  char local_58;
  char cStack_57;
  undefined6 uStack_56;
  char local_50;
  undefined7 uStack_4f;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  check_for_data(&local_58);
  cVar8 = local_50;
  if (local_50 == '\x02') {
    uVar6 = CONCAT62(uStack_56,CONCAT11(cStack_57,local_58));
  }
  else {
    uVar1 = CONCAT11(cStack_57,local_58);
    local_40 = param_4;
    local_38 = param_5;
    check_sparse_detection(&local_58,param_2,param_3);
    if (local_58 == '\0') {
      cVar3 = '\x02' - (local_48 == 0);
      bVar9 = cVar8 == '\0';
      if (bVar9) {
        cVar3 = '\x02';
      }
      cVar8 = '\x03';
      if (bVar9) {
        cVar8 = (CONCAT62(uStack_56,uVar1) < 0x200) * '\x03';
      }
      cVar7 = '\x04' - bVar9;
      if (cStack_57 == '\0') {
        cVar7 = '\x02';
      }
      cVar4 = check_dest_is_fifo(local_40,local_38);
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        cVar5 = cVar3;
      }
      param_1[1] = cVar8;
      param_1[2] = 4;
      param_1[3] = cVar7;
      param_1[4] = cVar5;
      uVar2 = 0;
      goto LAB_002132e8;
    }
    uVar6 = CONCAT71(uStack_4f,local_50);
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar2 = 1;
LAB_002132e8:
  *param_1 = uVar2;
  return;
}