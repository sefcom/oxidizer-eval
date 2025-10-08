undefined4 _ZN10uu_timeout20preserve_signal_info17hb9d002af3875c7fcE(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_getpid_0021aca0)();
  (*(code *)PTR_kill_0021aca8)(uVar1,param_1);
  return param_1;
}