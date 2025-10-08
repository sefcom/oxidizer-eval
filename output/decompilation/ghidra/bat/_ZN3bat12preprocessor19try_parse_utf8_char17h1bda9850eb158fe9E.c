undefined8
_ZN3bat12preprocessor19try_parse_utf8_char17h1bda9850eb158fe9E(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_89;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined local_70 [16];
  undefined8 local_60;
  long local_58 [3];
  undefined local_40 [24];
  
  if (param_2 != 0) {
    auVar2 = _ZN4core3ops8function6FnOnce9call_once17h54c7237f01dba59cE(param_1,1);
    if (auVar2._0_8_ != 0) {
      local_60 = 1;
      goto LAB_0053dd48;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  auVar2 = auVar2 << 0x40;
LAB_0053dd48:
  local_88 = param_1;
  local_80 = param_2;
  local_78 = &local_89;
  local_70 = auVar2;
  _ZN4core6option15Option_LT_T_GT_7or_else17hfee0966e79903d38E(local_40,local_70,&local_88);
  local_88 = param_1;
  local_80 = param_2;
  local_78 = &local_89;
  _ZN4core6option15Option_LT_T_GT_7or_else17ha099be0b27fe940cE(local_70,local_40,&local_88);
  local_88 = param_1;
  local_80 = param_2;
  local_78 = &local_89;
  _ZN4core6option15Option_LT_T_GT_7or_else17h79e5d0e906669d4eE(local_58,local_70,&local_88);
  if (local_58[0] == 0) {
    uVar1 = 0x110000;
  }
  else {
    uVar1 = _ZN3bat12preprocessor19try_parse_utf8_char28__u7b__u7b_closure_u7d__u7d_17h88b6350c93ea306cE
                      (local_58);
  }
  return uVar1;
}