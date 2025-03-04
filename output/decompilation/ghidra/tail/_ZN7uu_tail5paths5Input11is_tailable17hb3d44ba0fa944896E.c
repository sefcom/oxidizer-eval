void _ZN7uu_tail5paths5Input11is_tailable17hb3d44ba0fa944896E(long param_1)

{
  undefined local_20 [24];
  
  if (*(long *)(param_1 + 0x18) == -0x8000000000000000) {
    _ZN7uu_tail5paths5Input7resolve17h81e1f38162942b9dE(local_20);
    _ZN4core6option15Option_LT_T_GT_6map_or17h79f8bc23ef2e4ca1E(local_20);
    return;
  }
  _ZN7uu_tail5paths16path_is_tailable17h49529ca9961beb32E
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}