void __rustcall uu_shred::BytesWriter::from_pass_type(undefined *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined auVar5 [16];
  undefined auStack_20028 [131072];
  
  puVar2 = &stack0xffffffffffffffd8;
  do {
    puVar3 = puVar2;
    *(undefined8 *)(puVar3 + -0x1000) = 0;
    puVar2 = puVar3 + -0x1000;
  } while (puVar3 + -0x1000 != auStack_20028);
  if (*param_2 == '\0') {
    cVar1 = param_2[1];
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc165;
    (*(code *)PTR_memset_0023d1a8)(puVar3 + -0x1004,cVar1,0x10002);
  }
  else {
    if (*param_2 == '\x02') {
      *(undefined8 *)(puVar3 + -0x1038) = 0x1bc135;
      rand_core::SeedableRng::from_entropy(param_1 + 0x10);
      uVar4 = 0;
      *(undefined8 *)(puVar3 + -0x1038) = 0x1bc14b;
      (*(code *)PTR_memset_0023d1a8)(param_1 + 0x150,0,0x10000);
      goto LAB_001bc20d;
    }
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc182;
    (*(code *)PTR_memset_0023d1a8)(puVar3 + 0xeffe,0,0x10002);
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc190;
    core::slice::_<impl[T]>::chunks_exact_mut(puVar3 + -0x1030,puVar3 + 0xeffe);
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc198;
    auVar5 = _<core::slice::iter::ChunksExactMut<T>as_core::iter::traits::iterator::Iterator>::next
                       (puVar3 + -0x1030);
    if (auVar5._0_8_ != 0) {
      do {
        *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1c6;
        core::slice::_<impl[T]>::copy_from_slice
                  (auVar5._0_8_,auVar5._8_8_,param_2 + 1,3,&PTR_DAT_00238668);
        *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1ce;
        auVar5 = _<core::slice::iter::ChunksExactMut<T>as_core::iter::traits::iterator::Iterator>::
                 next(puVar3 + -0x1030);
      } while (auVar5._0_8_ != 0);
    }
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1eb;
    (*(code *)PTR_memcpy_0023cbc8)(puVar3 + -0x1004,puVar3 + 0xeffe,0x10002);
  }
  *(undefined8 *)(param_1 + 0x10008) = 0;
  *(undefined8 *)(puVar3 + -0x1038) = 0x1bc20a;
  (*(code *)PTR_memcpy_0023cbc8)(param_1 + 1,puVar3 + -0x1004,0x10002);
  uVar4 = 1;
LAB_001bc20d:
  *param_1 = uVar4;
  return;
}