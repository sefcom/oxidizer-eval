void _ZN12linera_proxy4grpc27GrpcMessageLimiter_LT_T_GT_4fits17h52b80d7647445b66E
               (undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined local_68 [80];
  
  (*(code *)
    PTR__ZN10linera_rpc4grpc11conversions133__LT_impl_u20_core__convert__TryFrom_LT_linera_chain__certificate__Certificate_GT__u20_for_u20_linera_rpc__grpc__api__Certificate_GT_8try_from17h68196346166bc582E_0164d048
  )(local_68,param_3);
  uVar2 = _ZN12linera_proxy4grpc27GrpcMessageLimiter_LT_T_GT_4fits28__u7b__u7b_closure_u7d__u7d_17h45acde08a7c4f9dbE
                    (local_68);
  uVar1 = *param_2;
  if (uVar2 <= uVar1) {
    *param_2 = uVar1 - uVar2;
  }
  *(bool *)(param_1 + 1) = uVar2 <= uVar1;
  *param_1 = &DAT_8000000000000010;
  return;
}