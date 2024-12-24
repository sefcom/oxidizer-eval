undefined  [16] __rustcall
uu_sort::ext_sort::ext_sort(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined local_188 [160];
  undefined local_e8 [24];
  undefined8 local_d0 [2];
  undefined8 local_c0;
  
                    /* try { // try from 00278e4f to 00278e5d has its CatchHandler @ 0027903d */
  std::sync::mpmc::sync_channel(&local_1a8,1);
  uVar3 = uStack_1a0;
  uVar1 = local_1a8;
  local_1d8 = local_1a8;
  local_1d0 = uStack_1a0;
  local_1e8 = (undefined4)local_198;
  uStack_1e4 = local_198._4_4_;
  uStack_1e0 = (undefined4)uStack_190;
  uStack_1dc = uStack_190._4_4_;
                    /* try { // try from 00278e89 to 00278e97 has its CatchHandler @ 00279035 */
  std::sync::mpmc::sync_channel(&local_1a8,1);
  uVar4 = uStack_1a0;
  uVar2 = local_1a8;
  local_1c8 = local_1a8;
  local_1c0 = uStack_1a0;
  local_1b8 = local_198;
  local_1b0 = uStack_190;
                    /* try { // try from 00278ecb to 00278eda has its CatchHandler @ 00279023 */
  _<uu_sort::GlobalSettings_as_core::clone::Clone>::clone(local_d0,param_2);
  local_1a8 = local_198;
  uStack_1a0 = uStack_190;
  local_198 = uVar1;
  uStack_190 = uVar3;
  (*(code *)PTR_memcpy_00306060)(local_188,local_d0,0xa0);
  local_c0 = 0x8000000000000000;
  local_d0[0] = 0;
                    /* try { // try from 00278f31 to 00278f6c has its CatchHandler @ 00279042 */
  std::thread::Builder::spawn_unchecked(local_e8,local_d0,&local_1a8);
  core::result::Result<T,E>::expect(local_d0,local_e8);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(local_d0);
  if (*(long *)(param_2 + 0x30) == -0x8000000000000000) {
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_198 = param_3[2];
    uStack_190 = param_3[3];
                    /* try { // try from 00278f8c to 00278ff1 has its CatchHandler @ 0027901a */
    auVar5 = reader_writer(param_1,param_2,&local_1e8,uVar2,uVar4,&local_1a8,param_4);
  }
  else {
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_198 = param_3[2];
    uStack_190 = param_3[3];
    auVar5 = reader_writer(param_1,param_2,&local_1e8,uVar2,uVar4,&local_1a8,param_4);
  }
  core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&local_1e8);
  return auVar5;
}