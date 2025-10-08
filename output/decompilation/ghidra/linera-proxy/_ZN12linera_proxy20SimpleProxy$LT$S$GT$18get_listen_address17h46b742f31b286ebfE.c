void _ZN12linera_proxy20SimpleProxy_LT_S_GT_18get_listen_address17h46b742f31b286ebfE
               (undefined2 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = _ZN12linera_proxy20SimpleProxy_LT_S_GT_4port17h7e434b38376c2effE(param_2);
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  return;
}