void _ZN8uu_touch5error11to_uioerror17h7e27501fb98548a2E(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  char local_20 [4];
  int local_1c;
  
  _ZN3std2io5error14repr_bitpacked11decode_repr17h60fa891ec952a586E(local_20);
  if (local_20[0] == '\0') {
    uVar2 = (ulong)local_1c;
    uVar3 = 2;
  }
  else {
    bVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(param_2);
    uVar2 = (ulong)bVar1;
    uVar3 = 3;
  }
  *param_1 = 0x8000000000000000;
  param_1[3] = uVar2 << 0x20 | uVar3;
  return;
}