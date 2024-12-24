long __rustcall uu_shred::do_pass(undefined8 param_1,undefined8 param_2,char param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar5 = puVar1;
    *(undefined8 *)(puVar5 + -0x1000) = 0;
    puVar1 = puVar5 + -0x1000;
  } while (puVar5 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar5 + -0x1160) = 0x1bd01f;
  lVar2 = std::io::Seek::rewind();
  if (lVar2 == 0) {
    *(undefined8 *)(puVar5 + -0x1160) = 0x1bd036;
    BytesWriter::from_pass_type(puVar5 + -0x1158,param_2);
    uVar3 = 0;
    do {
      if (param_4 >> 0x10 <= uVar3) {
        if ((param_4 & 0xffff) != 0) {
          uVar3 = 0x10000;
          if (param_3 != '\0') {
            uVar3 = param_4 & 0xffff;
          }
          *(undefined8 *)(puVar5 + -0x1160) = 0x1bd08c;
          uVar4 = BytesWriter::bytes_for_pass(puVar5 + -0x1158,uVar3);
          *(undefined8 *)(puVar5 + -0x1160) = 0x1bd097;
          lVar2 = std::io::Write::write_all(param_1,uVar4);
          if (lVar2 != 0) {
            return lVar2;
          }
        }
        *(undefined8 *)(puVar5 + -0x1160) = 0x1bd0a5;
        lVar2 = std::fs::File::sync_data(param_1);
        if (lVar2 != 0) {
          return lVar2;
        }
        return 0;
      }
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd04d;
      uVar3 = _<u64_as_core::iter::range::Step>::forward_unchecked(uVar3);
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd05d;
      uVar4 = BytesWriter::bytes_for_pass(puVar5 + -0x1158,0x10000);
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd068;
      lVar2 = std::io::Write::write_all(param_1,uVar4);
    } while (lVar2 == 0);
  }
  return lVar2;
}