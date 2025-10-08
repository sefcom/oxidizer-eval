void _ZN11uu_realpath12resolve_path17h552c68346491a6aaE
               (undefined8 param_1,undefined8 param_2,undefined param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  long lVar1;
  undefined local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  
  _ZN6uucore8features2fs12canonicalize17h7cde29b0af4066d7E
            (&local_60,param_1,param_2,param_5,param_4);
  local_48 = local_60;
  local_40 = local_58;
  local_38 = local_50;
  _ZN11uu_realpath16process_relative17he019ee2f680b65b0E
            (local_30,&local_48,param_8,param_9,param_6,param_7);
  lVar1 = _ZN6uucore4mods7display14print_verbatim17h7448dce65f98869fE(local_30);
  if (lVar1 == 0) {
    local_60 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f31a8)();
    local_61 = param_3;
    (*(code *)
      PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_001f32d0
    )(&local_60,&local_61,1);
  }
  return;
}