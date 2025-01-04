void __rustcall
uu_sort::chunks::Chunk::try_new(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)__rust_alloc(0x78,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0025e857 to 0025e863 has its CatchHandler @ 0025e871 */
    uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_sort_src_chunks_rs_00301ac8);
                    /* catch() { ... } // from try @ 0025e7c7 with catch @ 0025e864 */
                    /* try { // try from 0025e867 to 0025e883 has its CatchHandler @ 0025e88c */
    core::ptr::
    drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>
              ();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar2);
  }
  puVar1[2] = param_2[2];
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  local_28 = *(undefined8 *)(param_3 + 0x1c);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  uStack_30 = *(undefined8 *)(param_3 + 0x1a);
  local_48 = *(undefined8 *)(param_3 + 0x14);
  uStack_40 = *(undefined8 *)(param_3 + 0x16);
  local_58 = *(undefined8 *)(param_3 + 0x10);
  uStack_50 = *(undefined8 *)(param_3 + 0x12);
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = param_3[4];
  uStack_84 = param_3[5];
  uStack_80 = param_3[6];
  uStack_7c = param_3[7];
  local_78 = param_3[8];
  uStack_74 = param_3[9];
  uStack_70 = param_3[10];
  uStack_6c = param_3[0xb];
  local_68 = param_3[0xc];
  uStack_64 = param_3[0xd];
  uStack_60 = param_3[0xe];
  uStack_5c = param_3[0xf];
                    /* try { // try from 0025e7c7 to 0025e7d3 has its CatchHandler @ 0025e864 */
  chunks::read::___closure__(&local_f8,&local_98,puVar1[1],puVar1[2]);
  if (local_f8 == -0x8000000000000000) {
    *(undefined4 *)param_1 = uStack_f0;
    *(undefined4 *)((long)param_1 + 4) = uStack_ec;
    *(undefined4 *)(param_1 + 1) = uStack_e8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_e4;
    core::ptr::
    drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>
              (puVar1);
    return;
  }
  puVar1[0xd] = local_a8;
  puVar1[0xe] = uStack_a0;
  puVar1[0xb] = local_b8;
  puVar1[0xc] = uStack_b0;
  puVar1[9] = local_c8;
  puVar1[10] = uStack_c0;
  puVar1[7] = local_d8;
  puVar1[8] = uStack_d0;
  puVar1[5] = CONCAT44(uStack_e4,uStack_e8);
  puVar1[6] = uStack_e0;
  puVar1[3] = local_f8;
  puVar1[4] = CONCAT44(uStack_ec,uStack_f0);
  param_1[1] = puVar1;
  *param_1 = 0;
  return;
}