void _ZN2rg5flags4defs7convert6string17h510840cb1bb73f10E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_78);
  local_40 = (undefined4)local_78;
  uStack_3c = local_78._4_4_;
  uStack_38 = (undefined4)uStack_70;
  uStack_34 = uStack_70._4_4_;
  local_30 = uStack_68;
  local_48 = 1;
  _ZN4core3ptr99drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__ffi__os_str__OsString_GT__GT_17ha8786323dbda0a67E
            (&local_48);
  local_78 = &PTR_s_value_is_not_valid_UTF_8_004ea250;
  uStack_70 = 1;
  uStack_68 = 8;
  local_60 = 0;
  uStack_58 = 0;
  uVar1 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_78);
  param_1[1] = uVar1;
  *param_1 = 0x8000000000000000;
  return;
}