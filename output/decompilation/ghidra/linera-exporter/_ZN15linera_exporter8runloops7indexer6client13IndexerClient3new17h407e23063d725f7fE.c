void _ZN15linera_exporter8runloops7indexer6client13IndexerClient3new17h407e23063d725f7fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined7 local_b8;
  undefined uStack_b1;
  undefined7 uStack_b0;
  undefined uStack_a9;
  undefined7 uStack_a8;
  undefined uStack_a1;
  undefined7 uStack_a0;
  undefined uStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  
  local_108 = *param_4;
  local_100 = *(undefined4 *)(param_4 + 1);
  local_f8 = param_4[2];
  local_f0 = *(undefined4 *)(param_4 + 3);
  _ZN15linera_exporter8runloops7indexer6client14create_channel17h3a05781bbffe7603E
            (&local_b8,param_2,param_3,&local_108);
  uVar3 = CONCAT17(uStack_a1,uStack_a8);
  if (CONCAT17(uStack_b1,local_b8) == 4) {
    uStack_a1 = (undefined)uStack_a0;
    uStack_a0 = (undefined7)(CONCAT17(uStack_99,uStack_a0) >> 8);
    uStack_b1 = (undefined)uStack_b0;
    uStack_b0 = (undefined7)(CONCAT17(uStack_a9,uStack_b0) >> 8);
    uStack_a9 = (undefined)uStack_a8;
    uStack_a8 = (undefined7)((ulong)uVar3 >> 8);
    *(undefined *)(param_1 + 1) = 0;
    *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_b1,local_b8);
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_a9,uStack_b0);
    param_1[3] = CONCAT71(uStack_a8,uStack_a9);
    param_1[4] = CONCAT71(uStack_a0,uStack_a1);
    uVar3 = 2;
  }
  else {
    local_c8 = local_98;
    uStack_c0 = uStack_90;
    local_128 = (undefined4)uStack_b0;
    uStack_124 = (undefined4)(CONCAT17(uStack_a9,uStack_b0) >> 0x20);
    uStack_120 = (undefined4)uStack_a8;
    uStack_11c = (undefined4)((ulong)uVar3 >> 0x20);
    local_e0 = local_128;
    uStack_dc = uStack_124;
    uStack_d8 = uStack_120;
    uStack_d4 = uStack_11c;
    _ZN5tonic6client4grpc13Grpc_LT_T_GT_3new17h57285e985d8867c1E(&local_b8,local_e8);
    (*(code *)PTR_memcpy_01592358)(param_1 + 4,&local_98,0x88);
    uVar3 = param_4[4];
    uVar1 = *(undefined4 *)(param_4 + 5);
    uVar2 = *(undefined4 *)(param_4 + 6);
    param_1[1] = 0x1000000;
    param_1[2] = 1;
    param_1[3] = 0x1000000;
    param_1[0x15] = uVar3;
    *(undefined4 *)(param_1 + 0x16) = uVar1;
    *(undefined4 *)(param_1 + 0x17) = uVar2;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}