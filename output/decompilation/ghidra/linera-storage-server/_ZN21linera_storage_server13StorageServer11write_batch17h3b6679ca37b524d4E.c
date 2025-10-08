void _ZN21linera_storage_server13StorageServer11write_batch17h3b6679ca37b524d4E
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[3] = param_2;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3[2];
  *(undefined *)(param_1 + 9) = 0;
  return;
}