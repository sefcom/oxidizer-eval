void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_19as_notifier_service17h371a1d964230f3d2E
               (undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long *plStack_10;
  
  LOCK();
  lVar1 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY8(lVar1,1) != *param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_20 = 1;
  uStack_18 = 1;
  plStack_10 = param_2;
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7fcd7d566a299e71E(&uStack_20);
  _ZN10linera_rpc4grpc3api21validator_node_server28ValidatorNodeServer_LT_T_GT_8from_arc17h503adf473a62a2eaE
            (param_1,uVar3);
  return;
}