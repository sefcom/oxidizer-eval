void _ZN11firecracker18api_server_adapter16ApiServerAdapter14handle_request17h0566aa2acd932792E
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined local_230 [544];
  
  (*(code *)
    PTR__ZN3vmm13rpc_interface20RuntimeApiController14handle_request17h35c4f70c8be1b5e8E_004bfc10)
            (local_230,param_1 + 0x20,param_2);
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3bb86a3ece522b8aE(local_230);
  lVar2 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h157a2b67ca9ce22aE
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),uVar1);
  if (lVar2 != 0) {
    _ZN4core3ptr172drop_in_place_LT_std__sync__mpsc__SendError_LT_alloc__boxed__Box_LT_core__result__Result_LT_vmm__rpc_interface__VmmData_C_vmm__rpc_interface__VmmActionError_GT__GT__GT__GT_17h3c95b2cc0c70d220E
              (lVar2);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h52c62474e6142415E(lVar2 != 0);
  return;
}