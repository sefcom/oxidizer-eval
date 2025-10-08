void _ZN5uu_cp8platform5linux32handle_reflink_auto_sparse_never17hd22b7d91bc1c3709E
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  undefined uVar3;
  undefined8 uVar4;
  char cVar5;
  char local_40;
  char cStack_3f;
  undefined6 uStack_3e;
  byte local_38;
  undefined7 uStack_37;
  
  _ZN5uu_cp8platform5linux14check_for_data17h216f58a42b2327b0E(&local_40);
  bVar2 = local_38;
  if (local_38 == 2) {
    uVar4 = CONCAT62(uStack_3e,CONCAT11(cStack_3f,local_40));
  }
  else {
    uVar1 = CONCAT11(cStack_3f,local_40);
    _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(&local_40,param_2,param_3);
    if (local_40 != '\x01') {
      cVar5 = '\x03';
      if (0x1ff < CONCAT62(uStack_3e,uVar1)) {
        cVar5 = ((bVar2 & 1) != 0) * '\x03';
      }
      param_1[1] = cVar5;
      param_1[2] = 1;
      param_1[3] = cStack_3f * '\x02' + '\x01';
      uVar3 = 0;
      goto LAB_0019c15a;
    }
    uVar4 = CONCAT71(uStack_37,local_38);
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar3 = 1;
LAB_0019c15a:
  *param_1 = uVar3;
  return;
}