long _ZN7spyware7actions10basic_info22get_basic_info_request17h37840dd4820167afE(long param_1)

{
  ulong uVar1;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar1) {
    local_38 = &PTR_s_Handling_get_basic_info_request_001b97e8;
    local_30 = 1;
    local_28 = 8;
    local_20 = 0;
    uStack_18 = 0;
    local_40 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_s_src_actions_basic_info_rs_001b97f8);
    local_60 = 
    "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
    ;
    local_58 = 0x1c;
    local_50 = 
    "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
    ;
    local_48 = 0x1c;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_38,4,&local_60);
  }
  _ZN7spyware7actions10basic_info19get_running_os_info17h2ac1d86b9171dd43E(param_1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined *)(param_1 + 0x3e) = 1;
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  return param_1;
}