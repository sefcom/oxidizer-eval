void _ZN5uu_cp8platform5linux32handle_reflink_never_sparse_auto17h718df85bcf1cef5cE
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined uVar7;
  char local_50;
  byte bStack_4f;
  undefined6 uStack_4e;
  byte local_48;
  undefined7 uStack_47;
  long local_40;
  long local_38;
  
  _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(&local_50);
  bVar6 = local_48;
  if (local_48 == 2) {
    uVar4 = CONCAT62(uStack_4e,CONCAT11(bStack_4f,local_50));
  }
  else {
    uVar1 = CONCAT11(bStack_4f,local_50);
    local_38 = local_40;
    _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(&local_50,param_2,param_3);
    if (local_50 != '\x01') {
      if ((0x1ff < CONCAT62(uStack_4e,uVar1) & (bVar6 ^ 1)) == 0) {
        if (bStack_4f == 0) {
          uVar7 = 3;
          bVar6 = 2;
          cVar5 = '\x01';
        }
        else {
          bVar6 = (local_38 != 0 | ~bVar6 & 1) * '\x02' + 1;
          cVar5 = '\x03';
          uVar7 = 3;
        }
      }
      else {
        cVar5 = bStack_4f * '\x02' + '\x01';
        bVar6 = bStack_4f | 2;
        uVar7 = 0;
      }
      cVar2 = _ZN5uu_cp8platform5linux18check_dest_is_fifo17h6561bbf78e4b4973E(param_4,param_5);
      bVar3 = 1;
      if (cVar2 == '\0') {
        bVar3 = bVar6;
      }
      param_1[1] = uVar7;
      param_1[2] = 1;
      param_1[3] = cVar5;
      param_1[4] = bVar3;
      uVar7 = 0;
      goto LAB_0019c389;
    }
    uVar4 = CONCAT71(uStack_47,local_48);
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar7 = 1;
LAB_0019c389:
  *param_1 = uVar7;
  return;
}