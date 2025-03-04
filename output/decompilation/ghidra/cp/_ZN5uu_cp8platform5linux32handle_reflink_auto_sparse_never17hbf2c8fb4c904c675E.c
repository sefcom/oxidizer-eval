void _ZN5uu_cp8platform5linux32handle_reflink_auto_sparse_never17hbf2c8fb4c904c675E
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  char cVar5;
  char local_40;
  char cStack_3f;
  undefined6 uStack_3e;
  char local_38;
  undefined7 uStack_37;
  
  _ZN5uu_cp8platform5linux14check_for_data17h21b9fcb33088a74cE(&local_40);
  cVar2 = local_38;
  if (local_38 == '\x02') {
    uVar4 = CONCAT62(uStack_3e,CONCAT11(cStack_3f,local_40));
  }
  else {
    uVar1 = CONCAT11(cStack_3f,local_40);
    _ZN5uu_cp8platform5linux22check_sparse_detection17he625f50b8a9bdb43E(&local_40,param_2,param_3);
    if (local_40 == '\0') {
      cVar5 = '\x03';
      if (cVar2 == '\0') {
        cVar5 = (CONCAT62(uStack_3e,uVar1) < 0x200) * '\x03';
      }
      param_1[1] = cVar5;
      param_1[2] = 1;
      param_1[3] = cStack_3f * '\x02' | 1;
      uVar3 = 0;
      goto LAB_00213e28;
    }
    uVar4 = CONCAT71(uStack_37,local_38);
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar3 = 1;
LAB_00213e28:
  *param_1 = uVar3;
  return;
}