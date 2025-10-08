void _ZN2fd6filter4size10SizeFilter11from_string17h198237eb6d70d397E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_3;
  auVar2 = _ZN2fd6filter4size10SizeFilter9parse_opt17h90fd64b2c85beca5E(param_2,param_3);
  lVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 3) {
    lVar1 = _ZN2fd6filter4size10SizeFilter11from_string28__u7b__u7b_closure_u7d__u7d_17hd1a80c410c70d5ebE
                      (&local_20);
  }
  param_1[1] = lVar1;
  *param_1 = auVar2._0_8_;
  return;
}