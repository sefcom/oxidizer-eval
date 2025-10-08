void _ZN7uu_sort6chunks5Chunk7try_new17h11865afbebe6af3dE
               (undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar5 = (undefined4 *)(*(code *)PTR__RNvCsgYTF1aGAkck_7___rustc12___rust_alloc_00296c70)(0x90,8);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + 4);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
                    /* try { // try from 001d74c4 to 001d74ce has its CatchHandler @ 001d7565 */
    _ZN7uu_sort6chunks4read28__u7b__u7b_closure_u7d__u7d_17h464d8e4f4861e1ebE
              (&local_98,param_3,*(undefined8 *)(puVar5 + 2),*(undefined8 *)(puVar5 + 4));
    *(undefined8 *)(puVar5 + 0x22) = local_28;
    *(undefined8 *)(puVar5 + 0x1e) = local_38;
    *(undefined8 *)(puVar5 + 0x20) = uStack_30;
    *(undefined8 *)(puVar5 + 0x1a) = local_48;
    *(undefined8 *)(puVar5 + 0x1c) = uStack_40;
    *(undefined8 *)(puVar5 + 0x16) = local_58;
    *(undefined8 *)(puVar5 + 0x18) = uStack_50;
    *(undefined8 *)(puVar5 + 0x12) = local_68;
    *(undefined8 *)(puVar5 + 0x14) = uStack_60;
    *(undefined8 *)(puVar5 + 0xe) = local_78;
    *(undefined8 *)(puVar5 + 0x10) = uStack_70;
    *(undefined8 *)(puVar5 + 10) = uStack_88;
    *(undefined8 *)(puVar5 + 0xc) = uStack_80;
    *(undefined8 *)(puVar5 + 6) = local_98;
    *(undefined8 *)(puVar5 + 8) = uStack_90;
    param_1[1] = puVar5;
    *param_1 = 0;
    return;
  }
                    /* try { // try from 001d7556 to 001d7562 has its CatchHandler @ 001d7578 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
            (&PTR_s_src_uu_sort_src_chunks_rs_0028d640);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}