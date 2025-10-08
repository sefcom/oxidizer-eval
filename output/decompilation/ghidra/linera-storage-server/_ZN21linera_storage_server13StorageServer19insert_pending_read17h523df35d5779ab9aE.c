void _ZN21linera_storage_server13StorageServer19insert_pending_read17h523df35d5779ab9aE
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[3] = param_2;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3[2];
  *(undefined *)((long)param_1 + 0xb4) = 0;
  return;
}