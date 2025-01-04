undefined  [16] __rustcall
uu_fmt::parasplit::FileLines::match_prefix
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  undefined auVar1 [16];
  
  if (*param_1 == -0x8000000000000000) {
    return ZEXT816(0x8000000000000001);
  }
  auVar1 = match_prefix_generic
                     (param_1[1],param_1[2],param_2,param_3,*(undefined *)((long)param_1 + 0x4c),
                      param_6,0x8000000000000000);
  return auVar1;
}