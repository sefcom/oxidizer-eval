void _ZN9alacritty8renderer8Renderer11draw_string17he0cf7f189aeb0195E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined local_99;
  undefined2 local_98;
  undefined local_96;
  undefined2 local_94;
  undefined local_92;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  undefined local_58 [56];
  
  local_98 = (undefined2)param_4;
  local_96 = (undefined)((uint)param_4 >> 0x10);
  local_94 = (undefined2)param_5;
  local_92 = (undefined)((uint)param_5 >> 0x10);
  local_99 = 0;
  local_90 = param_2;
  local_88 = param_3;
  _ZN4core4iter6traits8iterator8Iterator9enumerate17hef2cc85779210b7bE(local_58,param_6);
  local_80 = &local_99;
  local_78 = &local_90;
  local_68 = &local_98;
  local_60 = &local_94;
  local_70 = &local_88;
  _ZN9alacritty8renderer8Renderer10draw_cells17hf2a27e7b194b280cE(param_1,param_7,param_8,&local_80)
  ;
  return;
}