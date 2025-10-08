void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_9shard_for17h0b00677dc09e2974E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined2 uVar1;
  long lVar2;
  char local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (*(code *)
    PTR__ZN116__LT_linera_rpc__grpc__api__HandleConfirmedCertificateRequest_u20_as_u20_linera_rpc__grpc__server__GrpcProxyable_GT_8chain_id17he0b1e783aec7b9c1E_0164e0f8
  )(&local_59,param_3);
  if (local_59 == '\x01') {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    lVar2 = _ZN10linera_rpc6config42ValidatorInternalNetworkPreConfig_LT_P_GT_13get_shard_for17h0c80a5ec5609a565E
                      (param_2 + 0xc0,&local_38);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0164be40
    )(param_1,lVar2);
    uVar1 = *(undefined2 *)(lVar2 + 0x1c);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar2 + 0x18);
    *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
    return;
  }
  *param_1 = 0x8000000000000000;
  return;
}