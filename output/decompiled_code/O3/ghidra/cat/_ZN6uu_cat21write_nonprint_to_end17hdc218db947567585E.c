long __rustcall
uu_cat::write_nonprint_to_end
          (long param_1,long param_2,undefined8 param_3,ushort *param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ushort *puVar4;
  long lVar5;
  ushort local_4c;
  byte local_4a;
  char local_49;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_38 = param_2 + param_1;
  local_48 = param_5;
  local_40 = param_1;
  pbVar2 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_40);
  lVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    do {
      bVar1 = *pbVar2;
      uVar3 = local_48;
      puVar4 = param_4;
      if (bVar1 != 9) {
        if (bVar1 == 0x7f) {
          uVar3 = 2;
          puVar4 = (ushort *)"^?";
        }
        else {
          if (bVar1 == 10) {
            return lVar5;
          }
          if (bVar1 < 0x20) {
            local_4c = CONCAT11(bVar1,0x5e) | 0x4000;
            uVar3 = 2;
          }
          else if ((byte)(bVar1 - 0x20) < 0x5f) {
            local_4c = CONCAT11(local_4c._1_1_,bVar1);
            uVar3 = 1;
          }
          else if ((char)bVar1 < -0x60) {
            local_49 = bVar1 - 0x40;
            local_4c = 0x2d4d;
            local_4a = 0x5e;
            uVar3 = 4;
          }
          else {
            if (0x5e < (byte)(bVar1 + 0x60)) {
              uVar3 = 4;
              puVar4 = (ushort *)&DAT_0010a650;
              goto LAB_001b12ef;
            }
            local_4a = bVar1 & 0x7f;
            local_4c = 0x2d4d;
            uVar3 = 3;
          }
          puVar4 = &local_4c;
        }
      }
LAB_001b12ef:
      uVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,puVar4,uVar3);
      core::result::Result<T,E>::unwrap(uVar3,&PTR_s_src_uu_cat_src_cat_rs_00219250);
      lVar5 = lVar5 + 1;
      pbVar2 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_40);
    } while (pbVar2 != (byte *)0x0);
  }
  return lVar5;
}