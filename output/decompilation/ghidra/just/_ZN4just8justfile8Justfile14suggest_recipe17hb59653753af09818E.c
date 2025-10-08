void _ZN4just8justfile8Justfile14suggest_recipe17hb59653753af09818E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong local_140 [3];
  undefined8 local_128;
  ulong local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  ulong local_f8 [3];
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined local_b0 [144];
  
  local_140[2] = *(long *)(param_2 + 0x2b8);
  local_128 = *(undefined8 *)(param_2 + 0x2c0);
  local_140[0] = (ulong)(local_140[2] != 0);
  local_100 = local_140[2];
  if (local_140[2] != 0) {
    local_100 = *(long *)(param_2 + 0x2c8);
  }
  local_140[1] = 0;
  local_118 = 0;
  local_f8[2] = *(long *)(param_2 + 0x268);
  local_e0 = *(undefined8 *)(param_2 + 0x270);
  local_f8[0] = (ulong)(local_f8[2] != 0);
  local_b8 = local_f8[2];
  if (local_f8[2] != 0) {
    local_b8 = *(long *)(param_2 + 0x278);
  }
  local_f8[1] = 0;
  local_d0 = 0;
  local_120 = local_140[0];
  local_110 = local_140[2];
  local_108 = local_128;
  local_d8 = local_f8[0];
  local_c8 = local_f8[2];
  local_c0 = local_e0;
  _ZN4core4iter6traits8iterator8Iterator5chain17haa3d52ba03d9dcf6E(local_b0,local_140,local_f8);
  _ZN4just8justfile8Justfile15find_suggestion17h195c97c6d52fdda6E(param_1,param_3,param_4,local_b0);
  return;
}