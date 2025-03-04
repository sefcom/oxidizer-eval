void _ZN5uu_cp8platform5linux31handle_reflink_auto_sparse_auto17h1e687e1533235ec7E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  char local_50;
  char cStack_4f;
  undefined6 uStack_4e;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  long local_38;
  
  _ZN5uu_cp8platform5linux14check_for_data17h21b9fcb33088a74cE(&local_50);
  cVar6 = local_48;
  if (local_48 == '\x02') {
    uVar4 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
  }
  else {
    local_38 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
    _ZN5uu_cp8platform5linux22check_sparse_detection17he625f50b8a9bdb43E(&local_50,param_2,param_3);
    if (local_50 == '\0') {
      if (cVar6 == '\0') {
        cVar6 = (local_38 - 1U < 0x1ff) * '\x02';
        bVar7 = cStack_4f == '\0' ^ 3;
        bVar5 = cStack_4f * '\x02' | 1;
      }
      else {
        if (local_38 == 0) {
          cVar6 = '\x04';
        }
        else {
          cVar6 = '\x02';
        }
        if (cStack_4f == '\0') {
          bVar5 = 1;
          bVar7 = 2;
        }
        else {
          bVar7 = 3;
          bVar5 = 3;
          if (local_40 == 0) {
            cVar6 = '\x04';
            bVar7 = 1;
          }
        }
      }
      cVar2 = _ZN5uu_cp8platform5linux18check_dest_is_fifo17h1ec55e7a10ac562cE(param_4,param_5);
      bVar3 = 1;
      if (cVar2 == '\0') {
        bVar3 = bVar7;
      }
      param_1[1] = cVar6;
      param_1[2] = 4;
      param_1[3] = bVar5;
      param_1[4] = bVar3;
      uVar1 = 0;
      goto LAB_00213edf;
    }
    uVar4 = CONCAT71(uStack_47,local_48);
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar1 = 1;
LAB_00213edf:
  *param_1 = uVar1;
  return;
}