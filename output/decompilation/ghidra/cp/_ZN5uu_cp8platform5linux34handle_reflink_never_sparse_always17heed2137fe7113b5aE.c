void _ZN5uu_cp8platform5linux34handle_reflink_never_sparse_always17heed2137fe7113b5aE
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined2 uVar1;
  byte bVar2;
  undefined uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  char local_48;
  char cStack_47;
  undefined6 uStack_46;
  byte local_40;
  undefined7 uStack_3f;
  long local_38;
  
  _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(&local_48);
  bVar2 = local_40;
  if (local_40 == 2) {
    uVar4 = CONCAT62(uStack_46,CONCAT11(cStack_47,local_48));
  }
  else {
    uVar1 = CONCAT11(cStack_47,local_48);
    _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(&local_48,param_2,param_3);
    if (local_48 != '\x01') {
      if ((bVar2 & 1) == 0) {
        cVar6 = (CONCAT62(uStack_46,uVar1) < 0x200) * '\x03';
        bVar7 = false;
        if (cStack_47 == '\0') {
          cVar5 = '\x02';
        }
        else {
          if (local_38 != 0) {
            cVar6 = '\0';
          }
          cVar5 = '\x03';
        }
      }
      else {
        bVar7 = local_38 == 0;
        cVar5 = cStack_47 * '\x02' + '\x02';
        cVar6 = '\x03';
      }
      bVar2 = _ZN5uu_cp8platform5linux18check_dest_is_fifo17h6561bbf78e4b4973E(param_4,param_5);
      param_1[1] = cVar6;
      param_1[2] = 1;
      param_1[3] = cVar5;
      param_1[4] = bVar2 & 1 | bVar7;
      uVar3 = 0;
      goto LAB_0019c482;
    }
    uVar4 = CONCAT71(uStack_3f,local_40);
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar3 = 1;
LAB_0019c482:
  *param_1 = uVar3;
  return;
}