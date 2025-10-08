void _ZN9uu_numfmt6format14transform_from17hcd3fb358ec05b121E(undefined8 *param_1)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40;
  undefined local_3f;
  undefined4 local_3e;
  undefined2 local_3a;
  
  _ZN9uu_numfmt6format12parse_suffix17h65381ef2a47d074cE(&local_50);
  *(undefined2 *)((long)param_1 + 0x16) = local_3a;
  *(undefined4 *)((long)param_1 + 0x12) = local_3e;
  *param_1 = local_50;
  param_1[1] = local_48;
  *(undefined *)(param_1 + 2) = local_40;
  *(undefined *)((long)param_1 + 0x11) = local_3f;
  return;
}