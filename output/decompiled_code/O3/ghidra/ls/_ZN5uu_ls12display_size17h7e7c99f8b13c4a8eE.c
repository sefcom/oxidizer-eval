/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall uu_ls::display_size(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 uStack_28;
  undefined auStack_20 [16];
  
  uStack_28 = param_2;
  if (param_3 == '\0') {
    _<T_as_alloc::string::ToString>::to_string(param_1,&uStack_28);
  }
  else {
    auVar2._8_4_ = (int)((ulong)param_2 >> 0x20);
    auVar2._0_8_ = param_2;
    auVar2._12_4_ = _UNK_00123b94;
    if (param_3 == '\x01') {
      uVar1 = 0xf0e0d0c0b0a0908;
    }
    else {
      uVar1 = 0x706050403020100;
    }
    number_prefix::NumberPrefix<F>::format_number
              ((auVar2._8_8_ - _UNK_00123b08) +
               ((double)CONCAT44(_DAT_00123b90,(int)param_2) - _DAT_00123b00),auStack_20,uVar1);
    uucore::features::format::human::format_prefixed(param_1,auStack_20);
  }
  return param_1;
}