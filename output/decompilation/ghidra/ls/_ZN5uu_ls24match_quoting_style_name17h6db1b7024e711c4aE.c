uint __rustcall
uu_ls::match_quoting_style_name(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d50,7);
  if (cVar1 != '\0') {
    uVar3 = param_3 & 0xff;
    param_3 = 3;
    goto LAB_0021f8d2;
  }
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d57,5);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d5c,0xc);
    if (cVar1 != '\0') {
      uVar3 = 0x100;
      goto LAB_0021f8d2;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d68,0xc);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_0021f8d2;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d74,0x13);
    if (cVar1 != '\0') {
      uVar3 = 0x101;
      goto LAB_0021f8d2;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d87,1);
    if (cVar1 != '\0') {
      param_3 = 2;
      uVar3 = 2;
      goto LAB_0021f8d2;
    }
    bVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134d88,6);
    param_3 = (ushort)(byte)((bVar2 ^ 1) * '\x02' + 2);
  }
  uVar3 = 0;
LAB_0021f8d2:
  return CONCAT22(param_3,uVar3) & 0xffffff;
}