void __rustcall
uu_ls::colors::StyleManager::get_style_code(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_79;
  undefined local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_20;
  undefined local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined local_11;
  undefined local_10;
  
  *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)((long)param_3 + 0xd);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  lscolors::style::Style::to_nu_ansi_term_style(&local_79,param_3);
  local_71 = 0;
  local_10 = local_69;
  local_20 = local_79;
  local_18 = 0;
  local_17 = local_70;
  local_13 = local_6c;
  local_11 = local_6a;
  local_50 = 0x8000000000000000;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0x8000000000000002;
                    /* try { // try from 0023bb9e to 0023bbac has its CatchHandler @ 0023bbe4 */
  _<T_as_alloc::string::ToString>::to_string(&local_68,&local_50);
                    /* try { // try from 0023bbad to 0023bbc9 has its CatchHandler @ 0023bbf3 */
  core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&local_50);
  ::alloc::string::String::truncate(&local_68,local_58 + -4);
  param_1[2] = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_60;
  return;
}