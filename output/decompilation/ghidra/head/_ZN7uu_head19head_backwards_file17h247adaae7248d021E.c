undefined8
_ZN7uu_head19head_backwards_file17h247adaae7248d021E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  int local_d0 [2];
  undefined8 local_c8;
  ulong local_80;
  ulong local_78;
  
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(local_d0,param_1);
  if (local_d0[0] == 2) {
    return local_c8;
  }
  cVar1 = _ZN7uu_head11is_seekable17h10276630579ab154E(param_1);
  uVar3 = 0x200;
  if (local_78 < 0x20000001) {
    uVar3 = local_78;
  }
  if (local_78 == 0) {
    uVar3 = 0x200;
  }
  if ((cVar1 != '\0') && (uVar3 < local_80)) {
    uVar2 = _ZN7uu_head31head_backwards_on_seekable_file17h9ab8f833488ebf97E(param_1,param_2);
    return uVar2;
  }
  uVar2 = _ZN7uu_head32head_backwards_without_seek_file17h3a18ae91fc5190c0E(param_1,param_2);
  return uVar2;
}