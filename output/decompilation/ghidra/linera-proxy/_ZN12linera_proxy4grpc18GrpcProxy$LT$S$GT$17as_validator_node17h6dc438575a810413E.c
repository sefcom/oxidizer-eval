void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_17as_validator_node17h6dc438575a810413E
               (undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined local_30 [32];
  undefined8 local_10;
  
  LOCK();
  lVar1 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 != 0 && SCARRY8(lVar1,1) == *param_2 < 0) {
    _ZN10linera_rpc4grpc3api21validator_node_server28ValidatorNodeServer_LT_T_GT_3new17h67b513d09d76df73E
              (local_30);
    param_1[4] = local_10;
    param_1[2] = 1;
    param_1[3] = 0x1000000;
    *param_1 = 1;
    param_1[1] = 0x1000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}