void _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter7add_one17hae2c629763b1b7f5E
               (undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined local_24;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  lVar2 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                    (*puVar1,puVar1[1]);
  if (*(char *)(lVar2 + 0xd) == '\x01') {
    lVar2 = (**(code **)(puVar1[1] + 0x30))(*puVar1);
    if (*(char *)(lVar2 + 0x3c) == '\x02') {
      _ZN21ruff_python_formatter6string9docstring11CodeExample3add17h580c37a480c14f8fE
                (param_2 + 0x20,param_3,param_2);
      _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter16run_action_queue17h5e595196a30effb1E
                (param_1,param_2);
      return;
    }
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_24 = *(long *)(param_3 + 4) == 0;
  local_28 = param_3[8];
  local_40 = 0x8000000000000000;
                    /* try { // try from 00422eb0 to 00422ebf has its CatchHandler @ 00422ed6 */
  _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
            (param_1,param_2,&local_40);
  _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
            (&local_40);
  return;
}