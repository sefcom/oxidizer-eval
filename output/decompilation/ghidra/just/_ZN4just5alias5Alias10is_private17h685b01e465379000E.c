undefined4 _ZN4just5alias5Alias10is_private17h685b01e465379000E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 local_1c;
  
  uVar1 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_1 + 0x20);
  local_1c = 0;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x5f,&local_1c);
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                    (uVar1,extraout_RDX,uVar2,extraout_RDX_00);
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar4 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E(param_1,0xf);
  }
  return uVar4;
}