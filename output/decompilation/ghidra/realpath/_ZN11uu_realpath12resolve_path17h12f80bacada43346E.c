void _ZN11uu_realpath12resolve_path17h12f80bacada43346E
               (undefined8 param_1,undefined8 param_2,undefined param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  long lVar1;
  undefined local_61;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  
  _ZN6uucore8features2fs12canonicalize17h4be5c7a9ad65d7f1E
            (&local_60,param_1,param_2,param_5,param_4);
  if (local_60 != -0x8000000000000000) {
    local_48 = local_60;
    local_40 = local_58;
    local_38 = local_50;
    _ZN11uu_realpath16process_relative17h8c6e307666422bfaE
              (local_30,&local_48,param_8,param_9,param_6,param_7);
    lVar1 = _ZN6uucore4mods7display14print_verbatim17hdcaab9bba9aa0144E(local_30);
    if (lVar1 == 0) {
      local_60 = _ZN3std2io5stdio6stdout17h077da66234850927E();
      local_61 = param_3;
      _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE
                (&local_60,&local_61,1);
    }
  }
  return;
}