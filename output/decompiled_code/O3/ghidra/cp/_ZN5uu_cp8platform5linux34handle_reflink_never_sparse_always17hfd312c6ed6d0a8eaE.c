void __rustcall
uu_cp::platform::linux::handle_reflink_never_sparse_always
          (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined uVar1;
  byte bVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  char local_50;
  char cStack_4f;
  undefined6 uStack_4e;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  ulong local_38;
  
  check_for_data(&local_50);
  cVar6 = local_48;
  if (local_48 == '\x02') {
    uVar3 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
  }
  else {
    local_38 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
    check_sparse_detection(&local_50,param_2,param_3);
    if (local_50 == '\0') {
      if (cVar6 == '\0') {
        bVar5 = false;
        cVar6 = (local_38 < 0x200) * '\x03';
        if (cStack_4f == '\0') {
          cVar4 = '\x02';
        }
        else {
          if (local_40 != 0) {
            cVar6 = '\0';
          }
          cVar4 = '\x03';
          bVar5 = false;
        }
      }
      else {
        cVar4 = cStack_4f * '\x02' + '\x02';
        cVar6 = '\x03';
        bVar5 = local_40 == 0;
      }
      bVar2 = check_dest_is_fifo(param_4,param_5);
      param_1[1] = cVar6;
      param_1[2] = 1;
      param_1[3] = cVar4;
      param_1[4] = bVar2 | bVar5;
      uVar1 = 0;
      goto LAB_0021410f;
    }
    uVar3 = CONCAT71(uStack_47,local_48);
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar1 = 1;
LAB_0021410f:
  *param_1 = uVar1;
  return;
}