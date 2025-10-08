void _ZN21ruff_python_formatter8comments9placement13place_comment17hdc002448fefacf00E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_80 [80];
  
  _ZN21ruff_python_formatter8comments9placement28handle_parenthesized_comment17h8e0502a789509c98E
            (local_80,param_2,param_4,param_5);
  _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17hd26c0204f9ea4061E
            (&local_d0,local_80,param_4,param_5);
  _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h6c4df664162ac8d3E
            (local_80,&local_d0,param_4,param_5);
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_5;
  _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17hc3d15522a75fe24cE
            (param_1,local_80,&local_d0);
  return;
}