void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_23worker_client_for_shard17h5c25ff08ca6d3d63E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_108 [8];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined auStack_b8 [8];
  undefined8 local_b0;
  undefined local_30 [24];
  
  (*(code *)PTR__ZN10linera_rpc6config11ShardConfig12http_address17h2ff913925c718f42E_0164e138)
            (local_30,param_3);
  (*(code *)PTR__ZN10linera_rpc4grpc4pool18GrpcConnectionPool7channel17h25fa9f4778483308E_0164e140)
            (&local_d8,param_2 + 0x10,local_30);
  uVar2 = uStack_c4;
  uVar1 = uStack_c8;
  uStack_110 = auStack_b8._0_4_;
  uStack_10c = auStack_b8._4_4_;
  if (CONCAT44(uStack_d4,local_d8) == 4) {
    uStack_c8 = local_c0;
    uStack_c4 = uStack_bc;
    local_c0 = uStack_110;
    uStack_bc = uStack_10c;
    local_d8 = uStack_d0;
    uStack_d4 = uStack_cc;
    uStack_d0 = uVar1;
    uStack_cc = uVar2;
    uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hc9ace3ed85f4d1b4E
                      (&local_d8);
    uVar4 = 2;
  }
  else {
    local_100 = uStack_d0;
    uStack_fc = uStack_cc;
    uStack_f8 = uStack_c8;
    uStack_f4 = uStack_c4;
    local_f0 = local_c0;
    uStack_ec = uStack_bc;
    uStack_e8 = uStack_110;
    uStack_e4 = uStack_10c;
    local_e0 = local_b0;
    _ZN5tonic6client4grpc13Grpc_LT_T_GT_3new17hce96d0ad8280a8d6E(&local_d8,local_108);
    (*(code *)PTR_memcpy_0164bc18)(param_1 + 4,auStack_b8,0x88);
    param_1[2] = 1;
    param_1[3] = 0x1000000;
    uVar4 = 1;
    uVar3 = 0x1000000;
  }
  param_1[1] = uVar3;
  *param_1 = uVar4;
  return;
}