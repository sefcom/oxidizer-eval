undefined8 __rustcall
uu_tee::process_error(byte *param_1,undefined8 param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_60;
  code *local_58;
  undefined *local_50;
  code *local_48;
  undefined local_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined local_28;
  
  local_98 = param_2;
  if (param_1 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001b3722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00113afc + *(int *)(&DAT_00113afc + (ulong)*param_1 * 4)))();
    return uVar2;
  }
  cVar1 = std::io::error::Error::kind(param_2);
  if (cVar1 != '\v') {
    local_40 = uucore::util_name();
    local_58 = _<&T_as_core::fmt::Display>::fmt;
    local_90 = &DAT_0021f9a8;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = &local_60;
    local_60 = (undefined8 *)local_40;
    std::io::stdio::_eprint(&local_90);
    local_40._8_8_ = *(undefined8 *)(param_3 + 8);
    uStack_30 = *(undefined4 *)(param_3 + 0x10);
    uStack_2c = *(undefined4 *)(param_3 + 0x14);
    local_40._0_8_ = 0;
    local_28 = 0;
    local_58 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_48 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
    local_90 = &DAT_0021f9c8;
    local_88 = 3;
    local_70 = 0;
    local_78 = 2;
    local_80 = &local_60;
    local_60 = (undefined8 *)local_40;
    local_50 = (undefined *)&local_98;
    std::io::stdio::_eprint(&local_90);
    *param_4 = *param_4 + 1;
    param_2 = local_98;
  }
  core::ptr::drop_in_place<std::io::error::Error>(param_2);
  return 0;
}