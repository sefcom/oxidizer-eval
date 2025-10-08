void _ZN5uu_cp8platform5linux33handle_reflink_auto_sparse_always17haaf9f37e7b58eafaE
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined uVar8;
  char local_50;
  char cStack_4f;
  undefined6 uStack_4e;
  byte local_48;
  undefined7 uStack_47;
  long local_40;
  undefined8 local_38;
  
  _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(&local_50);
  bVar2 = local_48;
  if (local_48 == 2) {
    uVar5 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
  }
  else {
    uVar1 = CONCAT11(cStack_4f,local_50);
    local_38 = param_5;
    _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(&local_50,param_2,param_3);
    if (local_50 != '\x01') {
      cVar6 = '\x03';
      if (0x1ff < CONCAT62(uStack_4e,uVar1)) {
        cVar6 = ((bVar2 & 1) != 0) * '\x03';
      }
      if (cStack_4f == '\0') {
        uVar8 = 2;
        cVar7 = '\x02' - (local_40 == 0 & bVar2);
      }
      else if ((bVar2 & 1) == 0) {
        uVar8 = 3;
        cVar7 = '\x02';
      }
      else {
        cVar7 = '\x02' - (local_40 == 0);
        uVar8 = 4;
      }
      cVar3 = _ZN5uu_cp8platform5linux18check_dest_is_fifo17h6561bbf78e4b4973E(param_4,local_38);
      cVar4 = '\x01';
      if (cVar3 == '\0') {
        cVar4 = cVar7;
      }
      param_1[1] = cVar6;
      param_1[2] = 4;
      param_1[3] = uVar8;
      param_1[4] = cVar4;
      uVar8 = 0;
      goto LAB_0019c0b5;
    }
    uVar5 = CONCAT71(uStack_47,local_48);
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar8 = 1;
LAB_0019c0b5:
  *param_1 = uVar8;
  return;
}