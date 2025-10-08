void _ZN21ruff_python_formatter6string9docstring19OutputDocstringLine3map17h478fa21ff20c0528E
               (undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
                    /* try { // try from 004245a5 to 004245b2 has its CatchHandler @ 004245e2 */
  _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter16run_action_queue28__u7b__u7b_closure_u7d__u7d_17h051dbca0586d6014E
            (&local_28,param_3,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 4) = local_18;
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  *(undefined *)(param_1 + 7) = *(undefined *)(param_2 + 0x1c);
  _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
            (param_2);
  return;
}