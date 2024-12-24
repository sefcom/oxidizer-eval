uint __rustcall
uu_ls::match_quoting_style_name(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e50,7);
  if (cVar1 != '\0') {
    uVar3 = param_3 & 0xff;
    param_3 = 3;
    goto LAB_0021f832;
  }
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e57,5);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e5c,0xc);
    if (cVar1 != '\0') {
      uVar3 = 0x100;
      goto LAB_0021f832;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e68,0xc);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_0021f832;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e74,0x13);
    if (cVar1 != '\0') {
      uVar3 = 0x101;
      goto LAB_0021f832;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e87,1);
    if (cVar1 != '\0') {
      uVar3 = 2;
      param_3 = 2;
      goto LAB_0021f832;
    }
    bVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00134e88,6);
    param_3 = (ushort)(byte)((bVar2 ^ 1) * '\x02' + 2);
  }
  uVar3 = 0;
LAB_0021f832:
  return CONCAT22(param_3,uVar3) & 0xffffff;
}