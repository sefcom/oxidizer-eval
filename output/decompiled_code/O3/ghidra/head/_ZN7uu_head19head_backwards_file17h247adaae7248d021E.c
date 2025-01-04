undefined8 __rustcall uu_head::head_backwards_file(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  int local_d0 [2];
  undefined8 local_c8;
  ulong local_80;
  ulong local_78;
  
  std::fs::File::metadata(local_d0,param_1);
  if (local_d0[0] == 2) {
    return local_c8;
  }
  cVar1 = is_seekable(param_1);
  uVar3 = 0x200;
  if (local_78 < 0x20000001) {
    uVar3 = local_78;
  }
  if (local_78 == 0) {
    uVar3 = 0x200;
  }
  if ((cVar1 != '\0') && (uVar3 < local_80)) {
    uVar2 = head_backwards_on_seekable_file(param_1,param_2);
    return uVar2;
  }
  uVar2 = head_backwards_without_seek_file(param_1,param_2);
  return uVar2;
}