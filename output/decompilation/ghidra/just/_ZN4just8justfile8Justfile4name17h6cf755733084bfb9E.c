undefined  [16] _ZN4just8justfile8Justfile4name17h6cf755733084bfb9E(long param_1)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  char local_8;
  undefined3 local_7;
  undefined uStack_4;
  undefined3 uStack_3;
  
  local_8 = *(char *)(param_1 + 0x230);
  if (local_8 == '%') {
    return ZEXT816(1);
  }
  local_48 = *(undefined4 *)(param_1 + 0x1f0);
  uStack_44 = *(undefined4 *)(param_1 + 500);
  uStack_40 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_3c = *(undefined4 *)(param_1 + 0x1fc);
  local_38 = *(undefined4 *)(param_1 + 0x200);
  uStack_34 = *(undefined4 *)(param_1 + 0x204);
  uStack_30 = *(undefined4 *)(param_1 + 0x208);
  uStack_2c = *(undefined4 *)(param_1 + 0x20c);
  local_28 = *(undefined4 *)(param_1 + 0x210);
  uStack_24 = *(undefined4 *)(param_1 + 0x214);
  uStack_20 = *(undefined4 *)(param_1 + 0x218);
  uStack_1c = *(undefined4 *)(param_1 + 0x21c);
  local_18 = *(undefined4 *)(param_1 + 0x220);
  uStack_14 = *(undefined4 *)(param_1 + 0x224);
  uStack_10 = *(undefined4 *)(param_1 + 0x228);
  uStack_c = *(undefined4 *)(param_1 + 0x22c);
  local_7 = (undefined3)*(undefined4 *)(param_1 + 0x231);
  uStack_4 = (undefined)*(undefined4 *)(param_1 + 0x234);
  uVar1 = (uint)_uStack_3 >> 0x18;
  _uStack_3 = CONCAT13((char)uVar1,(int3)((uint)*(undefined4 *)(param_1 + 0x234) >> 8));
  auVar2 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_48);
  return auVar2;
}